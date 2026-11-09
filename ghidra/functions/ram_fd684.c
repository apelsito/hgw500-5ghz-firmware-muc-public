/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd684 */

uint FUN_ram_000fd684(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xc) + 0x204c) & 0xffffff;
}


