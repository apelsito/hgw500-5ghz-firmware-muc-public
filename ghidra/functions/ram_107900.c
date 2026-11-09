/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107900 */

void FUN_ram_00107900(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3d70);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x3d68);
    if (iVar2 != 0) {
      do {
        if (*(int *)(iVar2 + 0x28) == 0) {
          *(undefined4 *)(param_1 + 0x3d6c) = *(undefined4 *)(iVar2 + 0x2c);
        }
        else {
          *(undefined4 *)(*(int *)(iVar2 + 0x28) + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
        }
        **(undefined4 **)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x28);
        iVar2 = *(int *)(param_1 + 0x3d68);
      } while (iVar2 != 0);
      iVar1 = *(int *)(param_1 + 0x3d70);
    }
    FUN_ram_000eea80(iVar1,0,0x600);
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x3d70));
    *(undefined4 *)(param_1 + 0x3d70) = 0;
  }
  return;
}


