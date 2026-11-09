/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e5c34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_000e5c34(void)

{
  if ((0x7fffffff < _DAT_ram_e00000bc) && (_DAT_ram_e00000bc < 0x80080000)) {
    return _DAT_ram_e00000bc + 0xe0000000;
  }
  if (_DAT_ram_e00000bc < 0x8000000) {
    return _DAT_ram_e00000bc + 0x40000000;
  }
  if (0xbfffffff < _DAT_ram_e00000bc) {
    return _DAT_ram_e00000bc;
  }
  return 0;
}


