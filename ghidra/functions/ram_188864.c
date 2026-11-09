/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188864 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00188864(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_00183c8c();
  if (DAT_ram_0018c010 == 3) {
    _DAT_ram_e6091040 = 1;
    _DAT_ram_e609103c = param_1;
    FUN_ram_000e4f98(500);
  }
  else {
    _DAT_ram_e609103c = param_1 & 0xfff;
    _DAT_ram_e6091040 = 1;
  }
  FUN_ram_00183bec(0xe60910e8,1,0,1);
  FUN_ram_00183bec(0xe60910e8,0x1fe,1,~param_1 & 0xff);
  FUN_ram_00183bec(0xe60910e8,0x1fe,1,param_1 & 0xff);
  FUN_ram_00183bec(0xe60910e8,1,0,0);
  FUN_ram_00183cd0(uVar1);
  DAT_ram_80037250 = param_1;
  return;
}


