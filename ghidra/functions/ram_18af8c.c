/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018af8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018af8c(uint param_1,int param_2)

{
  if (param_2 != 0) {
    _DAT_ram_e60002b4 = param_1 & 0x1ff;
    _DAT_ram_e60002b0 = 1;
    return;
  }
  _DAT_ram_e60002b0 = 0;
  _DAT_ram_e60002b4 = 0;
  return;
}


