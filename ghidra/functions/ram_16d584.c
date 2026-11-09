/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016d584 */

int FUN_ram_0016d584(uint param_1)

{
  int iVar1;
  
  if (DAT_ram_0018c010 == 3) {
    iVar1 = (*DAT_ram_002017f0)(DAT_ram_0018c2f0);
  }
  else {
    iVar1 = (*(int *)(&DAT_ram_00194b78 + ((int)(param_1 & 0xff) >> 4) * 4) + (param_1 & 0xf)) * 2;
  }
  return iVar1;
}


