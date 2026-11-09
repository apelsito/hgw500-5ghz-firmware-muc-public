/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c158 */

void FUN_ram_0011c158(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  iVar8 = *(int *)(param_1 + 0x1c);
  piVar10 = *(int **)(iVar8 + 0xc);
  uVar2 = *(undefined1 *)(iVar8 + 0x10);
  iVar9 = *(int *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)(*piVar10 + 0x1c);
  uVar3 = *(undefined4 *)(iVar9 + 0x38);
  uVar5 = *(undefined4 *)(iVar9 + 0x3c);
  *(short *)(iVar8 + 0x9c) = (short)*(undefined4 *)(iVar9 + 0x24);
  FUN_ram_00128e60(iVar8,uVar3,uVar5,*(undefined2 *)(param_2 + 0xc));
  FUN_ram_0011c09c(piVar10,iVar9);
  iVar4 = *(int *)(iVar9 + 0x2c);
  *(short *)((int)piVar10 + 0x43a) = (short)*(undefined4 *)(iVar9 + 0x20);
  cVar1 = *(char *)((int)piVar10 + 0x1d);
  *(int *)(iVar8 + 0x130) = iVar4;
  if (((cVar1 != '\x0e' && cVar1 != '\r') && cVar1 != '\f') && cVar1 != '\v') {
    if (cVar1 == '\b') {
      uVar6 = piVar10[0xb];
    }
    else {
      if (cVar1 != '\t') goto LAB_ram_0011c214;
      uVar6 = piVar10[0xb];
    }
    if ((uVar6 & 0x40000000) == 0) goto LAB_ram_0011c214;
  }
  if (*(int *)(iVar9 + 0x30) != 0 && iVar4 != 0) {
    *(int *)(iVar8 + 0x130) = *(int *)(iVar9 + 0x34) + iVar4;
  }
LAB_ram_0011c214:
  piVar10 = (int *)FUN_ram_00128c64(uVar7,uVar2);
  FUN_ram_00137dac(uVar7);
  if ((piVar10 != (int *)0x0) &&
     (*(short *)((int)piVar10 + 0x16) = (short)*(undefined4 *)(param_2 + 0xc), *piVar10 == 0)) {
    FUN_ram_00127d04(uVar7,iVar8,1);
  }
  return;
}


