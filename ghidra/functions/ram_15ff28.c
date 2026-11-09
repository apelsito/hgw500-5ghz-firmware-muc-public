/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015ff28 */

void FUN_ram_0015ff28(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)(*param_1 + 0x38) == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(*param_1 + 0x38) + 0x388);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = *(uint *)(iVar3 + 0x1f0);
  iVar2 = *(int *)(iVar3 + 500);
  if ((int)(uVar4 - DAT_ram_80038ee0) < 0) {
    uVar1 = ((uint)*(ushort *)(iVar3 + 0x220) << 10) / 1000;
    iVar2 = iVar2 + (uint)CARRY4(uVar1,uVar4);
    *(uint *)(iVar3 + 0x1f0) = uVar1 + uVar4;
    *(int *)(iVar3 + 500) = iVar2;
  }
  iVar3 = DAT_ram_80038ee0;
  switch((char)param_1[1]) {
  case '\0':
    iVar2 = *param_1;
    iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x38) + 0x388) + 0x1f0);
    if (param_2 == 0) {
      uVar4 = 0x7ffffffe;
      if (param_1[8] + 10U < 0x7fffffff) {
        uVar4 = param_1[8] + 10U;
      }
      if ((int)((iVar3 + -10) - (uVar4 + DAT_ram_80038ee0)) < 0) {
        iVar3 = FUN_ram_000f7c10((iVar3 + 10) - DAT_ram_80038ee0,param_1,0,&LAB_ram_0016319c,2);
        DAT_ram_0018c2a0 = 0;
        param_1[3] = iVar3;
        uVar5 = 1;
      }
      else {
        FUN_ram_0010cca4(*(undefined4 *)(iVar2 + 0xc));
        FUN_ram_0010d0fc(iVar2,1);
        iVar3 = FUN_ram_000f7c10(10,param_1,0,&LAB_ram_00163208,2);
        uVar5 = 3;
        param_1[6] = iVar3;
      }
      FUN_ram_0015db98(param_1,uVar5);
    }
    return;
  case '\x01':
    iVar2 = *param_1;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + 0x388);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    if (param_2 == 5) {
      if (DAT_ram_80038ee0 - (*(int *)(iVar3 + 0x1f8) + 8) < 0) {
        uVar4 = param_1[9];
        if (0x7ffffffe < uVar4) {
          uVar4 = 0x7ffffffe;
        }
        iVar3 = FUN_ram_000f7c10(uVar4,param_1,0,&LAB_ram_001631c0,2);
        DAT_ram_0018c2a0 = 1;
        param_1[4] = iVar3;
        return;
      }
      uVar4 = 0x7ffffffe;
      if (param_1[8] + 10U < 0x7fffffff) {
        uVar4 = param_1[8] + 10U;
      }
      if ((int)((*(int *)(iVar3 + 0x1f0) + -10) - (uVar4 + DAT_ram_80038ee0)) < 0) {
        iVar3 = FUN_ram_000f7c10((*(int *)(iVar3 + 0x1f0) + 10) - DAT_ram_80038ee0,param_1,0,
                                 &LAB_ram_0016319c,2);
        DAT_ram_0018c2a0 = 0;
        param_1[3] = iVar3;
        return;
      }
    }
    else {
      if (param_2 == 4) {
        if ((*(int *)(iVar3 + 0x218) != 0) || (*(int *)(iVar3 + 0x21c) != 0)) {
          if (DAT_ram_0018c2a0 != 0) {
            return;
          }
          FUN_ram_000f7d60(param_1[3]);
          param_1[3] = 0;
          FUN_ram_0010cca4(uVar5);
          FUN_ram_0010d0fc(iVar2,0);
          iVar3 = FUN_ram_000f7c10(10,param_1,0,&LAB_ram_00163208,2);
          uVar5 = 5;
          param_1[6] = iVar3;
          goto LAB_ram_0015df0c;
        }
      }
      else if (param_2 != 3) {
        if (param_2 != 1) {
          return;
        }
        FUN_ram_000f7d60(param_1[4]);
        param_1[4] = 0;
        FUN_ram_000f7d60(param_1[3]);
        param_1[3] = 0;
        FUN_ram_0010d0fc(iVar2,0);
        uVar5 = 0;
        goto LAB_ram_0015df0c;
      }
      if (DAT_ram_0018c2a0 != 0) {
        return;
      }
      FUN_ram_000f7d60(param_1[4]);
      param_1[4] = 0;
    }
    FUN_ram_000f7d60(param_1[3]);
    param_1[3] = 0;
    FUN_ram_0010cca4(uVar5);
    FUN_ram_0010d0fc(iVar2,1);
    iVar3 = FUN_ram_000f7c10(10,param_1,0,&LAB_ram_00163208,2);
    param_1[6] = iVar3;
    uVar5 = 3;
LAB_ram_0015df0c:
    FUN_ram_0015db98(param_1,uVar5);
    return;
  case '\x02':
    iVar3 = *param_1;
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    if (param_2 == 2) {
      iVar3 = FUN_ram_000f7c10((*(int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x388) + 0x1f0) + 10) -
                               DAT_ram_80038ee0,param_1,0,&LAB_ram_0016319c,2);
      param_1[3] = iVar3;
      uVar5 = 6;
    }
    else {
      if (param_2 == 4) {
        FUN_ram_0015f8f0(param_1,4);
        return;
      }
      if (param_2 != 1) {
        return;
      }
      FUN_ram_000f7d60(param_1[2],1,&DAT_ram_80038ee0,DAT_ram_80038ee4);
      param_1[2] = 0;
      FUN_ram_0010d0fc(iVar3);
      FUN_ram_0010cd00(uVar5);
      uVar5 = 0;
    }
    FUN_ram_0015db98(param_1,uVar5);
    return;
  case '\x03':
    iVar10 = *param_1;
    iVar6 = *(int *)(*(int *)(*(int *)(iVar10 + 0x38) + 0x388) + 0x1f0);
    piVar8 = *(int **)(iVar10 + 0xc);
    iVar7 = iVar6 + -10;
    iVar9 = 10;
    uVar5 = *(undefined4 *)(*piVar8 + 0x1c);
    if (param_2 == 6) {
      FUN_ram_000f7d60(param_1[6],6,iVar2,DAT_ram_80038ee4);
      uVar4 = param_1[8];
      param_1[6] = 0;
      if (uVar4 == 0) {
        if ((iVar3 + 10) - iVar7 < 0) {
          iVar9 = iVar7 - iVar3;
        }
        FUN_ram_0015f748(uVar5,iVar9,0);
        iVar3 = FUN_ram_000f7c10(0,param_1,0,&LAB_ram_00163178,2);
        param_1[2] = iVar3;
        uVar5 = 2;
      }
      else {
        if (0x7ffffffe < uVar4) {
          uVar4 = 0x7ffffffe;
        }
        iVar3 = FUN_ram_000f7c10(uVar4,param_1,0,&LAB_ram_001631e4,2);
        param_1[5] = iVar3;
        uVar5 = 4;
      }
    }
    else {
      if (param_2 == 7) {
        FUN_ram_000f7d60(param_1[6],7,iVar2,DAT_ram_80038ee4);
        param_1[6] = 0;
      }
      else if (param_2 != 8) {
        if (param_2 != 1) {
          return;
        }
        FUN_ram_000f7d60(param_1[6],1,iVar2,DAT_ram_80038ee4);
        param_1[6] = 0;
        FUN_ram_0010d0fc(iVar10,0);
        FUN_ram_0010cd00(piVar8);
        uVar5 = 0;
        goto LAB_ram_0015fccc;
      }
      FUN_ram_0010cd00(piVar8);
      iVar3 = FUN_ram_000f7c10((iVar6 + 10) - iVar3,param_1,0,&LAB_ram_0016319c,2);
      DAT_ram_0018c2a0 = 0;
      param_1[3] = iVar3;
      uVar5 = 1;
    }
LAB_ram_0015fccc:
    FUN_ram_0015db98(param_1,uVar5);
    return;
  case '\x04':
    iVar7 = *param_1;
    piVar8 = *(int **)(iVar7 + 0xc);
    iVar3 = 10;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar7 + 0x38) + 0x388) + 0x1f0) + -10;
    if (param_2 == 9) {
      if ((DAT_ram_80038ee0 + 10) - iVar2 < 0) {
        iVar3 = iVar2 - DAT_ram_80038ee0;
      }
      FUN_ram_0015f748(*(undefined4 *)(*piVar8 + 0x1c),iVar3,0);
      iVar3 = FUN_ram_000f7c10(0,param_1,0,&LAB_ram_00163178,2);
      param_1[2] = iVar3;
      uVar5 = 2;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      FUN_ram_000f7d60(param_1[5]);
      param_1[5] = 0;
      FUN_ram_0010d0fc(iVar7,0);
      FUN_ram_0010cd00(piVar8);
      uVar5 = 0;
    }
    FUN_ram_0015db98(param_1,uVar5);
    return;
  case '\x05':
    break;
  case '\x06':
    FUN_ram_0015f8f0();
    return;
  default:
    return;
  }
  iVar9 = *param_1;
  piVar8 = *(int **)(iVar9 + 0xc);
  iVar2 = 10;
  uVar5 = *(undefined4 *)(*piVar8 + 0x1c);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar9 + 0x38) + 0x388) + 0x1f0) + -10;
  if (param_2 == 6) {
    FUN_ram_000f7d60(param_1[6]);
    param_1[6] = 0;
  }
  else if (param_2 != 8) {
    if (param_2 == 7) {
      FUN_ram_000f7d60(param_1[6]);
      param_1[6] = 0;
      FUN_ram_0010cca4(piVar8);
      if ((iVar3 + 10) - iVar7 < 0) {
        iVar2 = iVar7 - iVar3;
      }
      FUN_ram_0015f748(uVar5,iVar2,0);
      iVar3 = FUN_ram_000f7c10(0,param_1,0,&LAB_ram_00163178,2);
      param_1[2] = iVar3;
      uVar5 = 2;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      FUN_ram_000f7d60(param_1[6]);
      param_1[6] = 0;
      FUN_ram_0010d0fc(iVar9,0);
      FUN_ram_0010cd00(piVar8);
      uVar5 = 0;
    }
    goto LAB_ram_0015ff04;
  }
  FUN_ram_0010cd00(piVar8);
  uVar4 = param_1[9];
  if (0x7ffffffe < uVar4) {
    uVar4 = 0x7ffffffe;
  }
  iVar3 = FUN_ram_000f7c10(uVar4,param_1,0,&LAB_ram_001631c0,2);
  param_1[4] = iVar3;
  DAT_ram_0018c2a0 = 1;
  uVar5 = 1;
LAB_ram_0015ff04:
  FUN_ram_0015db98(param_1,uVar5);
  return;
}


