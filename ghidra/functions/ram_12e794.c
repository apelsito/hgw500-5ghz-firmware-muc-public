/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e794 */

void FUN_ram_0012e794(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xd38);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0xd3c) != 0) {
      FUN_ram_00109920(param_1);
      iVar1 = *(int *)(param_2 + 0xd38);
      *(undefined4 *)(param_2 + 0xd3c) = 0;
    }
    FUN_ram_000ee834(iVar1);
    *(undefined4 *)(param_2 + 0xd38) = 0;
  }
  return;
}


