/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fe774 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000fe774(int param_1)

{
  uint uVar1;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  *(undefined4 *)(uVar1 + 0x178) = 0;
  *(undefined1 **)(param_1 + 0x118) = &DAT_ram_e5031f40;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if ((uVar1 == 0) || (*(int *)(uVar1 + 0x38) != 6)) {
    _DAT_ram_e5031f40 = (uint)DAT_ram_001a5ea8;
  }
  else {
    DAT_ram_8002ca80 = &DAT_ram_e5031f40;
    DAT_ram_8002ca84 = 1;
    _DAT_ram_e5031f40 = 0xc;
  }
  _DAT_ram_e5031f44 = (uint)DAT_ram_001a5eac;
  _DAT_ram_e5031f48 = (uint)DAT_ram_001a5eb0;
  *(undefined1 **)(param_1 + 0x128) = &DAT_ram_e5031f60;
  _DAT_ram_e5031f60 = (uint)DAT_ram_001a5e64;
  _DAT_ram_e5031f64 = (uint)DAT_ram_001a5e68;
  _DAT_ram_e5031f68 = (uint)DAT_ram_001a5e6c;
  _DAT_ram_e5031f6c = (uint)DAT_ram_001a5e70;
  *(undefined1 **)(param_1 + 0x14c) = &DAT_ram_e5031f80;
  _DAT_ram_e5031f80 = (uint)DAT_ram_001a5e90;
  _DAT_ram_e5031f84 = (uint)DAT_ram_001a5e94;
  _DAT_ram_e5031f88 = (uint)DAT_ram_001a5e98;
  *(undefined1 **)(param_1 + 0x154) = &DAT_ram_e5031fa0;
  _DAT_ram_e5031fa0 = (uint)DAT_ram_0018cd00;
  _DAT_ram_e5031fa4 = 0;
  _DAT_ram_e5031fa8 = 0;
  _DAT_ram_e5031fac = 0;
  _DAT_ram_e5031fb0 = 0;
  _DAT_ram_e5031fb4 = 0;
  _DAT_ram_e5031fb8 = 0;
  _DAT_ram_e5031fbc = 0;
  *(undefined4 *)(param_1 + 0x144) = 0xe5038000;
  if (*(char *)(param_1 + 0xd2) != '\0') {
    FUN_ram_000fe74c(0xe5038000,&DAT_ram_001a5e74,0x1c);
  }
  *(undefined1 **)(param_1 + 0x15c) = &DAT_ram_e5031fc0;
  _DAT_ram_e5031fc0 = (uint)DAT_ram_001a5e9c;
  _DAT_ram_e5031fc4 = (uint)DAT_ram_001a5ea0;
  _DAT_ram_e5031fc8 = (uint)DAT_ram_001a5ea4;
  return;
}


