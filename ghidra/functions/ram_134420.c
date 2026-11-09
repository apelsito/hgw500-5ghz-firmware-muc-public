/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00134420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00134420(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_00103cf4(*(undefined4 *)(param_1 + 0x3b20));
  uVar2 = 0;
  if (iVar1 != 0) {
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
    DAT_ram_800371e0 = DAT_ram_800371e0 + 1;
    *(undefined4 *)(uVar2 + 0x178) = 1;
    if (*(int *)(uVar2 + 0x17c) == 0) {
      uVar2 = 0x20;
    }
    else {
      if (*(int *)(param_1 + 0x3f7c) != 0) {
        uVar2 = 0;
        do {
          FUN_ram_00102688(*(undefined4 *)(param_1 + 0x3b20),uVar2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x3f7c));
      }
      uVar2 = 0;
    }
  }
  iVar1 = FUN_ram_00103cd8(*(undefined4 *)(param_1 + 0x3b20));
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x40;
    DAT_ram_800371e4 = DAT_ram_800371e4 + 1;
  }
  return uVar2;
}


