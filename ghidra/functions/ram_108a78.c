/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108a78 */

void FUN_ram_00108a78(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3dac) != 0) {
    iVar1 = *(int *)(param_1 + 0x3d9c);
    if (iVar1 != 0) {
      do {
        iVar1 = *(int *)(iVar1 + 0xd5c);
        *(int *)(param_1 + 0x3d9c) = iVar1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0x3da0) = param_1 + 0x3d9c;
    }
    FUN_ram_000eea80(*(int *)(param_1 + 0x3dac),0,0x66364);
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x3dac));
    *(undefined4 *)(param_1 + 0x3dac) = 0;
  }
  return;
}


