/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018aa34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018aa34(void)

{
  _DAT_ram_e6000004 = _DAT_ram_e6000004 & 0xfffffff0;
  return;
}


