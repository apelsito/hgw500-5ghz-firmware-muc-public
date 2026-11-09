/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd698 */

uint FUN_ram_000fd698(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xc) + 0x2050) & 0xffffff;
}


