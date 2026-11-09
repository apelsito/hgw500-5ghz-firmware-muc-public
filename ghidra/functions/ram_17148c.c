/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017148c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0017148c(uint param_1)

{
  if (0xff < param_1) {
    return param_1;
  }
  if (param_1 < 0x80) {
    return param_1;
  }
  if (0x7f < param_1 - 0x40) {
    _DAT_ram_e6040168 = DAT_ram_0018c384 | 0x40;
    DAT_ram_0018c384 = _DAT_ram_e6040168;
    DAT_ram_0018c398 = _DAT_ram_e6040168;
    return param_1 - 0x80;
  }
  _DAT_ram_e6040168 = DAT_ram_0018c384 & 0xffffffbf;
  DAT_ram_0018c384 = _DAT_ram_e6040168;
  DAT_ram_0018c398 = _DAT_ram_e6040168;
  DAT_ram_0018c39c = _DAT_ram_e6040168;
  return param_1 - 0x40;
}


