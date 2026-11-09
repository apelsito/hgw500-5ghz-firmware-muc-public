/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011a318 */

void FUN_ram_0011a318(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x1c);
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_ram_000ee834();
    *(undefined4 *)(param_1 + 0x134) = 0;
    FUN_ram_0012d030(iVar1,*(undefined4 *)(param_1 + 0x3c));
    FUN_ram_0012d134(iVar1,*(undefined4 *)(param_1 + 0x3c));
    *(undefined1 *)(iVar1 + 0x5ab8) = 0;
  }
  return;
}


