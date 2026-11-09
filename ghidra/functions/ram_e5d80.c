/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e5d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_000e5d80(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_ram_000ecf3c();
  DAT_ram_6003a3c0 = 0xda;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar2 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar2 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar2 = 0;
        FUN_ram_000ee260(s_SPARE_register_has_NULL_address__ram_001bc3fc);
        FUN_ram_80030314();
        goto LAB_ram_000e5e18;
      }
    }
  }
  else {
    uVar2 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if (uVar2 == 0) {
    FUN_ram_000ee260(s_SPARE_register_has_NULL_address__ram_001bc3fc);
    FUN_ram_80030314();
  }
LAB_ram_000e5e18:
  _DAT_ram_8003ffe4 = FUN_ram_000e2000;
  _DAT_ram_8003ffe8 = &DAT_ram_0018bb92;
  _DAT_ram_8003ffec = &LAB_ram_80020000;
  _DAT_ram_8003fff0 = &DAT_ram_800261a4;
  _DAT_ram_8003fff4 = 0x7c97be8f;
  DAT_ram_6003a3c0 = 0xe8;
  FUN_ram_000e5c94(uVar2);
  DAT_ram_6003a3c0 = 0xeb;
  FUN_ram_000e2088();
  DAT_ram_6003a3c0 = 0xee;
  iVar1 = FUN_ram_000e9288(uVar2);
  if (iVar1 != 0) {
    FUN_ram_000ee260(s_Halting_because_os_state_init_fa_ram_001bc420);
    FUN_ram_80030314();
  }
  DAT_ram_6003a3c0 = 0xf4;
  local_30 = DAT_ram_001a5370;
  local_2c = DAT_ram_001a5374;
  local_28 = DAT_ram_001a5378;
  local_24 = DAT_ram_001a537c;
  local_20 = DAT_ram_001a5380;
  local_1c = DAT_ram_001a5384;
  local_18 = DAT_ram_001a5388;
  local_14 = DAT_ram_001a538c;
  FUN_ram_000f3d04(s_muc_uncached_stack_ram_001bc448,&local_30,0x20);
  iVar1 = FUN_ram_000eeba4(&local_30,&DAT_ram_001bc45c);
  return iVar1 == 0;
}


