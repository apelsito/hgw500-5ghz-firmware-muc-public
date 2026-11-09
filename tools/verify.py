"""Verify this carrier, its ELF segments, hex dump and all assembly byte rows."""

import argparse
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess
import sys


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def parse_elf(raw):
    if raw[:7] != b"\x7fELF\x01\x01\x01":
        raise ValueError("Expected ELF32 little-endian input")
    fields = struct.unpack_from("<16sHHIIIIIHHHHHH", raw)
    (_, elf_type, machine, version, entry, phoff, shoff, flags, ehsize,
     phentsize, phnum, shentsize, shnum, shstrndx) = fields
    if machine != 93 or phentsize != 32 or phoff + phnum * phentsize > len(raw):
        raise ValueError("Unsupported carrier header")
    segments = []
    for index in range(phnum):
        kind, offset, vaddr, paddr, filesz, memsz, permissions, align = struct.unpack_from(
            "<IIIIIIII", raw, phoff + index * phentsize)
        if offset + filesz > len(raw) or filesz > memsz:
            raise ValueError("Invalid program header bounds")
        segments.append({"index": index, "type": kind, "file_offset": offset,
                         "virtual_address": hex(vaddr), "physical_address": hex(paddr),
                         "file_bytes": filesz, "memory_bytes": memsz,
                         "flags": permissions, "alignment": align,
                         "sha256": sha256(raw[offset:offset + filesz])})
    return {"class": "ELF32", "byte_order": "little", "e_machine": machine,
            "machine_declared": "ARCompact", "entry": hex(entry),
            "program_header_count": phnum, "section_header_count": shnum,
            "elf_flags": hex(flags), "segments": segments}


def verify_folder(root, role, filename, expected):
    folder = root
    raw = (folder / filename).read_bytes()
    if sha256(raw) != expected:
        raise ValueError("Input hash mismatch")
    layout = parse_elf(raw)
    saved = json.loads((folder / "analysis" / "elf-layout.json").read_text())
    if saved != layout:
        raise ValueError("ELF layout differs from independent reread")
    checks = []
    for segment in layout["segments"]:
        if not segment["file_bytes"]:
            continue
        path = folder / "segments" / ("segment-" + str(segment["index"]).zfill(2) + ".bin")
        data = path.read_bytes()
        offset = segment["file_offset"]
        if data != raw[offset:offset + segment["file_bytes"]]:
            raise ValueError("Segment bytes differ")
        hex_rows = path.with_suffix(".hex.tsv").read_text().splitlines()[1:]
        restored = bytearray()
        base = int(segment["virtual_address"], 16)
        for hex_row in hex_rows:
            file_text, address_text, hex_text, readable = hex_row.split("\t")
            if int(file_text, 16) != offset + len(restored) or int(address_text, 16) != base + len(restored):
                raise ValueError("Hex dump address differs")
            restored.extend(bytes.fromhex(hex_text))
        if bytes(restored) != data:
            raise ValueError("Hex dump bytes differ")
        check = {"index": segment["index"], "file_bytes": len(data), "sha256": sha256(data)}
        if segment["flags"] & 1:
            assembly = path.with_suffix(".asm").read_text()
            base = int(segment["virtual_address"], 16)
            seen = set()
            rows = 0
            unknown_rows = 0
            for line in assembly.splitlines():
                match = re.match(r"^\s*([0-9a-f]+):\s*\t([0-9a-f ]+)\t(.*)", line)
                if not match:
                    continue
                address = int(match.group(1), 16)
                tokens = match.group(2).split()
                decoded_bytes = b"".join(struct.pack("<H", int(token, 16))
                                         if len(token) == 4 else bytes.fromhex(token)
                                         for token in tokens)
                local = address - base
                if local < 0 or data[local:local + len(decoded_bytes)] != decoded_bytes:
                    raise ValueError("Assembly bytes differ at " + hex(address))
                positions = set(range(local, local + len(decoded_bytes)))
                if positions & seen:
                    raise ValueError("Overlapping byte rows")
                seen.update(positions)
                rows += 1
                unknown_rows += match.group(3).lstrip().startswith((".word", ".long", ".short", ".byte"))
            missing = sorted(set(range(len(data))) - seen)
            check.update({"byte_rows": rows, "bytes_verified": len(seen),
                          "all_assembly_rows_verified": True,
                          "all_segment_bytes_preserved_in_hex": True,
                          "bytes_without_assembly_row": len(missing),
                          "first_missing_segment_offsets": missing[:20],
                          "unknown_or_data_directive_rows": unknown_rows})
        checks.append(check)
    return {"role": role, "sha256": expected, "input_bytes": len(raw),
            "segments": checks, "all_checks_passed": True,
            "validation_scope": "Byte identity and linear ARC700 decoding export, without function/semantic validation."}


def run_json_verifier(script, arguments):
    """Run an offline verifier using this Python interpreter; never launch Ghidra."""
    result = subprocess.run([sys.executable, "-E", str(script), *map(str, arguments)],
                            capture_output=True, text=True, encoding="utf-8")
    if result.returncode:
        raise ValueError("Verifier failed: " + script.name + "\n" + result.stderr + result.stdout)
    report = json.loads(result.stdout)
    if not isinstance(report, dict):
        raise ValueError("Expected verifier JSON object: " + script.name)
    return report


def verify_artifact_manifest(root, role=None):
    """Verify size/SHA of every row and coverage of the whole published tree."""
    root = root.resolve()
    manifest_path = root / "artifact-manifest.json"
    raw = manifest_path.read_bytes()
    manifest = json.loads(raw)
    schema = ("openmitrastar.quantenna-carrier-files/v1" if role else
              "openmitrastar.quantenna-analysis-files/v1")
    if manifest.get("schema") != schema or (role and manifest.get("role") != role):
        raise ValueError("Artifact manifest schema/role mismatch")
    rows = manifest.get("files")
    if not isinstance(rows, list) or not rows:
        raise ValueError("Artifact manifest must contain file rows")
    ignored = {".git", "out", "__pycache__"}
    seen, total = set(), 0
    for row in rows:
        relative = row.get("path")
        if not isinstance(relative, str) or not relative:
            raise ValueError("Invalid artifact path")
        parts = relative.split("/")
        if ("\\" in relative or ":" in relative or
                any(part in {"", ".", ".."} for part in parts) or
                ignored.intersection(parts) or relative == "artifact-manifest.json"):
            raise ValueError("Unsafe/excluded artifact path: " + relative)
        if relative in seen:
            raise ValueError("Duplicate artifact row: " + relative)
        path = root.joinpath(*parts).resolve()
        if not path.is_relative_to(root) or not path.is_file():
            raise ValueError("Missing/escaping artifact: " + relative)
        data = path.read_bytes()
        if len(data) != row.get("bytes") or sha256(data) != row.get("sha256"):
            raise ValueError("Artifact size/SHA mismatch: " + relative)
        seen.add(relative)
        total += len(data)
    actual = {path.relative_to(root).as_posix() for path in root.rglob("*")
              if path.is_file() and not ignored.intersection(path.relative_to(root).parts)
              and path != manifest_path}
    if seen != actual:
        raise ValueError("Artifact inventory mismatch: unlisted=" + repr(sorted(actual-seen)[:20]) +
                         "; absent=" + repr(sorted(seen-actual)[:20]))
    if manifest.get("total_files") != len(seen) or manifest.get("total_bytes") != total:
        raise ValueError("Artifact manifest totals mismatch")
    return {"schema": schema, "files_verified": len(seen), "bytes_verified": total,
            "sha256": sha256(raw), "complete_inventory_verified": True, "all_checks_passed": True}


def write_new_report(path, report):
    with path.open("x", encoding="utf-8", newline="\n") as stream:
        stream.write(json.dumps(report, indent=2) + "\n")


def verify_native(root, role, filename, expected):
    root = root.resolve()
    scripts, export = root / "tools/ghidra/scripts", root / "ghidra"
    result = run_json_verifier(scripts / "verify_export.py",
                              ["--role", role, "--original", root / filename, "--export", export])
    if (result.get("all_checks_passed") is not True or result.get("role") != role or
            result.get("original_sha256") != expected or
            result.get("original_entire_file_preserved") is not True):
        raise ValueError("Native export verification failed: " + role)
    roundtrip = run_json_verifier(scripts / "compare.py",
                                 [export / "ghidra-snapshot.json", export / "roundtrip-snapshot.json"])
    if roundtrip.get("equal") is not True or roundtrip.get("facets_verified_each") != 13:
        raise ValueError("Expected exact restoration of all 13 snapshot facets")
    snapshot = json.loads((export / "ghidra-snapshot.json").read_text(encoding="utf-8"))
    facets = {"bookmarks.tsv", "comments.tsv", "datatype-details.tsv", "datatypes.tsv",
              "defined-data.tsv", "functions.tsv", "instructions.tsv", "memory-blocks.tsv",
              "memory-sources.tsv", "original-file-bytes.tsv", "references.tsv",
              "symbols.tsv", "variables.tsv"}
    if (set(snapshot.get("artifacts", {})) != facets or
            snapshot.get("executable_sha256") != expected or
            snapshot.get("language_id") != "ARCompact:LE:32:default" or
            snapshot.get("compiler_spec_id") != "default"):
        raise ValueError("Snapshot facet/input/language/compiler mismatch")
    for facet, field in (("functions.tsv", "functions"), ("instructions.tsv", "instructions")):
        if snapshot["artifacts"][facet]["rows"] != result[field]:
            raise ValueError("Snapshot/native export inventory mismatch: " + facet)
    support = root / "ghidra-support"
    receipt_raw = (support / "extension-receipt.json").read_bytes()
    receipt = json.loads(receipt_raw)
    packages = list(support.glob("*.zip"))
    if len(packages) != 1:
        raise ValueError("Expected one preserved processor extension ZIP")
    package = packages[0]
    package_raw = package.read_bytes()
    digest = sha256(package_raw)
    if (digest != receipt.get("sha256") or
            digest != "8153e331b8521d5c5bb0797aaa1d7235c8246c96f72a8c55aa9b5b26db63595d" or
            receipt.get("extension") != "ARCompact" or
            receipt.get("ghidra_version") != snapshot.get("ghidra_version") or
            receipt.get("source_commit") != "41703a7bbac5a316e6e72381af67d5ee0e1d9d25"):
        raise ValueError("Processor extension ZIP/receipt pin mismatch")
    extension = {"extension": receipt["extension"], "ghidra_version": receipt["ghidra_version"],
                 "source_commit": receipt["source_commit"], "sha256": digest,
                 "package": package.name, "package_bytes": len(package_raw),
                 "receipt_sha256": sha256(receipt_raw), "all_checks_passed": True}
    return {"all_checks_passed": True, "export": result, "roundtrip": roundtrip,
            "language": snapshot["language_id"], "compiler": snapshot["compiler_spec_id"],
            "extension": extension, "target_executed": False, "hardware_accessed": False}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument("--output", type=Path, help="Create a new report; never replace an existing output")
    args = parser.parse_args()
    if args.output and args.output.exists():
        raise FileExistsError("Output already exists: " + str(args.output))
    report = verify_folder(args.root, 'muc', 'qtn_driver.qtn_ruby.0.bin', '71dcd32849f122c09397490914227af6f77e51c34d15615028faa3d0fabb0fe4')
    report["native_ghidra"] = verify_native(args.root, 'muc', 'qtn_driver.qtn_ruby.0.bin', '71dcd32849f122c09397490914227af6f77e51c34d15615028faa3d0fabb0fe4')
    report["artifact_manifest"] = verify_artifact_manifest(args.root, 'muc')
    if args.output:
        write_new_report(args.output, report)
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
