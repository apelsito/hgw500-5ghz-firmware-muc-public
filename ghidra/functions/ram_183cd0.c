/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00183cd0(int param_1)

{
  DAT_ram_0018c40c = DAT_ram_0018c40c + -1;
  if (param_1 != 2) {
    _DAT_ram_e6000024 = param_1;
    FUN_ram_000e4fa0(10);
  }
  return;
}


