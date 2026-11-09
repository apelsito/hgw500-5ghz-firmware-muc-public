/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6854 */

void FUN_ram_000e6854(uint param_1)

{
  if ((int)param_1 < 0x19) {
    (&DAT_ram_0018c034)[param_1 >> 3] =
         (&DAT_ram_0018c034)[param_1 >> 3] | (byte)(1 << (param_1 & 7));
  }
  else {
    FUN_ram_000f7c10(15000,6,param_1,&LAB_ram_000eacc8,2);
  }
  return;
}


