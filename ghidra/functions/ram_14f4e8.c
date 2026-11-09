/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014f4e8 */

void FUN_ram_0014f4e8(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_000e7d50(param_1 + 0x3884);
  for (iVar1 = *(int *)(param_1 + 0x388c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x114)) {
    (*param_2)(iVar1,param_3);
  }
  FUN_ram_000e7da8(param_1 + 0x3884);
  return;
}


