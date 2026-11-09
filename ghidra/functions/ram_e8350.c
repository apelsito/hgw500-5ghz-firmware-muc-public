/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e8350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e8350(short *param_1)

{
  if (*param_1 == 0) {
    _DAT_ram_e5044000 = _DAT_ram_e5044000 | 0xf8;
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    _DAT_ram_e5044000 = _DAT_ram_e5044000 | 0x3e00;
  }
  return;
}


