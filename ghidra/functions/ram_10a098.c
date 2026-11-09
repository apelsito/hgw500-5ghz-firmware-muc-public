/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010a098 */

void FUN_ram_0010a098(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x3da4);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xd60);
      FUN_ram_0010a024(param_1);
    }
  }
  return;
}


