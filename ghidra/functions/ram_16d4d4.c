/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016d4d4 */

bool FUN_ram_0016d4d4(void)

{
  DAT_ram_0021e024 = 0;
  DAT_ram_0021e028 = 0;
  return DAT_ram_8002c8bc != '\x03';
}


