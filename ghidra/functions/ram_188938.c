/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188938 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00188938(void)

{
  if (_DAT_ram_e609013c == 0) {
    return 0;
  }
  return _DAT_ram_e6090128;
}


