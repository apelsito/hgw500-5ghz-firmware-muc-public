/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd65c */

uint FUN_ram_000fd65c(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xc) + 0x2044) & 0xffffff;
}


