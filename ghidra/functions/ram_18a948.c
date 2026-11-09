/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a948 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018a948(void)

{
  _DAT_ram_e6010058 = _DAT_ram_e6010058 | 0x80;
  _DAT_ram_e6000200 = 0x3c0;
  _DAT_ram_e60001f8 = 300;
  return;
}


