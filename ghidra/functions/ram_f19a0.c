/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f19a0 */

void FUN_ram_000f19a0(void)

{
  if (DAT_ram_001cb2ac != 0) {
    FUN_ram_000ee834();
  }
  DAT_ram_001cb2ac = FUN_ram_000ee734(0x800,0);
  if ((DAT_ram_001cb2ac == 0) && (FUN_ram_80030314(), DAT_ram_001cb2ac == 0)) {
    DAT_ram_001cb2a0 = 0x800;
    return;
  }
  DAT_ram_001cb2a0 = 0x800;
  FUN_ram_000eea80(DAT_ram_001cb2ac,0,0x800);
  DAT_ram_001cb2a8 = 0;
  DAT_ram_001cb2a4 = 0;
  return;
}


