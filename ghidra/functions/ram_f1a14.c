/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1a14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000f1a14(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = 0;
  local_2c[0] = DAT_ram_001a58d0;
  local_2c[1] = DAT_ram_001a58d4;
  local_2c[2] = DAT_ram_001a58d8;
  local_2c[3] = DAT_ram_001a58dc;
  local_1c = DAT_ram_001a58e0;
  local_18 = DAT_ram_001a58e4;
  local_14 = DAT_ram_001a58e8;
  local_10 = DAT_ram_001a58ec;
  _DAT_ram_e0000098 = 0;
  FUN_ram_000eea80(&DAT_ram_001cb290,0,4);
  DAT_ram_001cb294 = 0x1f;
  DAT_ram_001cb290 = DAT_ram_001cb290 | 1;
  FUN_ram_000eea80(&DAT_ram_001cb298,0,4);
  DAT_ram_001cb29c = 8;
  iVar3 = 8;
  LP_START = 0xf1ab8;
  LP_END = 0xf1ac8;
  do {
    puVar1 = local_2c + iVar2;
    iVar2 = iVar2 + 1;
    DAT_ram_001cb298 = DAT_ram_001cb298 | 1 << (*puVar1 & 0x1f);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_ram_001cb298 = DAT_ram_001cb298 | 0xffff0000;
  FUN_ram_000f19a0();
  return;
}


