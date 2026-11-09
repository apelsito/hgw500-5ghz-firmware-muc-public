/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f949c */

void FUN_ram_000f949c(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2054) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2054);
  return;
}


