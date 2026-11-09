/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00183120(void)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_ram_00183bdc(&DAT_ram_e6000320,0x180,7);
  } while ((uVar1 & 1) != 1);
  FUN_ram_00183bec(&DAT_ram_e6000320,0x180,7,1);
  _DAT_ram_e6091000 = 0xc;
  return;
}


