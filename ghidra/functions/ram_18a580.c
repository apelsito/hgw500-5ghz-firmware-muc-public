/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0018a580(void)

{
  if ((_DAT_ram_e6000000 & 0x40) != 0) {
    return 0x50;
  }
  if ((_DAT_ram_e6000000 & 8) == 0) {
    return 0x14;
  }
  return 0x28;
}


