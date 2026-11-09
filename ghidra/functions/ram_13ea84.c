/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013ea84 */

uint FUN_ram_0013ea84(uint param_1,int param_2)

{
  if (param_2 == 0) {
    return param_1 & 0xffffff7f;
  }
  if ((param_1 & 0x40) == 0) {
    return (param_1 & 0xf) + ((int)param_1 >> 4) * 10;
  }
  return (param_1 & 0xffffffbf) + 0x21;
}


