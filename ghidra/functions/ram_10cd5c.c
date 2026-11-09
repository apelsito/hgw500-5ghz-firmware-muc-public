/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010cd5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_0010cd5c(int *param_1,uint param_2,undefined4 param_3,undefined1 param_4,uint param_5,
                code *param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = *(int *)(*param_1 + 0x1c);
  if ((param_2 < 0x6ec400) || (0x26ec3ff < param_2)) {
    if ((param_2 < 0x26fc400) || (0x48fc3ff < param_2)) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  uVar8 = param_5 >> 2 & 1;
  if (((int)uVar10 < 0) || (3 < (int)uVar10)) {
    FUN_ram_000ee260(s_OCS__buf__x_not_from_hbm_pool_ram_001c0aa8,param_2);
  }
  else {
    if (*(int *)(iVar9 + 0x4094) != 0) {
      DAT_ram_800378fc = DAT_ram_800378fc + 1;
    }
    if (*(int *)(iVar9 + 0x40a4) == 0) {
      bVar3 = *(byte *)(param_2 + 1) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_2 + 1) | 0x10;
    }
    iVar2 = *(int *)(iVar9 + 0x40a0);
    *(byte *)(param_2 + 1) = bVar3;
    *(code **)(iVar9 + 0x4094) = param_6;
    *(undefined4 *)(iVar9 + 0x4098) = param_7;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar9 + 0x409c) = param_8;
    *(int *)(iVar9 + 0x40a0) = iVar2;
    uVar6 = uVar10 & 0xff;
    uVar7 = 0;
    if (uVar6 == 1) {
      uVar4 = (param_2 + 0xfd903c00) % 0x4400;
    }
    else if (uVar6 == 0) {
      uVar4 = param_2 - 0x6ec400 & 0xfff;
    }
    else {
      uVar4 = 0;
    }
    iVar5 = param_2 - uVar4;
    uVar4 = iVar5 + 0x40;
    if ((uVar4 < 0x6ec400) || (0x26ec3ff < uVar4)) {
      if ((uVar4 < 0x26fc400) || (0x48fc3ff < uVar4)) {
        iVar5 = 0;
      }
      else {
        iVar5 = ((iVar5 + 0xfd903c40U) / 0x4400) * 0x40 + 0x6bc0c0;
      }
    }
    else {
      iVar5 = (iVar5 - 0x6ec3c0U >> 0xc) * 0x40 + 0x63c080;
    }
    *(int *)(iVar5 + -0xc) = iVar2;
    iVar2 = FUN_ram_00155ec8(iVar9,param_2,param_3,param_4,(param_5 ^ 1) & 1,param_5 >> 1 & 1,uVar8,
                             1,0);
    if (iVar2 == 0) {
      iVar9 = FUN_ram_00108bfc(*(undefined4 *)(iVar9 + 0x3b20),1,30000,0,&LAB_ram_0010d37c,0,0,0,0,
                               iVar9,*(undefined4 *)(iVar9 + 0x40a0));
      if (iVar9 == 0) {
        return 0;
      }
      FUN_ram_000ee260(s_OCS__schedule_tsf_event_error_ram_001c0ac8);
    }
    else {
      DAT_ram_80037900 = DAT_ram_80037900 + 1;
      if (((uVar8 == 0) && (-1 < (int)uVar10)) && ((int)uVar10 < 4)) {
        if (uVar6 == 1) {
          uVar7 = (param_2 + 0xfd903c00) % 0x4400;
        }
        else if (uVar6 == 0) {
          uVar7 = param_2 - 0x6ec400 & 0xfff;
        }
        uVar10 = STATUS32;
        if ((uVar10 & 2) != 0) {
          STATUS32 = uVar10 & 0xfffffffd;
        }
        if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
          iVar9 = 0;
          bVar1 = false;
          do {
            iVar2 = 0;
            do {
              sync();
              iVar2 = iVar2 + 1;
            } while (iVar2 < 10);
            if ((!bVar1) && (iVar9 = iVar9 + 1, iVar9 == 0x3e9)) {
              FUN_ram_000ee260(s_MuC___s_ram_001bfea8,s___topaz_hbm_wait_timeout_ram_001c0ae8);
              bVar1 = true;
            }
          } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
        }
        sync();
        _DAT_ram_e1020114 = uVar6 << 2 | 1;
        sync();
        STATUS32 = uVar10;
        _DAT_ram_e1020144 = (param_2 - uVar7) + 0x40;
      }
    }
  }
  (*param_6)(0,param_7,param_8);
  return 0xffffffff;
}


