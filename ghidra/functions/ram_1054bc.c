/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001054bc */

undefined4 FUN_ram_001054bc(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3068);
}


