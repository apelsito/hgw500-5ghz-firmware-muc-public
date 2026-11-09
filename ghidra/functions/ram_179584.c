/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00179584 */

undefined2 FUN_ram_00179584(int param_1)

{
  if (2 < param_1) {
    param_1 = 0;
  }
  return *(undefined2 *)(DAT_ram_0018c3e0 + 8 + param_1 * 0x18);
}


