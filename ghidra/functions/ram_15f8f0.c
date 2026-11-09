/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015f8f0 */

void FUN_ram_0015f8f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = DAT_ram_80038ee0;
  iVar8 = *param_1;
  iVar6 = *(int *)(*(int *)(iVar8 + 0x38) + 0x388);
  iVar3 = *(int *)(iVar6 + 0x1f0);
  piVar7 = *(int **)(iVar8 + 0xc);
  iVar4 = 10;
  uVar5 = *(undefined4 *)(*piVar7 + 0x1c);
  iVar1 = FUN_ram_001583c4(piVar7);
  iVar3 = iVar3 + -10;
  if (param_2 == 4) {
    if ((*(int *)(iVar6 + 0x218) != 0) || (*(int *)(iVar6 + 0x21c) != 0 || iVar1 != 0)) {
LAB_ram_0015f9d4:
      FUN_ram_000f7d60(param_1[3]);
      param_1[3] = 0;
      FUN_ram_0010d0fc(iVar8,0);
      iVar2 = FUN_ram_000f7c10(10,param_1,0,&LAB_ram_00163208,2);
      param_1[6] = iVar2;
      uVar5 = 5;
      goto LAB_ram_0015fa48;
    }
    FUN_ram_000f7d60(param_1[3]);
    param_1[3] = 0;
  }
  else {
    if (param_2 != 3) {
      if (param_2 != 1) {
        return;
      }
      FUN_ram_000f7d60(param_1[3]);
      param_1[3] = 0;
      FUN_ram_0010d0fc(iVar8,0);
      FUN_ram_0010cd00(piVar7);
      uVar5 = 0;
      goto LAB_ram_0015fa48;
    }
    if (iVar1 != 0) goto LAB_ram_0015f9d4;
  }
  if ((iVar2 + 10) - iVar3 < 0) {
    iVar4 = iVar3 - iVar2;
  }
  FUN_ram_0015f748(uVar5,iVar4,0);
  iVar2 = FUN_ram_000f7c10(0,param_1,0,&LAB_ram_00163178,2);
  param_1[2] = iVar2;
  uVar5 = 2;
LAB_ram_0015fa48:
  FUN_ram_0015db98(param_1,uVar5);
  return;
}


