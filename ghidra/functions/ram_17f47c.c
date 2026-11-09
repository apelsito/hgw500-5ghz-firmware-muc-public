/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f47c */

void FUN_ram_0017f47c(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar2 = DAT_ram_002104dc;
  iVar10 = 0;
  local_28 = DAT_ram_001ab628;
  local_24 = DAT_ram_001ab62c;
  if (DAT_ram_002104dc < 3) {
    uVar12 = (uint)*(ushort *)((int)&local_28 + (uint)DAT_ram_002104df * 2) * (uint)DAT_ram_002104de
             & 0xff;
    if (DAT_ram_0018c3b8 != 0) {
joined_r0x0017f50c:
      if (DAT_ram_0018c3b8 < 4) {
        FUN_ram_000ee260(s_S__d_____d__ram_001ca7f4,*param_1,*(undefined1 *)(param_1 + 0xb));
      }
    }
  }
  else {
    if (DAT_ram_0018c3b8 != 0) {
      uVar12 = 0;
      goto joined_r0x0017f50c;
    }
    uVar12 = 0;
  }
  FUN_ram_0017f390(param_1);
  cVar5 = *(char *)(param_1 + 0xb);
  if ((DAT_ram_0018c3b8 != 0) && (DAT_ram_0018c3b8 < 4)) {
    FUN_ram_000ee260(s_S__d_____d__ram_001ca7f4,*param_1);
    cVar5 = *(char *)(param_1 + 0xb);
  }
  if ((cVar5 == '\x01' || cVar5 == '\x03') || cVar5 == '\0') {
    return;
  }
  if (cVar5 != '\x04') {
    FUN_ram_000ee260(s_S____d_ram_001ca924,cVar5);
    return;
  }
  iVar3 = FUN_ram_0017e0e0(param_1[5],*param_1);
  iVar7 = param_1[9];
  iVar11 = (int)DAT_ram_0018c3d8;
  if (iVar11 < iVar7) {
    iVar7 = iVar11;
    if (DAT_ram_0018c3b8 == 3) {
      uVar9 = (uint)(iVar11 >> 1) >> 0x1e;
      uVar6 = uVar9 + iVar11;
      FUN_ram_000ee260(s_Target_power_is_too_high__The_ma_ram_001ca804,(int)uVar6 >> 2,
                       ((uVar6 & 3) - uVar9) * 0x19);
    }
LAB_ram_0017f5e8:
    if (bVar2 == 0) goto LAB_ram_0017f604;
LAB_ram_0017f5f8:
    if (bVar2 == 1 || bVar2 == 2) goto LAB_ram_0017f604;
  }
  else {
    iVar11 = (int)DAT_ram_0018c3da;
    if (iVar7 < iVar11) {
      iVar7 = iVar11;
      if (DAT_ram_0018c3b8 == 3) {
        uVar9 = (uint)(iVar11 >> 1) >> 0x1e;
        uVar6 = uVar9 + iVar11;
        FUN_ram_000ee260(s_Target_power_is_too_low__The_min_ram_001ca848,(int)uVar6 >> 2,
                         ((uVar6 & 3) - uVar9) * 0x19);
      }
      goto LAB_ram_0017f5e8;
    }
    if (bVar2 != 0) goto LAB_ram_0017f5f8;
LAB_ram_0017f604:
    iVar7 = iVar7 - uVar12;
  }
  iVar7 = iVar7 - iVar3;
  if ((DAT_ram_0018c3b8 != 0) && (DAT_ram_0018c3b8 < 4)) {
    FUN_ram_000ee260(s_bfr_adj___p4__d__pt__d__pd_i__d__ram_001ca88c,iVar7,param_1[9],iVar3,
                     param_1[5],(int)*(short *)(param_1 + 8),(int)*(short *)((int)param_1 + 0x22),
                     *(undefined1 *)((int)param_1 + 0x19));
  }
  if ((iVar7 < -1) || (1 < iVar7)) {
    iVar11 = (int)*(short *)((int)param_1 + 0x22);
    iVar3 = iVar11 + iVar7;
    if ((iVar3 < 0) || (10 < iVar3)) {
      uVar12 = (uint)(iVar7 >> 1) >> 0x1e;
      uVar6 = iVar7 + uVar12;
      iVar10 = (int)uVar6 >> 2;
      iVar7 = (uVar6 & 3) - uVar12;
      param_1[0xc] = 1;
      if (iVar7 == 0) {
        iVar11 = *(short *)(param_1 + 8) + iVar10;
        FUN_ram_0017b124(param_1,iVar11);
      }
      else {
        iVar4 = -iVar11;
        iVar8 = 10 - iVar11;
        iVar3 = iVar7 - iVar8;
        bVar13 = SBORROW4(iVar7,iVar8);
        iVar1 = iVar8;
        if (iVar7 <= iVar8) {
          iVar3 = iVar4 - iVar7;
          bVar13 = SBORROW4(iVar4,iVar7);
          iVar1 = iVar4;
        }
        if (iVar7 != iVar1 && iVar3 < 0 == bVar13) {
          do {
            if (iVar8 < iVar7) {
              iVar10 = iVar10 + 1;
              iVar7 = iVar7 + -4;
            }
            else if (iVar7 < iVar4) {
              iVar7 = iVar7 + 4;
              iVar10 = iVar10 + -1;
            }
          } while ((iVar8 < iVar7) || (iVar7 < iVar4));
        }
        iVar3 = iVar11 + iVar7;
        iVar11 = *(short *)(param_1 + 8) + iVar10;
        FUN_ram_0017b124(param_1,iVar11);
        FUN_ram_0017b260(param_1,iVar3);
      }
      if (DAT_ram_0018c3b8 == 0) goto LAB_ram_0017f774;
    }
    else {
      *(short *)((int)param_1 + 0x22) = (short)iVar3;
      FUN_ram_0017b260(param_1,iVar3);
      if (DAT_ram_0018c3b8 == 0) goto LAB_ram_0017f774;
      iVar11 = 0;
      iVar7 = 0;
    }
    if (DAT_ram_0018c3b8 < 4) {
      FUN_ram_000ee260(s_after_adj__rf_gain_i__d__rf_a__d_ram_001ca8e8,iVar11,iVar10,iVar3,iVar7);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 7;
    if ((DAT_ram_0018c3b8 != 0) && (DAT_ram_0018c3b8 < 4)) {
      FUN_ram_000ee260(s_no_adj_ram_001ca8e0);
    }
  }
LAB_ram_0017f774:
  param_1[10] = 0;
  return;
}


