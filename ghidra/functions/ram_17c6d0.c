/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017c6d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0017c6d0(void)

{
  if (-1 < DAT_ram_0018c2c8) {
    FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(uint)DAT_ram_0018c361 << 4,0x10,&DAT_ram_0020fe48);
    if ((DAT_ram_0020fe48 != 0) && (DAT_ram_0020fe4c != 0)) {
      _DAT_ram_e609114c = (uint)DAT_ram_0020fe4a;
      _DAT_ram_e6091160 = (uint)DAT_ram_0020fe4c;
      _DAT_ram_e6091150 = (uint)DAT_ram_0020fe4e;
      _DAT_ram_e6091164 = (uint)DAT_ram_0020fe50;
      _DAT_ram_e6091154 = (uint)DAT_ram_0020fe52;
      _DAT_ram_e6091168 = (uint)DAT_ram_0020fe54;
      _DAT_ram_e6091158 = (uint)DAT_ram_0020fe56;
      _DAT_ram_e609115c = (uint)DAT_ram_0020fe48;
    }
  }
  return;
}


