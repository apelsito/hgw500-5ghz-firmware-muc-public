/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015914c */

undefined1 * FUN_ram_0015914c(undefined1 *param_1)

{
  *param_1 = 0x80;
  param_1[1] = 0x80;
  param_1[2] = 0x80;
  param_1[3] = 0x80;
  param_1[4] = 0x80;
  param_1[5] = 0x80;
  return param_1 + 6;
}


