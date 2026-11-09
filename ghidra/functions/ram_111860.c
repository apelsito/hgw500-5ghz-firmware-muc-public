/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00111860 */

void FUN_ram_00111860(int param_1,int param_2)

{
  if (param_2 == 0x508) {
    *(undefined2 *)(param_1 + 0x3b24) = 1;
    *(undefined2 *)(param_1 + 0x3b26) = 3;
    return;
  }
  if (param_2 == 0x20) {
    *(undefined2 *)(param_1 + 0x3b24) = 2;
    *(undefined2 *)(param_1 + 0x3b26) = 0;
    return;
  }
  if (param_2 == 0x21) {
    *(undefined2 *)(param_1 + 0x3b24) = 2;
    *(undefined2 *)(param_1 + 0x3b26) = 1;
    return;
  }
  *(undefined2 *)(param_1 + 0x3b24) = 0xffff;
  *(undefined2 *)(param_1 + 0x3b26) = 0xffff;
  return;
}


