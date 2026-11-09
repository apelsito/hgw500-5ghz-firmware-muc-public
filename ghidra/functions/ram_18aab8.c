/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018aab8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0018aab8(void)

{
  if (((_DAT_ram_e6090220 & 1) != 0) && (_DAT_ram_e6090284 == 0x65)) {
    return 1;
  }
  return 0;
}


