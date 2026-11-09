/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00175200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00175200(undefined4 param_1)

{
  FUN_ram_00174d2c();
  FUN_ram_0017517c(1);
  FUN_ram_001733a0(0,1,0);
  _DAT_ram_e6091034 = 200;
  _DAT_ram_e609102c = DAT_ram_0018c3ac + -2;
  if (_DAT_ram_e609102c < 0xb) {
    _DAT_ram_e609102c = 10;
  }
  _DAT_ram_e6091000 = 4;
  FUN_ram_00183120();
  _DAT_ram_e6091034 = 100;
  _DAT_ram_e609102c = DAT_ram_0018c3ac;
  _DAT_ram_e6091000 = 4;
  FUN_ram_00183120();
  FUN_ram_0017517c(0);
  FUN_ram_00175f2c(param_1);
  return;
}


