/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ec84 */

void FUN_ram_0011ec84(int param_1)

{
  int iVar1;
  
  FUN_ram_000e7d50(param_1 + 0x3884);
  for (iVar1 = *(int *)(param_1 + 0x388c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x114)) {
    FUN_ram_0013d37c(iVar1);
  }
  FUN_ram_000e7da8(param_1 + 0x3884);
  return;
}


