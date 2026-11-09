/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00171b98 */

undefined4 FUN_ram_00171b98(uint param_1)

{
  if ((param_1 == 0) || (param_1 < 0x100)) {
    return 0;
  }
  if (param_1 < 0x200) {
    return 1;
  }
  if (0x2ff < param_1) {
    if (0x3ff < param_1) {
      return 0xffffffff;
    }
    return 3;
  }
  return 2;
}


