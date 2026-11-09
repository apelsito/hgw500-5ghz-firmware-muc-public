/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00188830(void)

{
  _DAT_ram_e60002fc = 1;
  FUN_ram_000e4f98(2000);
  _DAT_ram_e60002fc = 0;
  return;
}


