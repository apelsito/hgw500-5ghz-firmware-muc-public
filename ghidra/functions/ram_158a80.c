/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158a80 */

int FUN_ram_00158a80(int param_1)

{
  if (DAT_ram_0018c26c != 0) {
    return DAT_ram_0018c26c + param_1 * 0x38;
  }
  return 0;
}


