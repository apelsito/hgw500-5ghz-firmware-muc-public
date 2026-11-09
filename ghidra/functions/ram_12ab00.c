/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012ab00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0012ab00(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  iVar6 = *param_2;
  iVar7 = *(int *)(param_1 + 0x3b20);
  iVar2 = FUN_ram_001030e8(iVar7,2,0);
  if (iVar2 == 0) {
    uVar4 = param_3 * 2 + 0x11;
    *(uint *)(iVar6 + 4) = uVar4;
    *(uint *)(iVar6 + 0x14) = uVar4 & 0xffff;
    iVar2 = *(int *)(iVar7 + 0x13c);
    FUN_ram_000e3b08(iVar2,*(undefined4 *)(param_1 + 0x3b20),0,2,0,0,0,0x37,0,1);
    if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
      if (_DAT_ram_e00000bc < 0x8000000) {
        uVar4 = _DAT_ram_e00000bc + 0x40000000;
      }
      else {
        uVar4 = _DAT_ram_e00000bc;
        if (_DAT_ram_e00000bc < 0xc0000000) {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = _DAT_ram_e00000bc + 0xe0000000;
    }
    if ((uVar4 != 0) && (5 < *(int *)(uVar4 + 0x38))) {
      *(uint *)(iVar6 + 0x48) = *(uint *)(iVar6 + 0x48) & 0xfe00fc0f | 0x3f0;
      *(uint *)(iVar2 + 0x48) = *(uint *)(iVar2 + 0x48) & 0xfe00fc0f | 0x3f0;
    }
    if (-2 < param_3 + -1) {
      iVar6 = -2;
      param_3 = param_3 + 1;
      do {
        uVar4 = STATUS32;
        if ((uVar4 & 2) != 0) {
          STATUS32 = uVar4 & 0xfffffffd;
        }
        local_68 = DAT_ram_80038ee0;
        local_64 = DAT_ram_80038ee4;
        local_6c = COUNT0;
        uVar1 = AUX_IRQ_PENDING;
        if ((uVar1 & 8) != 0) {
          local_68 = DAT_ram_80038ee0 + 1;
          local_64 = DAT_ram_80038ee4 + (0xfffffffe < DAT_ram_80038ee0);
          local_6c = COUNT0;
        }
        STATUS32 = uVar4;
        local_74 = DAT_ram_001a6638 + local_68;
        local_70 = DAT_ram_001a663c + local_64 + (uint)CARRY4(DAT_ram_001a6638,local_68);
        if (local_6c < 0x7a121) {
          uVar4 = 500000 - local_6c;
          if (uVar4 <= DAT_ram_001a6634) goto LAB_ram_0012ad48;
        }
        else {
          uVar4 = 0;
LAB_ram_0012ad48:
          local_6c = -uVar4;
          local_70 = local_70 + (0xfffffffe < local_74);
          local_74 = local_74 + 1;
        }
        local_78 = local_6c + DAT_ram_001a6634;
        iVar7 = FUN_ram_001030e8(*(undefined4 *)(param_1 + 0x3b20),1,0);
        while (3 < iVar7) {
          DAT_ram_80037810 = DAT_ram_80037810 + 1;
          uVar4 = STATUS32;
          if ((uVar4 & 2) != 0) {
            STATUS32 = uVar4 & 0xfffffffd;
          }
          local_44 = COUNT0;
          uVar1 = AUX_IRQ_PENDING;
          local_40 = DAT_ram_80038ee0;
          local_3c = DAT_ram_80038ee4;
          if ((uVar1 & 8) != 0) {
            local_40 = DAT_ram_80038ee0 + 1;
            local_3c = DAT_ram_80038ee4 + (0xfffffffe < DAT_ram_80038ee0);
            local_44 = COUNT0;
          }
          STATUS32 = uVar4;
          bVar8 = local_3c < local_70;
          if (local_3c == local_70) {
            bVar8 = local_40 < local_74;
          }
          if ((!bVar8 && (local_3c != local_70 || local_40 != local_74)) ||
             ((local_40 == local_74 && local_3c == local_70 && (local_78 < local_44)))) {
            DAT_ram_80037814 = DAT_ram_80037814 + 1;
            if (0 < iVar6) goto LAB_ram_0012ac30;
            goto LAB_ram_0012aeac;
          }
          iVar7 = FUN_ram_001030e8(*(undefined4 *)(param_1 + 0x3b20),1,0);
        }
        if (iVar6 == -2) {
          FUN_ram_00129fc8(param_1,param_2[2]);
          iVar5 = *(int *)(param_1 + 0x3b20);
          iVar7 = *param_2;
          *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0xa0) = 1;
          *(int *)(*(int *)(iVar5 + 0xc) + 0xa0) = iVar7;
        }
        else if (iVar6 == -1) {
          iVar7 = *(int *)(param_1 + 0x3b20);
          *(undefined4 *)(*(int *)(iVar7 + 0xc) + 0xa0) = 1;
          *(int *)(*(int *)(iVar7 + 0xc) + 0xa0) = iVar2;
          DAT_ram_80037808 = DAT_ram_80037808 + 1;
        }
        else if (*(int *)(&DAT_ram_0020fce4 + iVar6 * 4) != 0) {
          FUN_ram_0012aa1c(param_1,*(int *)(&DAT_ram_0020fce4 + iVar6 * 4),1);
        }
        param_3 = param_3 + -1;
        iVar6 = iVar6 + 1;
      } while (param_3 != 0);
    }
LAB_ram_0012ac30:
    uVar3 = 1;
  }
  else {
    DAT_ram_80037814 = DAT_ram_80037814 + 1;
LAB_ram_0012aeac:
    uVar3 = 0;
  }
  return uVar3;
}


