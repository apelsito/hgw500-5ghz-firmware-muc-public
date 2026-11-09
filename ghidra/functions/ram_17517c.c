/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017517c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0017517c(int param_1)

{
  FUN_ram_001733a0(1,1,0);
  if (param_1 != 0) {
    _DAT_ram_e6091034 = 200;
    _DAT_ram_e609102c = DAT_ram_0018c3ac + -2;
    if (_DAT_ram_e609102c < 0xb) {
      _DAT_ram_e609102c = 10;
    }
    _DAT_ram_e6091000 = 5;
    FUN_ram_00183120();
  }
  _DAT_ram_e6091034 = 100;
  _DAT_ram_e609102c = DAT_ram_0018c3ac;
  _DAT_ram_e6091000 = 5;
  FUN_ram_00183120();
  return;
}


