/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00138060 */

uint FUN_ram_00138060(uint param_1,int param_2)

{
  uint uVar1;
  
  if (((param_1 != 0) && (0 < param_2)) && (param_2 < 0x21)) {
    if (0xc < param_2) {
      uVar1 = (uint)(short)((short)param_2 + -0xc);
      return (int)(param_1 & 0x7ff << (uVar1 & 0x1f) & 0xffff) >> (uVar1 & 0x1f);
    }
    uVar1 = (uint)(short)(0xc - (short)param_2);
    return (param_1 & 0x7ff >> (uVar1 & 0x1f) & 0xffff) << (uVar1 & 0x1f) & 0xffff;
  }
  return 0;
}


