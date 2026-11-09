/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80025e74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_80025e74(void)

{
  if (DAT_ram_0018c02c != 0) {
    if ((_DAT_ram_e0000170 & 0xf) != 2) {
      return 0;
    }
    _DAT_ram_e0000170 = 0x20000000;
  }
  return 1;
}


