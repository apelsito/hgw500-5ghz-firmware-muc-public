/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141ebc */

undefined2 FUN_ram_00141ebc(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x683);
  cVar1 = *(char *)(param_1 + 0x682);
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x4c8) + 0x10);
  if ((*(ushort *)(param_1 + 0xc) & 0x4000) == 0) {
    if (uVar4 < 0x4d) {
      return (&DAT_ram_001a925c + (uint)(cVar1 != '\0') * 0x4d + (uint)(uVar3 != 0) * 0x9a)[uVar4];
    }
    return (&DAT_ram_001a925c)[(uint)(cVar1 != '\0') * 0x4d + (uint)(uVar3 != 0) * 0x9a];
  }
  uVar2 = (uint)(byte)(&DAT_ram_001a9058)[uVar4];
  if (((&DAT_ram_001a9058)[uVar4] & 0x40) == 0) {
    if ((uVar2 & 0xf) < 10) {
      return *(undefined2 *)
              ((int)(&DAT_ram_001a972c +
                    uVar3 * 0x140 + (uint)(cVar1 != '\0') * 0xa0 + ((int)uVar2 >> 4 & 3U) * 0x14) +
              (uVar2 & 0xf) * 2);
    }
    return *(undefined2 *)
            (&DAT_ram_001a972c +
            uVar3 * 0x140 + (uint)(cVar1 != '\0') * 0xa0 + ((int)uVar2 >> 4 & 3U) * 0x14);
  }
  uVar4 = (uVar2 & 0xffffffbf) + 0x21;
  if ((0x20 < uVar4) && (uVar4 < 0x4d)) {
    return *(undefined2 *)((uint)(cVar1 != '\0') * 0x58 + uVar3 * 0xb0 + 0x1a9e6a + uVar4 * 2);
  }
  return *(undefined2 *)
          (&PTR_DAT_ram_00340027_ram_001a9eac + uVar3 * 0x2c + (uint)(cVar1 != '\0') * 0x16);
}


