/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018291c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018291c(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_ram_00182500();
  FUN_ram_001825e8();
  FUN_ram_00183bec(0xe60910e8,1,0,1);
  FUN_ram_00183bec(&DAT_ram_e6000000,6,1,3);
  FUN_ram_00183bec(&DAT_ram_e6000000,1,0,1);
  iVar1 = FUN_ram_00183bdc(0xe6000014,1,0);
  if (iVar1 == 0) {
    FUN_ram_00183bec(0xe6000014,1,0,1);
    do {
      uVar2 = FUN_ram_00183bdc(&DAT_ram_e6000320,0x180,7);
    } while ((uVar2 & 2) != 2);
    FUN_ram_00183c8c();
    FUN_ram_00183bec(&DAT_ram_e6000320,0x180,7,2);
    FUN_ram_0018a974();
    _DAT_ram_e6000008 = 1;
  }
  _DAT_ram_e60910d0 = 1;
  _DAT_ram_e60910cc = 0;
  DAT_ram_0018c408 = _DAT_ram_e6090180;
  _DAT_ram_e6090180 = 1;
  iVar1 = FUN_ram_00183bdc(&DAT_ram_e6090560,0x100,8);
  DAT_ram_0018c408 = iVar1 * 2 | DAT_ram_0018c408;
  FUN_ram_00183bec(&DAT_ram_e6090560,0x100,8,1);
  iVar1 = FUN_ram_00183bdc(&DAT_ram_e6090564,0x100,8);
  DAT_ram_0018c408 = iVar1 << 2 | DAT_ram_0018c408;
  FUN_ram_00183bec(&DAT_ram_e6090564,0x100,8,1);
  iVar1 = FUN_ram_00183bdc(&DAT_ram_e6090568,0x100,8);
  DAT_ram_0018c408 = iVar1 << 3 | DAT_ram_0018c408;
  FUN_ram_00183bec(&DAT_ram_e6090568,0x100,8,1);
  iVar1 = FUN_ram_00183bdc(&DAT_ram_e609056c,0x100,8);
  DAT_ram_0018c408 = iVar1 << 4 | DAT_ram_0018c408;
  FUN_ram_00183bec(&DAT_ram_e609056c,0x100,8,1);
  DAT_ram_0018c3f4 = FUN_ram_00183bdc(&DAT_ram_e6000000,8,3);
  FUN_ram_00183bec(&DAT_ram_e6000000,8,3,0);
  DAT_ram_0018c3f8 = FUN_ram_00183bdc(&DAT_ram_e6000000,0x40,6);
  FUN_ram_00183bec(&DAT_ram_e6000000,0x40,6,0);
  DAT_ram_0018c3fc = _DAT_ram_e6090608;
  _DAT_ram_e6090608 = 1;
  DAT_ram_0018c400 = FUN_ram_00183bdc(&DAT_ram_e6091094,1,0);
  FUN_ram_00183bec(&DAT_ram_e6091094,1,0,0);
  DAT_ram_0018c404 = _DAT_ram_e6000004;
  _DAT_ram_e6000004 = 0x101ffff;
  FUN_ram_00188830();
  _DAT_ram_e6091000 = 0xc;
  return;
}


