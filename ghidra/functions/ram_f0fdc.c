/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f0fdc */

int FUN_ram_000f0fdc(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0x7f < param_2) {
    FUN_ram_000ee260(s_uc_hostif_free_data_node__wrong_n_ram_001bdf54);
    return 0;
  }
  iVar5 = param_2 + 2;
  iVar2 = *(int *)(*(int *)(param_1 + 0x44) + iVar5 * 0x20 + 8);
  *(undefined4 *)(iVar5 * 0x20 + *(int *)(param_1 + 0x44) + 8) = 0;
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x18);
    FUN_ram_000e7b84(param_1);
    iVar4 = iVar4 + 1;
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x44) + 1 + iVar5 * 0x20);
  iVar2 = FUN_ram_000f1ae8(uVar1);
  while (iVar2 == 0) {
    iVar2 = FUN_ram_000f1ae8(uVar1);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x2c) + iVar5 * 4);
  iVar2 = *piVar3;
  *piVar3 = -1;
  FUN_ram_000f1b6c(*(undefined1 *)(iVar5 * 0x20 + 1 + *(int *)(param_1 + 0x44)));
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x18);
    FUN_ram_000e7b84(param_1,iVar2);
    iVar2 = 1;
    while (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + 0x18);
      FUN_ram_000e7b84(param_1,iVar5);
      iVar2 = iVar2 + 1;
      iVar5 = iVar6;
    }
    return iVar2 + iVar4;
  }
  return iVar4;
}


