/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00139614 */

void FUN_ram_00139614(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int local_3c [4];
  
  piVar12 = (int *)(param_3 * 0xac + *(int *)(param_1 + 0x388) + 0x90);
  iVar10 = param_1 + 0x130 + param_3 * 0x118;
  iVar13 = 4;
  iVar4 = -100000;
  LP_START = 0x139684;
  LP_END = 0x1396b0;
  piVar6 = (int *)(param_1 + 0x3ac);
  piVar8 = piVar12;
  do {
    iVar5 = piVar8[0x14];
    if ((iVar5 != 0) && (iVar4 < iVar5)) {
      iVar4 = iVar5;
    }
    if (*piVar8 != 0) {
      *piVar6 = *piVar8;
    }
    piVar6 = piVar6 + 1;
    iVar13 = iVar13 + -1;
    piVar8 = piVar8 + 1;
  } while (iVar13 != 0);
  iVar13 = 0;
  iVar14 = 4;
  iVar5 = 0;
  LP_START = 0x1396bc;
  LP_END = 0x1396e0;
  piVar6 = piVar12 + 0x14;
  do {
    if (*piVar6 == 0) {
      local_3c[iVar13] = iVar4;
      iVar5 = iVar5 + 1;
    }
    else {
      local_3c[iVar13] = *piVar6;
    }
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar14 != 0);
  iVar14 = 0;
  iVar13 = 4;
  iVar4 = 0;
  do {
    uVar1 = FUN_ram_00188958(iVar14);
    iVar11 = iVar10 + iVar14 * 4;
    *(uint *)(iVar11 + 0xa8) = uVar1;
    if (uVar1 == 0) {
      if ((iVar14 != 4) || (DAT_ram_0018c1ec = iVar4, 3 < iVar5)) goto LAB_ram_001397e8;
      goto LAB_ram_001397d4;
    }
    if (0xfe < uVar1) break;
    uVar2 = FUN_ram_0018ad88();
    iVar3 = FUN_ram_0018ad78(uVar2,param_2);
    *(int *)(iVar11 + 0xb8) = iVar3;
    iVar9 = ((int *)(param_1 + 0x3ac))[iVar14] + local_3c[iVar14];
    if (iVar3 < iVar9) {
      iVar7 = 0;
      iVar3 = iVar9;
LAB_ram_0013979c:
      iVar3 = iVar3 + (&DAT_ram_0018d3b4)[iVar7];
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
      *(int *)(iVar11 + 0xb8) = iVar3;
    }
    else {
      iVar7 = (iVar9 - iVar3) / 10;
      if (-1 < iVar7 + 4) goto LAB_ram_0013979c;
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
    }
    iVar13 = iVar13 + -1;
    iVar14 = iVar14 + 1;
  } while (iVar13 != 0);
  if ((iVar14 == 4) && (DAT_ram_0018c1ec = iVar4, iVar5 < 4)) {
LAB_ram_001397d4:
    DAT_ram_0018c1ec = iVar4 + *(int *)(&DAT_ram_0018d3b8 + iVar5 * 4);
  }
LAB_ram_001397e8:
  *(int *)(iVar10 + 200) = DAT_ram_0018c1ec;
  FUN_ram_0039fe00(piVar12 + 0x1e,iVar10 + 0xb8,0x14);
  return;
}


