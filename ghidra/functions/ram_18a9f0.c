/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a9f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018a9f0(int param_1)

{
  if (param_1 != 0) {
    _DAT_ram_e6010068 = 0;
  }
  _DAT_ram_e6000008 = param_1;
  return;
}


