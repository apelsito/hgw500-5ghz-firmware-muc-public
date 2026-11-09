/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd670 */

uint FUN_ram_000fd670(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xc) + 0x2048) & 0xffffff;
}


