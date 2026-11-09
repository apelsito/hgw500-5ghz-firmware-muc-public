/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001652c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_00165230(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar2 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar2 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = _DAT_ram_e00000bc + 0xe0000000;
  }
  puVar1 = *(undefined2 **)(uVar2 + 0x188);
  *(undefined4 *)(param_1 + 0x5b94) = 0;
  *(undefined4 *)(param_1 + 0x5b8c) = 100;
  *(undefined4 *)(param_1 + 0x5b90) = 1000;
  *(undefined4 *)(param_1 + 0x5b98) = 0;
  puVar1[2] = 0;
  puVar1[1] = &UNK_auxregs_03e8;
  *puVar1 = 100;
  return;
}


