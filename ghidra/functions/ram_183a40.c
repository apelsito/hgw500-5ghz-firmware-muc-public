/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00183a40(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  FUN_ram_00182bc4();
  _DAT_ram_e6091000 = 1;
  _DAT_ram_e6000004 = DAT_ram_0018c404;
  FUN_ram_00183bec(&DAT_ram_e6091094,1,0,DAT_ram_0018c400);
  _DAT_ram_e6090608 = DAT_ram_0018c3fc;
  FUN_ram_00183bec(&DAT_ram_e6000000,0x40,6,DAT_ram_0018c3f8);
  FUN_ram_00183bec(&DAT_ram_e6000000,8,3,DAT_ram_0018c3f4);
  FUN_ram_00188830();
  _DAT_ram_e6090180 = DAT_ram_0018c408 & 1;
  DAT_ram_0018c408 = DAT_ram_0018c408 >> 1;
  FUN_ram_00183bec(&DAT_ram_e6090560,0x100,8,DAT_ram_0018c408 & 1);
  DAT_ram_0018c408 = DAT_ram_0018c408 >> 1;
  FUN_ram_00183bec(&DAT_ram_e6090564,0x100,8,DAT_ram_0018c408 & 1);
  DAT_ram_0018c408 = DAT_ram_0018c408 >> 1;
  FUN_ram_00183bec(&DAT_ram_e6090568,0x100,8,DAT_ram_0018c408 & 1);
  DAT_ram_0018c408 = DAT_ram_0018c408 >> 1;
  FUN_ram_00183bec(&DAT_ram_e609056c,0x100,8,DAT_ram_0018c408 & 1);
  _DAT_ram_e6000008 = 0;
  _DAT_ram_e60910cc = 1;
  FUN_ram_00183bec(0xe6000014,1,0,0);
  FUN_ram_00183bec(0xe60910e8,1,0,0);
  FUN_ram_00182f88();
  uVar2 = FUN_ram_00183ef4();
  if (0x3f < uVar2) {
    uVar2 = 0x3f;
  }
  if (DAT_ram_0018c010 == 3) {
    uVar1 = FUN_ram_0016b600((undefined1)DAT_ram_0018c2f0,uVar2 & 0xff);
    FUN_ram_00188864(uVar1);
  }
  FUN_ram_00183cd0(0);
  return;
}


