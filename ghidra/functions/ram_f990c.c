/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f990c */

undefined4 FUN_ram_000f990c(int param_1)

{
  *(undefined1 *)(param_1 + 0xd1) = 0;
  return 0;
}


