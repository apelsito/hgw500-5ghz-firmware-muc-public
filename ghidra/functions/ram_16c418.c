/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016c418 */

bool FUN_ram_0016c418(void)

{
  DAT_ram_0021e020 = 0;
  DAT_ram_0018c34c = 0;
  DAT_ram_0021e028 = 0;
  return DAT_ram_8002c8bc != '\x03';
}


