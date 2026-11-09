/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156f0c */

void FUN_ram_00156f0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_ram_80025e54(param_1,param_2,param_4);
  FUN_ram_80025e54(param_1 + 4,param_3,param_4);
  return;
}


