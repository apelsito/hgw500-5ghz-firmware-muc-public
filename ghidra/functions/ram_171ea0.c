/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00171ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00171ea0(void)

{
  return (_DAT_ram_e6040018 >> 7 & 0xe0) >> 5;
}


