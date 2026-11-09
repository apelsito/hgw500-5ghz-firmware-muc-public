/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001077e8 */

undefined4 FUN_ram_001077e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = FUN_ram_000ee4c8(*(int *)(param_1 + 0x3d90) * 0xf0,0,2);
  if (iVar1 == 0) {
    uVar2 = 0xc;
  }
  else {
    DAT_ram_0018c0a4 = iVar1;
    *(int *)(param_1 + 0x3d84) = iVar1;
    FUN_ram_000eea80(iVar1,0,*(int *)(param_1 + 0x3d90) * 0xf0);
    iVar3 = *(int *)(param_1 + 0x3d90);
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        piVar5 = (int *)(iVar4 * 0xf0 + iVar1);
        *piVar5 = (int)(piVar5 + 0x20);
        iVar3 = FUN_ram_000f992c(*(undefined4 *)(param_1 + 0x3b20));
        piVar5[2] = iVar3;
        iVar3 = *(int *)(param_1 + 0x3d90);
        iVar4 = iVar6;
      } while (iVar6 < iVar3);
    }
    *(undefined4 *)(param_1 + 0x3d7c) = 0;
    *(int *)(param_1 + 0x3d80) = param_1 + 0x3d7c;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar6 = iVar3 + 1;
        iVar4 = iVar1 + iVar3 * 0xf0;
        *(undefined4 *)(iVar4 + 0xec) = 0;
        **(int **)(param_1 + 0x3d80) = iVar3 * 0xf0 + iVar1;
        *(int *)(param_1 + 0x3d80) = iVar4 + 0xec;
        iVar3 = iVar6;
      } while (iVar6 < *(int *)(param_1 + 0x3d90));
    }
    uVar2 = 0;
  }
  return uVar2;
}


