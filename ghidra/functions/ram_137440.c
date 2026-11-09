/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137440 */

undefined4 FUN_ram_00137440(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) {
    param_1[8] = -1000;
    uVar2 = 0xffffffff;
  }
  else {
    iVar5 = 0;
    iVar3 = 4;
    piVar4 = param_1;
    do {
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        piVar4[4] = -1000;
      }
      else {
        iVar5 = iVar5 + iVar1;
        uVar2 = FUN_ram_0018ad30(iVar1,param_3,param_4);
        iVar1 = FUN_ram_0018ad78(uVar2,param_2);
        piVar4[4] = iVar1;
      }
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + 1;
    } while (iVar3 != 0);
    if (iVar5 >> 2 == 0) {
      param_1[8] = -1000;
    }
    else {
      uVar2 = FUN_ram_0018ad30(iVar5 >> 2,param_3,param_4);
      iVar3 = FUN_ram_0018ad78(uVar2,param_2);
      param_1[8] = iVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}


