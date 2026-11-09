/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010e7f0 */

void FUN_ram_0010e7f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9)

{
  FUN_ram_80025588(param_2,param_3);
  *(char *)(param_2 + 2) = (char)param_5;
  *(char *)(param_2 + 3) = (char)((uint)param_5 >> 8);
  if (((param_2 + 4U & 1) == 0) && ((param_2 + 10U & 1) == 0)) {
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_2 + 10);
    *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 0xc);
    *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_2 + 0xe);
  }
  else {
    FUN_ram_0039fe00(param_2 + 4U,param_2 + 10U,6);
  }
  FUN_ram_0010cd5c(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9);
  return;
}


