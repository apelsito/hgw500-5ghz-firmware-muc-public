/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bc70 */

undefined1 FUN_ram_0011bc70(int param_1,int param_2,int param_3)

{
  if (DAT_ram_0018c14c < 0) {
    return (&DAT_ram_0018d1fc)[param_2 * 3 + param_1 * 0xc + param_3];
  }
  return 0;
}


