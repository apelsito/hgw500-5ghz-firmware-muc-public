/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6d28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e6d28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar3 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _DAT_ram_e00000bc + 0xe0000000;
  }
  FUN_ram_000e693c();
  if (*(int *)(uVar3 + 0x3c) != 0x501) goto LAB_ram_000e6dc8;
  if (param_1 == 0x1e) {
    iVar2 = *(int *)(uVar3 + 0x4c);
joined_r0x000e6db6:
    if (iVar2 != 0) goto LAB_ram_000e6dc8;
    uVar1 = 0x11;
  }
  else {
    if (param_1 < 0x1f) {
      if (param_1 != 0xe) goto LAB_ram_000e6dc8;
LAB_ram_000e6da4:
      FUN_ram_000e6854(0xd);
      iVar2 = *(int *)(uVar3 + 0x4c);
      goto joined_r0x000e6db6;
    }
    if (param_1 != 0x1f) {
      if (param_1 != 0x20) goto LAB_ram_000e6dc8;
      goto LAB_ram_000e6da4;
    }
    uVar1 = 0xd;
  }
  FUN_ram_000e6854(uVar1);
LAB_ram_000e6dc8:
  FUN_ram_000e68a4();
  return;
}


