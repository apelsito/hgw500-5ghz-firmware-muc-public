/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001501bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_001501bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  if (param_1 == 1) {
    puVar6 = (uint *)&DAT_ram_e000009c;
    puVar7 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar6 = (uint *)&DAT_ram_e00000a4;
    puVar7 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar6 = (uint *)&DAT_ram_e00000a8;
    puVar7 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar7 = (uint *)0x0;
    puVar6 = (uint *)0x0;
  }
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = *puVar6 | 0x80000000;
    sync();
    if ((*puVar6 & 0x80000000) == 0) goto LAB_ram_001502e4;
  }
  if (puVar7 != (uint *)0x0) {
    *puVar7 = *puVar7 | 0x80000000;
    sync();
    if ((*puVar7 & 0x80000000) == 0) {
      if (puVar6 != (uint *)0x0) {
        *puVar6 = *puVar6 & 0x7fffffff;
        sync();
      }
LAB_ram_001502e4:
      STATUS32 = uVar1;
      return 0;
    }
  }
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
  if (*(int *)(uVar3 + 0xd8) == 0) {
    uVar8 = 1;
    *(undefined4 *)(uVar3 + 0xd8) = 1;
    sync();
    if (param_1 == 1) {
LAB_ram_00150374:
      puVar6 = (uint *)&DAT_ram_e0000094;
    }
    else if (param_1 == 2) {
LAB_ram_00150390:
      puVar6 = (uint *)&DAT_ram_e0000098;
    }
    else {
      if (param_1 != 4) goto LAB_ram_001503cc;
LAB_ram_001503b0:
      puVar6 = (uint *)&DAT_ram_e00000a0;
    }
    *puVar6 = *puVar6 & 0x7fffffff;
    sync();
  }
  else {
    if (param_1 == 1) {
      uVar8 = 0;
      goto LAB_ram_00150374;
    }
    if (param_1 == 2) {
      uVar8 = 0;
      goto LAB_ram_00150390;
    }
    if (param_1 == 4) {
      uVar8 = 0;
      goto LAB_ram_001503b0;
    }
  }
LAB_ram_001503cc:
  if (param_1 == 1) {
    puVar6 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar6 = (uint *)&DAT_ram_e00000a4;
  }
  else {
    if (param_1 != 4) goto LAB_ram_00150410;
    puVar6 = (uint *)&DAT_ram_e00000a8;
  }
  *puVar6 = *puVar6 & 0x7fffffff;
  sync();
LAB_ram_00150410:
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
  iVar5 = *(int *)(uVar3 + 0xac);
  uVar3 = STATUS32;
  if ((uVar3 & 6) != 0) {
    STATUS32 = uVar3 & 0xfffffff9;
  }
  iVar4 = *(int *)(iVar5 + 0x14) * 0x20 + 0x180 + iVar5;
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar5 + 4);
  uVar2 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar4 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = 2;
  *(char **)(iVar4 + 0x40) = s______common_ruby_pm_mproc_h_ram_001c6f88;
  *(undefined4 *)(iVar4 + 0x48) = 0x31;
  *(undefined4 *)(iVar4 + 0x44) = param_2;
  *(undefined4 *)(iVar4 + 0x4c) = param_3;
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 4) % 0xc;
  STATUS32 = uVar3;
  STATUS32 = uVar1;
  return uVar8;
}


