/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013bb0c */

undefined4 FUN_ram_0013bb0c(int param_1)

{
  if (param_1 == 0) {
    return 8;
  }
  if (param_1 != 1) {
    if (param_1 != 3) {
      return 0;
    }
    return 0x10;
  }
  return 0x14;
}


