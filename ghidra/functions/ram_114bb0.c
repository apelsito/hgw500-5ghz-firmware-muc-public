/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00114bb0 */

void FUN_ram_00114bb0(int param_1,byte *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  uVar10 = *param_4;
  if (*(short *)(param_1 + 0x4058) != 0) {
    return;
  }
  if (-1 < (int)param_4[5] || (uVar10 & 1) == 0) {
    return;
  }
  if (((uVar10 & 8) != 0) && ((*param_2 & 0xc) != 4)) {
    return;
  }
  if ((uVar10 & 0x80) != 0) {
    return;
  }
  uVar10 = ((uVar10 & 0x7fff0000) >> 0x10) + 3 & 0xfffffffc;
  iVar11 = uVar10 + param_3;
  FUN_ram_80025588(iVar11,0x1c);
  uVar7 = *(uint *)(uVar10 + param_3 + 4);
  uVar10 = (uVar7 & 0x7f00) >> 8;
  if (0x4d < uVar10) {
    return;
  }
  if (uVar10 == 0x20) {
    return;
  }
  uVar8 = uVar7 & 0xff;
  uVar10 = (uVar7 & 0x700000) >> 0x14;
  if (uVar8 == 0xc) goto switchD_ram_00114c9c_caseD_6;
  if (uVar8 < 0xd) {
    switch(uVar8) {
    case 1:
    case 2:
      if (uVar10 == 0) goto LAB_ram_00114cf0;
      break;
    case 5:
    case 0xb:
      if (uVar10 == 1) goto LAB_ram_00114cf0;
      break;
    case 6:
    case 9:
      goto switchD_ram_00114c9c_caseD_6;
    }
  }
  else {
    if (uVar8 == 0x30) {
switchD_ram_00114c9c_caseD_6:
    }
    else {
      if (0x30 < uVar8) {
        if (uVar8 != 0x36) {
          if (uVar8 == 0x46 || uVar8 == 0xc6) goto LAB_ram_00114cf0;
          goto switchD_ram_00114c9c_caseD_3;
        }
        goto switchD_ram_00114c9c_caseD_6;
      }
      if (uVar8 == 0x12 || uVar8 == 0x18) goto switchD_ram_00114c9c_caseD_6;
      if (uVar8 != 0x24) goto switchD_ram_00114c9c_caseD_3;
    }
    if ((uVar10 == 2) || (uVar10 == 3)) {
LAB_ram_00114cf0:
      bVar2 = false;
      goto LAB_ram_00114d1c;
    }
  }
switchD_ram_00114c9c_caseD_3:
  bVar2 = true;
LAB_ram_00114d1c:
  if (!bVar2) {
    uVar7 = *param_2 & 0xc;
    uVar10 = *param_2 & 0xf0;
    if (uVar7 == 4) {
      if (uVar10 == 0xc0 || uVar10 == 0xd0) {
        return;
      }
    }
    else if (uVar7 == 8) {
      return;
    }
    bVar1 = param_2[0xf];
    iVar12 = *(int *)(param_1 + 0x3934 + (bVar1 & 0x1f) * 4);
    if (iVar12 != 0) {
      do {
        while( true ) {
          iVar9 = *(int *)(iVar12 + 0x18);
          if ((iVar9 + 0xcU & 1) != 0 || ((uint)(param_2 + 10) & 1) != 0) break;
          if ((*(short *)(param_2 + 0xe) != *(short *)(iVar9 + 0x10)) ||
             (*(short *)(param_2 + 0xc) != *(short *)(iVar9 + 0xe))) goto LAB_ram_00114dd4;
          if ((*(short *)(iVar9 + 0xc) == *(short *)(param_2 + 10)) ||
             (iVar12 = *(int *)(iVar12 + 0x10), iVar12 == 0)) goto LAB_ram_00114ddc;
        }
        uVar10 = FUN_ram_000eeb74(iVar9 + 0xcU,param_2 + 10,6);
        iVar9 = 1 - uVar10;
        if (1 < uVar10) {
          iVar9 = 0;
        }
        if (iVar9 != 0) break;
LAB_ram_00114dd4:
        iVar12 = *(int *)(iVar12 + 0x10);
      } while (iVar12 != 0);
    }
LAB_ram_00114ddc:
    if ((iVar12 != 0) ||
       (iVar12 = FUN_ram_00114a88(param_1,param_1 + 0x3928,param_2 + 10,bVar1 & 0x1f), iVar12 != 0))
    {
      uVar5 = FUN_ram_00137534(param_1,iVar11);
      puVar6 = *(undefined1 **)(iVar12 + 0x18);
      *puVar6 = 0;
      iVar11 = *(int *)(param_1 + 0x387c);
      puVar6[1] = uVar5;
      uVar5 = *(undefined1 *)(iVar11 + 8);
      puVar6[3] = (char)((int)uVar7 >> 2);
      puVar6[2] = uVar5;
      uVar4 = DAT_ram_80038ee4;
      uVar3 = DAT_ram_80038ee0;
      *puVar6 = 1;
      *(undefined4 *)(puVar6 + 4) = uVar3;
      *(undefined4 *)(puVar6 + 8) = uVar4;
    }
  }
  return;
}


