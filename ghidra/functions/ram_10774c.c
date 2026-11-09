/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010774c */

undefined4 FUN_ram_0010774c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_ram_000ee4c8(0x600,0,2);
  if (iVar1 == 0) {
    uVar2 = 0xc;
  }
  else {
    *(int *)(param_1 + 0x3d70) = iVar1;
    FUN_ram_000eea80(iVar1,0,0x600);
    *(undefined4 *)(param_1 + 0x3d68) = 0;
    *(int *)(param_1 + 0x3d6c) = param_1 + 0x3d68;
    iVar4 = 0x20;
    LP_START = 0x1077c0;
    LP_END = 0x1077d4;
    do {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      piVar3 = *(int **)(param_1 + 0x3d6c);
      *(int **)(iVar1 + 0x2c) = piVar3;
      *piVar3 = iVar1;
      *(int *)(param_1 + 0x3d6c) = iVar1 + 0x28;
      iVar1 = iVar1 + 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar2 = 0;
  }
  return uVar2;
}


