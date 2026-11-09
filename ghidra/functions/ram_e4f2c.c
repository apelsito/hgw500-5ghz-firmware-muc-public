/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e4f2c */

undefined4 FUN_ram_000e4f2c(uint param_1)

{
  if ((((param_1 < 0x80000000) || (0x80080000 < param_1)) &&
      ((param_1 < 0x60000000 || (0x60080000 < param_1)))) &&
     (((int)param_1 < 0 || (0x8000000 < param_1)))) {
    return 0xffffffff;
  }
  return 0;
}


