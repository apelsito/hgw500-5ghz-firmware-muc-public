/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010a0e0 */

void FUN_ram_0010a0e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_ram_001148f0(param_1,param_2,0);
  if (*(int *)(param_2 + 8) != 0) {
    FUN_ram_001147b0(param_1,param_2,param_3);
    FUN_ram_000ee834(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


