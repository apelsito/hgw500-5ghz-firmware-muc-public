/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f992c */

void FUN_ram_000f992c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x34);
  *(int *)(param_1 + 0xfc) = iVar1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x100) = param_1 + 0xfc;
    return;
  }
  return;
}


