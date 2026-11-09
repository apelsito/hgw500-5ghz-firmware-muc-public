/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e83b4 */

void FUN_ram_000e83b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  do {
    iVar1 = FUN_ram_000f1ae8(*(undefined1 *)(iVar2 + 8));
    if (iVar1 != 0) {
      return;
    }
  } while (param_2 != 0);
  return;
}


