/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7d60 */

void FUN_ram_000f7d60(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0xfffff000) == 0) {
    return;
  }
  if (0x1ff < (param_1 & 0xfff)) {
    return;
  }
  iVar1 = (param_1 & 0xfff) * 0x24;
  if ((param_1 & 0xfffff000) != (*(uint *)(&DAT_ram_001fbed4 + iVar1) & 0xfffff000)) {
    return;
  }
  if (iVar1 == -0x1fbebc) {
    return;
  }
  *(undefined4 *)(&DAT_ram_001fbed4 + iVar1) = 0;
  return;
}


