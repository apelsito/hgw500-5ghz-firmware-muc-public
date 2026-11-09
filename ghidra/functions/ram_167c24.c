/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00167c24 */

void FUN_ram_00167c24(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 6) = param_6;
  return;
}


