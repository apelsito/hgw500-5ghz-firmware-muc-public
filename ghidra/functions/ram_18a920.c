/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018a920(void)

{
  _DAT_ram_e6010058 = _DAT_ram_e6010058 & 0xffffff7f;
  _DAT_ram_e6000200 = 0xa00;
  _DAT_ram_e60001f8 = 0x50;
  return;
}


