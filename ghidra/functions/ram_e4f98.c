/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e4f98 */

void FUN_ram_000e4f98(int param_1)

{
  param_1 = param_1 << 5;
  do {
    param_1 = param_1 + -1;
  } while (0 < param_1);
  return;
}


