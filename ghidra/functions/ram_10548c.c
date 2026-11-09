/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010548c */

void FUN_ram_0010548c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3050) = param_2;
  return;
}


