/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017fcd0 */

undefined * FUN_ram_0017fcd0(void)

{
  if (DAT_ram_8002c8bc == '\x03') {
    return PTR_s_disabled_ram_001ab5f0_ram_0018c3b0;
  }
  return PTR_PTR_ram_0018c3b4;
}


