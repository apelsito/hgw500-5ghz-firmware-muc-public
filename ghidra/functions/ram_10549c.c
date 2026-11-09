/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010549c */

void FUN_ram_0010549c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3068) = param_2;
  return;
}


