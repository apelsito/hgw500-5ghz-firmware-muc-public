/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103348 */

void FUN_ram_00103348(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 4;
  iVar3 = 0;
  LP_START = 0x103354;
  LP_END = 0x103390;
  do {
    iVar1 = iVar3 * 4 + 0x400;
    if (param_2 == 0) {
      uVar2 = *param_3;
    }
    else {
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1);
      uVar2 = 0x40000000;
    }
    param_3 = param_3 + 1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = uVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar3 = 0;
  iVar4 = 4;
  LP_START = 0x1033a0;
  LP_END = 0x1033d8;
  do {
    iVar1 = iVar3 * 4 + 0x410;
    if (param_2 == 0) {
      uVar2 = *param_3;
    }
    else {
      uVar2 = 0x40000000;
      *param_3 = *(undefined4 *)(iVar1 + *(int *)(param_1 + 0xc));
    }
    param_3 = param_3 + 1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = uVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar3 = 0;
  iVar4 = 4;
  LP_START = 0x1033e8;
  LP_END = 0x103424;
  do {
    iVar1 = iVar3 * 4 + 0x420;
    if (param_2 == 0) {
      uVar2 = *param_3;
    }
    else {
      *param_3 = *(undefined4 *)(iVar1 + *(int *)(param_1 + 0xc));
      uVar2 = 0x40000000;
    }
    param_3 = param_3 + 1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = uVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


