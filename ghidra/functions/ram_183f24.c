/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183f24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00183f24(int param_1,int param_2)

{
  _DAT_ram_e60900d8 = *(int *)(&DAT_ram_0019d110 + param_1 * 0x1e0 + param_2 * 4) + 0x1f0000;
  return;
}


