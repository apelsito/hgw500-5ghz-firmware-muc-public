/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e49a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e49a0(int param_1)

{
  if (param_1 != 0) {
    _DAT_ram_e60504b4 = 0;
    _DAT_ram_e60504b0 = 1;
    return;
  }
  _DAT_ram_e60504b4 = 1;
  _DAT_ram_e60504b0 = 0;
  return;
}


