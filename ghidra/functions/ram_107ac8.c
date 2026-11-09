/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107ac8 */

void FUN_ram_00107ac8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3d84) != 0) {
    iVar1 = *(int *)(param_1 + 0x3d7c);
    if (iVar1 != 0) {
      do {
        iVar1 = *(int *)(iVar1 + 0xec);
        *(int *)(param_1 + 0x3d7c) = iVar1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0x3d80) = param_1 + 0x3d7c;
    }
    FUN_ram_000eea80(*(int *)(param_1 + 0x3d84),0,*(int *)(param_1 + 0x3d90) * 0xf0);
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x3d84));
    *(undefined4 *)(param_1 + 0x3d84) = 0;
  }
  return;
}


