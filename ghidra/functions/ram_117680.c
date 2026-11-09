/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00117680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00117680(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  iVar13 = *(int *)(*(int *)((int *)param_2[2])[1] + 0x1c);
  if (param_4 != 0) {
    iVar7 = *(int *)param_2[2];
    piVar5 = *(int **)(iVar13 + 0x3b54 + param_4 * 4);
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar12 = *piVar5;
    if (iVar7 == iVar12) {
      if (*(char *)(iVar13 + 0x39e9) != '\0') {
        return;
      }
      uVar10 = *(uint *)(iVar7 + 0x6c) & 1;
    }
    else {
      if ((*(uint *)(iVar7 + 0x6c) & 2) != 0) {
        return;
      }
      uVar10 = *(uint *)(iVar12 + 0x6c) & 2;
    }
    if (uVar10 != 0) {
      return;
    }
  }
  if (DAT_ram_8002c964 != 0) {
    iVar7 = *param_1;
    if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
      if (_DAT_ram_e00000bc < 0x8000000) {
        uVar10 = _DAT_ram_e00000bc + 0x40000000;
      }
      else {
        uVar10 = _DAT_ram_e00000bc;
        if (_DAT_ram_e00000bc < 0xc0000000) {
          uVar10 = 0;
        }
      }
    }
    else {
      uVar10 = _DAT_ram_e00000bc + 0xe0000000;
    }
    if ((param_3 < 2 || param_3 == 3) || param_3 == 6) {
      iVar13 = *(int *)(*(int *)(uVar10 + 0xbc) + param_3 * 4);
    }
    else {
      if (param_3 != 2) goto LAB_ram_001177b0;
      puVar8 = *(undefined4 **)(iVar13 + 0x3b54 + param_4 * 4);
      if (puVar8 == (undefined4 *)0x0) {
        return;
      }
      uVar9 = (uint)**(ushort **)*puVar8;
      iVar13 = uVar9 - 2;
      if (uVar9 < 2) {
        iVar13 = 0;
      }
      iVar13 = *(int *)(*(int *)(uVar10 + 0xb4) + iVar13 * 4);
    }
    if (*(char *)(iVar7 + -4) == -8) {
      if ((*(byte *)(iVar7 + -3) & 4) == 0) {
        uVar10 = *(ushort *)(iVar7 + -2) & 0xfff;
        if ((*(ushort *)(iVar13 + 6) & 1) == 0) {
          if ((*(uint *)(iVar13 + 0x10 + (uVar10 >> 5) * 4) & 1 << (*(ushort *)(iVar7 + -2) & 0x1f))
              == 0) goto LAB_ram_00117994;
        }
        else if (uVar10 != *(ushort *)(iVar13 + 0x10)) {
LAB_ram_00117994:
          *(int *)(iVar13 + 0x42c) = *(int *)(iVar13 + 0x42c) + 1;
          return;
        }
      }
    }
    else {
      *(int *)(iVar13 + 0x434) = *(int *)(iVar13 + 0x434) + 1;
    }
    *(int *)(iVar13 + 0x424) = *(int *)(iVar13 + 0x424) + 1;
    if (*(char *)(iVar13 + 1) == '\x02') {
      bVar4 = *(byte *)(iVar7 + -3);
      uVar10 = *(uint *)(iVar13 + 0x210) & 1;
      if ((*(uint *)(iVar13 + 0x210 + ((*(ushort *)(iVar7 + -2) & 0xfff) >> 5) * 4) &
          1 << (*(ushort *)(iVar7 + -2) & 0x1f)) == 0) {
        uVar9 = uVar10;
        if ((bVar4 & 2) != 0) {
          uVar9 = uVar10 | 4;
        }
      }
      else {
        uVar9 = uVar10 | 2;
        if ((bVar4 & 2) != 0) {
          uVar9 = uVar10 | 6;
        }
      }
      if ((bVar4 & 1) != 0) {
        uVar9 = uVar9 | 8;
      }
      bVar1 = (&DAT_ram_001a61c4)[uVar9];
      if (bVar1 == 0xff) {
        FUN_ram_000ee260(s_VLAN_action_invalid_ram_001c20c8);
        FUN_ram_000ee260(&DAT_ram_001c1d78);
        bVar4 = *(byte *)(iVar7 + -3);
      }
      *(byte *)(iVar7 + -3) = bVar1 | bVar4;
    }
    FUN_ram_000ed0a0((char *)(iVar7 + -4),4);
  }
LAB_ram_001177b0:
  sVar11 = (short)param_2[1] + 1;
  *(short *)(param_2 + 1) = sVar11;
  if (sVar11 == 1) {
    uVar10 = *param_2;
    if ((uVar10 < 0x6ec400) || (0x26ec3ff < uVar10)) {
      if ((uVar10 < 0x26fc400) || (0x48fc3ff < uVar10)) {
        iVar13 = 0;
      }
      else {
        iVar13 = ((uVar10 + 0xfd903c00) / 0x4400) * 0x40 + 0x6bc0c0;
      }
    }
    else {
      iVar13 = (uVar10 - 0x6ec400 >> 0xc) * 0x40 + 0x63c080;
    }
    *(undefined4 *)(iVar13 + -4) = 0;
  }
  local_38 = *param_1;
  local_3c = 0;
  uVar10 = 0;
  if (&stack0x00000000 != (undefined1 *)0x4) {
    uVar10 = param_4 & 0xff;
  }
  local_34 = (param_3 & 0xf) << 0xb | (uVar10 & 0x7f) << 4 | param_5 & 0xf | 0x8000;
  local_30 = 0;
  local_28 = (uint)*(ushort *)(param_1 + 1);
  uVar2 = (ushort)*param_1;
  if (*param_2 == 0) {
    uVar6 = (ushort)((*param_1 + 0xfd903c00U) % 0x4400);
    uVar3 = uVar2;
  }
  else {
    uVar3 = (ushort)*param_2;
    uVar6 = uVar3 & 0x3ff;
  }
  local_2c = CONCAT22(0x7800,((uVar3 - uVar6) + 0x40) - uVar2);
  if (param_3 == 0) {
    _DAT_ram_ed000328 = 1;
    uVar10 = _DAT_ram_ed000330;
LAB_ram_00117afc:
    uVar9 = uVar10 & 0x1ff;
    uVar10 = uVar10 >> 0xd & 0x1ff;
    if (uVar10 < uVar9) {
      uVar10 = (uVar9 - uVar10) - 1;
    }
    else {
      uVar10 = 0x200 - (uVar10 - uVar9);
    }
    if ((uVar10 < 8) || ((&DAT_ram_8002c98c)[param_3 * 3] != 0)) {
      iVar13 = 1 - (int)DAT_ram_8002c988;
      if ((undefined4 *)0x1 < DAT_ram_8002c988) {
        iVar13 = 0;
      }
      if (iVar13 != 0) {
        DAT_ram_80037298 = DAT_ram_80037298 + 1;
        FUN_ram_800239d8(param_3,1);
      }
      puVar8 = DAT_ram_8002c988;
      if (DAT_ram_8002c988 != (undefined4 *)0x0) {
        DAT_ram_8002c988 = (undefined4 *)*DAT_ram_8002c988;
        FUN_ram_000efab8(puVar8,&local_3c,0x18);
        *puVar8 = 0;
        iVar13 = param_3 * 0xc;
        if ((&DAT_ram_8002c98c)[param_3 * 3] == 0) {
          (&DAT_ram_8002c98c)[param_3 * 3] = puVar8;
          *(undefined4 **)(&DAT_ram_8002c990 + iVar13) = puVar8;
          DAT_ram_8003729c = DAT_ram_8003729c + 1;
        }
        else {
          **(undefined4 **)(&DAT_ram_8002c990 + iVar13) = puVar8;
          *(undefined4 **)(&DAT_ram_8002c990 + iVar13) = puVar8;
          DAT_ram_800372a0 = DAT_ram_800372a0 + 1;
        }
        goto LAB_ram_00117cc4;
      }
      DAT_ram_800372a4 = DAT_ram_800372a4 + 1;
    }
  }
  else {
    if (param_3 == 1) {
      _DAT_ram_e8000328 = 1;
      uVar10 = _DAT_ram_e8000330;
      goto LAB_ram_00117afc;
    }
    if ((param_3 == 2) && (iVar13 = FUN_ram_001172ac(&local_3c), iVar13 != 0))
    goto LAB_ram_00117cc4;
  }
  if ((_DAT_ram_e1035038 & 1) != 0) {
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      if (((uVar10 & 0xffff0000) != 0) && ((uVar10 & 0xffff) == 0)) {
        FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c1d08);
      }
    } while ((_DAT_ram_e1035038 & 1) != 0);
  }
  FUN_ram_80025dec(s_qtn_rx_tqe_push_mcast_ram_001c20e0,0x417);
  _DAT_ram_e1035020 = local_3c;
  _DAT_ram_e1035024 = local_38;
  _DAT_ram_e1035028 = local_34;
  _DAT_ram_e103502c = local_30;
  _DAT_ram_e1035030 = local_2c;
  _DAT_ram_e1035034 = local_28;
  sync();
  _DAT_ram_e1035038 = 1;
  FUN_ram_80025e74(local_28);
LAB_ram_00117cc4:
  if ((param_3 == 2) && (iVar13 = FUN_ram_00155e14((char)param_4), iVar13 != 0)) {
    iVar7 = FUN_ram_00158a80((char)param_4);
    iVar13 = FUN_ram_00158aa0(*(undefined1 *)(iVar13 + 0x84));
    if (iVar7 != 0 && iVar13 != 0) {
      *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
      *(int *)(iVar13 + 0x24) = *(int *)(iVar13 + 0x24) + 1;
      return;
    }
  }
  return;
}


