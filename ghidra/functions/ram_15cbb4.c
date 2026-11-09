/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015cbb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0015cbb4(void)

{
  if (_DAT_ram_e102001c < _DAT_ram_e1020020) {
    if ((0x10000 - _DAT_ram_e1020020) + _DAT_ram_e102001c < 0x20) {
      return 1;
    }
  }
  else if (_DAT_ram_e102001c - _DAT_ram_e1020020 < 0x20) {
    return 1;
  }
  return 0;
}


