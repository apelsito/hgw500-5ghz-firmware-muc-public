/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00167c0c */

void FUN_ram_00167c0c(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                     undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  *(undefined4 *)(param_1 + 8) = param_7;
  return;
}


