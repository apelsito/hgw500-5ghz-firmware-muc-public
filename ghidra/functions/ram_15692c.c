/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015692c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0015692c(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_e1035000 = _DAT_ram_e1035000 & 0xffff00fe;
  }
  else {
    _DAT_ram_e1035000 = _DAT_ram_e1035000 & 0xffff00ff | 1;
  }
  sync();
  return _DAT_ram_e1035000;
}


