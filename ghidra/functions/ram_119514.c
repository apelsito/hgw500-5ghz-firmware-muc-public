/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119514 */

int * FUN_ram_00119514(int *param_1,int param_2,short *param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)*param_1;
  iVar6 = *(int *)(*piVar7 + 0x1c);
  if (*(char *)(param_2 + 0x2c) == '\x02') {
    if (((uint)param_3 & 1) == 0 && (param_2 + 0x18U & 1) == 0) {
      if (((*(short *)(param_2 + 0x1c) == param_3[2]) && (*(short *)(param_2 + 0x1a) == param_3[1]))
         && (*(short *)(param_2 + 0x18) == *param_3)) {
        return (int *)0x0;
      }
    }
    else {
      uVar8 = FUN_ram_000eeb74(param_3,param_2 + 0x18U,6);
      iVar4 = 1 - uVar8;
      if (1 < uVar8) {
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        return (int *)0x0;
      }
    }
  }
  piVar2 = (int *)FUN_ram_00109b54(param_1,param_2,param_3,param_4);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  if ((((int)piVar2 + 0x96U & 1) == 0) && (((uint)param_3 & 1) == 0)) {
    *(short *)((int)piVar2 + 0x96) = *param_3;
    *(short *)(piVar2 + 0x26) = param_3[1];
    *(short *)((int)piVar2 + 0x9a) = param_3[2];
  }
  else {
    FUN_ram_0039fe00((int)piVar2 + 0x96U,param_3,6);
  }
  bVar1 = *(byte *)((int)param_3 + 5);
  FUN_ram_000e7d50(param_1 + 1);
  piVar2[0x45] = 0;
  piVar5 = (int *)param_1[4];
  uVar8 = bVar1 & 0x1f;
  piVar2[0x46] = (int)piVar5;
  *piVar5 = (int)piVar2;
  param_1[4] = (int)(piVar2 + 0x45);
  iVar4 = param_1[uVar8 + 5];
  piVar2[0x49] = iVar4;
  if (iVar4 != 0) {
    *(int **)(iVar4 + 0x128) = piVar2 + 0x49;
  }
  param_1[uVar8 + 5] = (int)piVar2;
  piVar2[0x4a] = (int)(param_1 + uVar8 + 5);
  piVar2[2] = (int)param_1;
  *piVar2 = param_2;
  piVar2[1] = (int)piVar7;
  FUN_ram_000e7da8(param_1 + 1);
  if (*(char *)(param_2 + 0x10) == '\0') {
    uVar8 = param_2 + 0x18;
    if (((uint)param_3 & 1) == 0 && (uVar8 & 1) == 0) {
      if (((param_3[2] == *(short *)(param_2 + 0x1c)) && (*(short *)(param_2 + 0x1a) == param_3[1]))
         && (*(short *)(param_2 + 0x18) == *param_3)) {
LAB_ram_001196d0:
        FUN_ram_00103a8c(*(undefined4 *)(iVar6 + 0x3b20),uVar8);
        return piVar2;
      }
    }
    else {
      uVar3 = FUN_ram_000eeb74(param_3,uVar8,6);
      iVar4 = 1 - uVar3;
      if (1 < uVar3) {
        iVar4 = 0;
      }
      if (iVar4 != 0) goto LAB_ram_001196d0;
    }
  }
  return piVar2;
}


