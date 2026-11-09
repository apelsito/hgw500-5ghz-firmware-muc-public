/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00127c18 */

void FUN_ram_00127c18(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int **)(param_2 + 0x84) != (int *)0x0) && (**(int **)(param_2 + 0x84) != 0)) {
    FUN_ram_00109920();
    iVar3 = (*(undefined4 **)(param_2 + 0x84))[1];
    if (iVar3 == 0) {
      **(undefined4 **)(param_2 + 0x84) = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x84) + 4) = 0;
    }
    else {
      uVar1 = STATUS32;
      if ((uVar1 & 2) != 0) {
        STATUS32 = uVar1 & 0xfffffffd;
      }
      iVar2 = *(int *)(iVar3 + 0x10) + -1;
      *(int *)(iVar3 + 0x10) = iVar2;
      STATUS32 = uVar1;
      if (iVar2 == 0) {
        FUN_ram_000eea80(iVar3,0,0x18);
        FUN_ram_000e7d50(param_1 + 0x3d60);
        *(undefined4 *)(iVar3 + 0x14) = 0;
        **(int **)(param_1 + 0x3d58) = iVar3;
        *(int *)(param_1 + 0x3d58) = iVar3 + 0x14;
        FUN_ram_000e7da8(param_1 + 0x3d60);
      }
      **(undefined4 **)(param_2 + 0x84) = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x84) + 4) = 0;
    }
  }
  return;
}


