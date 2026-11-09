/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115688 */

int * FUN_ram_00115688(int param_1,int param_2,int param_3,uint *param_4,int param_5,int param_6,
                      int param_7,byte *param_8,undefined4 *param_9,uint *param_10)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (param_7 != 0) {
    if (((*param_4 & 0x80) == 0) ||
       (piVar3 = *(int **)(param_1 + 0x3b54 + (uint)*param_8 * 4), piVar3 == (int *)0x0)) {
      piVar3 = *(int **)(param_2 + 0x38);
    }
    else {
      param_2 = *piVar3;
    }
    if (*param_8 == 0x3f) {
      *param_8 = *(byte *)(piVar3 + 0x19f);
    }
  }
  *param_9 = 1;
  if (param_5 != 0) {
    return piVar3;
  }
  if (param_6 != 0x80 && param_6 != 0x50) {
    return piVar3;
  }
  uVar1 = *param_10 | 2;
  *param_10 = uVar1;
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  if (piVar3 == *(int **)(param_2 + 0x3c)) {
    return piVar3;
  }
  if (((int)piVar3 + 0x96U & 1) == 0 && (param_3 + 0x10U & 1) == 0) {
    if (((*(short *)(param_3 + 0x14) != *(short *)((int)piVar3 + 0x9a)) ||
        (*(short *)(param_3 + 0x12) != (short)piVar3[0x26])) ||
       (*(short *)(param_3 + 0x10) != *(short *)((int)piVar3 + 0x96))) {
LAB_ram_00115770:
      uVar1 = uVar1 | 1;
      goto LAB_ram_0011577c;
    }
  }
  else {
    uVar1 = FUN_ram_000eeb74((int)piVar3 + 0x96U,param_3 + 0x10U,6);
    iVar2 = 1 - uVar1;
    if (1 < uVar1) {
      iVar2 = 0;
    }
    uVar1 = *param_10;
    if (iVar2 == 0) goto LAB_ram_00115770;
  }
  uVar1 = uVar1 | 4;
LAB_ram_0011577c:
  *param_10 = uVar1;
  return piVar3;
}


