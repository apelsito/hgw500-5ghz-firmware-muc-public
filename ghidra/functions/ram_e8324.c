/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e8324 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e8324(short *param_1)

{
  if (*param_1 == 0) {
    _DAT_ram_e5044000 = _DAT_ram_e5044000 & 0xffffff07;
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    _DAT_ram_e5044000 = _DAT_ram_e5044000 & 0xffffc1ff;
  }
  return;
}


