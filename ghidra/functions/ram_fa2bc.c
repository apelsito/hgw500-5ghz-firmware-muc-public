/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fa2bc */

void FUN_ram_000fa2bc(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x30) {
    iVar1 = param_1 * 0x6c + DAT_ram_0018c068;
    if (iVar1 != 0) {
      FUN_ram_000f9a10(iVar1);
    }
  }
  return;
}


