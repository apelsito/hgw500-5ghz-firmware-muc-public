/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107980 */

void FUN_ram_00107980(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3d5c) != 0) {
    iVar1 = *(int *)(param_1 + 0x3d54);
    if (iVar1 != 0) {
      do {
        iVar1 = *(int *)(iVar1 + 0x14);
        *(int *)(param_1 + 0x3d54) = iVar1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0x3d58) = param_1 + 0x3d54;
    }
    FUN_ram_000eea80(*(int *)(param_1 + 0x3d5c),0,0x300);
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x3d5c));
    *(undefined4 *)(param_1 + 0x3d5c) = 0;
  }
  return;
}


