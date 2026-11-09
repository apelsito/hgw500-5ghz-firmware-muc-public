/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e2000 */

uint FUN_ram_000e2000(uint param_1)

{
  if ((0x7fffffff < param_1) && (param_1 < 0x80080000)) {
    return param_1 + 0xe0000000;
  }
  if (param_1 < 0x8000000) {
    return param_1 + 0x40000000;
  }
  if (0xbfffffff < param_1) {
    return param_1;
  }
  return 0;
}


