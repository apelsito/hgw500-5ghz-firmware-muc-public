/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103cd8 */

bool FUN_ram_00103cd8(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x150) + 4) != 0x700001c;
}


