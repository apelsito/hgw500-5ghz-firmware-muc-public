/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001076a4 */

undefined4 FUN_ram_001076a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_ram_000ee4c8(0x300,0,2);
  if (iVar1 == 0) {
    uVar2 = 0xc;
  }
  else {
    *(int *)(param_1 + 0x3d5c) = iVar1;
    FUN_ram_000eea80(iVar1,0,0x300);
    *(undefined4 *)(param_1 + 0x3d54) = 0;
    piVar5 = (int *)(param_1 + 0x3d54);
    *(int **)(param_1 + 0x3d58) = piVar5;
    iVar7 = 0x20;
    iVar3 = 0;
    LP_START = 0x10771c;
    LP_END = 0x107734;
    iVar6 = iVar1;
    do {
      *piVar5 = iVar6;
      iVar6 = iVar6 + 0x18;
      iVar4 = iVar3 * 0x18 + iVar1;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      piVar5 = (int *)(iVar4 + 0x14);
      *(int **)(param_1 + 0x3d58) = piVar5;
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar2 = 0;
  }
  return uVar2;
}


