/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183358 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00183358(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_00183c8c();
  iVar2 = FUN_ram_00183bdc(0xe60910e8,1,0);
  _DAT_ram_e609103c = param_1 & 0xfff;
  _DAT_ram_e6091040 = 1;
  if (iVar2 == 0) {
    FUN_ram_00183bec(0xe60910e8,1,0,1);
  }
  FUN_ram_00183bec(0xe60910e8,0x1fe,1,~param_1 & 0xff);
  FUN_ram_00183bec(0xe60910e8,0x1fe,1,param_1 & 0xff);
  if (iVar2 == 0) {
    FUN_ram_00183bec(0xe60910e8,1,0,0);
  }
  FUN_ram_00183cd0(uVar1);
  return;
}


