/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014db58 */

void FUN_ram_0014db58(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x52c) == '\0') {
    return;
  }
  param_2 = param_2 * 0x100;
  *(int *)(param_1 + 0x520) = param_2 + 0xf600 >> 6;
  *(int *)(param_1 + 0x524) = param_2 + 0xf640 >> 6;
  *(int *)(param_1 + 0x528) = param_2 + 0xf680 >> 6;
  return;
}


