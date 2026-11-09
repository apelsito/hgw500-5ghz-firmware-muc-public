/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00179568 */

undefined1 FUN_ram_00179568(int param_1)

{
  if (2 < param_1) {
    param_1 = 0;
  }
  return *(undefined1 *)(DAT_ram_0018c3e0 + 5 + param_1 * 0x18);
}


