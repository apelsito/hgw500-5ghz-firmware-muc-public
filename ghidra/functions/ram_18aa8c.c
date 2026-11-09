/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018aa8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018aa8c(int param_1)

{
  if (param_1 != 0) {
    _DAT_ram_e6090284 = 0x65;
    _DAT_ram_e6090220 = 1;
    return;
  }
  _DAT_ram_e6090284 = 9;
  _DAT_ram_e6090220 = 0;
  return;
}


