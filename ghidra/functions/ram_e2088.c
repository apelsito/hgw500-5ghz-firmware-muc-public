/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e2088 */

void FUN_ram_000e2088(void)

{
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_000ed374();
  }
  else {
    FUN_ram_000ed2b4();
  }
  return;
}


