/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd2e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000fd2e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
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
  iVar4 = 0;
  if (uVar1 != 0) {
    iVar4 = *(int *)(uVar1 + 0x38);
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2000);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x202c);
  if (iVar4 < 3) {
    *puVar3 = 0xfffffe00;
    uVar1 = uVar1 | 0x8020;
  }
  else {
    *puVar3 = 10;
    uVar1 = uVar1 & 0xffffffdf | 0x4008000;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) = uVar1 & 0xfffffffb | 0x1c37a40;
  uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2028);
  uVar1 = uVar2 | 0x18684;
  if (iVar4 < 6) {
    uVar1 = uVar2 | 0x18484;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2028) = uVar1;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) & 0xfffeffff | 0x20000;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2014) = 0x1240;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2018) = 0x1f3c;
  if (iVar4 < 3) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x208c) = 0x800000c0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x40000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x10000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x20000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x80000000;
    if (_DAT_ram_e00000bc < 0x80000000) goto LAB_ram_000fd4d8;
LAB_ram_000fd4f0:
    if (0x8007ffff < _DAT_ram_e00000bc) goto LAB_ram_000fd4d8;
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x40000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x10000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x20000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2010) = 0x80000000;
    if (0x7fffffff < _DAT_ram_e00000bc) goto LAB_ram_000fd4f0;
LAB_ram_000fd4d8:
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) goto LAB_ram_000fd5a8;
    }
  }
  if ((uVar1 != 0) && (4 < *(int *)(uVar1 + 0x38))) {
    if (DAT_ram_8002c8bc == '\x03') {
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
      iVar4 = 0;
      if (uVar1 != 0) {
        iVar4 = *(int *)(uVar1 + 0x38);
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x207c);
      if (iVar4 == 5) {
        *puVar3 = 0xffff160e;
        return 4;
      }
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x207c);
    }
    *puVar3 = 0x2cbe160e;
    return 4;
  }
LAB_ram_000fd5a8:
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x207c) = 0x2cbe000e;
  return 4;
}


