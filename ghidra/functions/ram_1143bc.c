/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001143bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001143bc(void)

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
  uVar1 = *(uint *)(uVar1 + 0x54);
  if ((uVar1 < 0x80000000) || (0x8007ffff < uVar1)) {
    if (uVar1 < 0x8000000) {
      uVar1 = uVar1 + 0x40000000;
    }
    else if (uVar1 < 0xc0000000) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = uVar1 + 0xe0000000;
  }
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0xe08) = 1;
    *(undefined4 *)(uVar1 + 0xe0c) = 6;
    *(undefined4 *)(uVar1 + 0xe10) = 10;
    return;
  }
  return;
}


