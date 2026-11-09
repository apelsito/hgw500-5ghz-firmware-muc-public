/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001739c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001739c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_ram_0018291c();
  FUN_ram_001733a0(param_2,param_3,param_4);
  _DAT_ram_e6090490 = 3;
  DAT_ram_0018c3a4 = _DAT_ram_e6090488;
  _DAT_ram_e6090488 = 0x1000;
  _DAT_ram_e6091014 = param_1;
  _DAT_ram_e6091018 = param_1;
  FUN_ram_001834fc(param_1);
  _DAT_ram_e6091000 = 8;
  return;
}


