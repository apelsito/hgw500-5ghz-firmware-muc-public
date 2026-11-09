/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001079ec */

undefined4 FUN_ram_001079ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_ram_000ee4c8(0x66364,0,2);
  if (iVar1 == 0) {
    uVar2 = 0xc;
  }
  else {
    *(int *)(param_1 + 0x3dac) = iVar1;
    FUN_ram_000eea80(iVar1,0,0x66364);
    *(undefined4 *)(param_1 + 0x3d9c) = 0;
    piVar4 = (int *)(param_1 + 0x3d9c);
    *(int **)(param_1 + 0x3da0) = piVar4;
    iVar6 = iVar1 + 0xff8;
    iVar7 = 0x79;
    iVar5 = 0;
    LP_START = 0x107a70;
    LP_END = 0x107a94;
    do {
      *piVar4 = iVar1;
      iVar3 = iVar5 * 0xd84 + iVar6;
      *(undefined4 *)(iVar3 + -0x29c) = 0;
      piVar4 = (int *)(iVar3 + -0x29c);
      *(int **)(param_1 + 0x3da0) = piVar4;
      iVar1 = iVar1 + 0xd84;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined4 *)(param_1 + 0x3da4) = 0;
    *(int *)(param_1 + 0x3da8) = param_1 + 0x3da4;
    FUN_ram_000e7d40(param_1 + 0x3db0,1);
    uVar2 = 0;
  }
  return uVar2;
}


