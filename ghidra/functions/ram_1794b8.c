/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001794b8 */

undefined4 FUN_ram_001794b8(int param_1)

{
  if (param_1 < 100) {
    return 0;
  }
  if (0x94 < param_1) {
    return 2;
  }
  return 1;
}


