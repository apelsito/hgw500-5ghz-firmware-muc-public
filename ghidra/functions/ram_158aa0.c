/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158aa0 */

int FUN_ram_00158aa0(int param_1)

{
  if (DAT_ram_0018c270 != 0) {
    return DAT_ram_0018c270 + param_1 * 0x2c;
  }
  return 0;
}


