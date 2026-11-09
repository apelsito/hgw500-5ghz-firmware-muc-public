/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158ac0 */

void FUN_ram_00158ac0(int param_1)

{
  int iVar1;
  
  if ((DAT_ram_0018c270 != 0) && (iVar1 = DAT_ram_0018c270 + param_1 * 0x2c, iVar1 != 0)) {
    FUN_ram_000eea80(iVar1,0,0x2c);
  }
  return;
}


