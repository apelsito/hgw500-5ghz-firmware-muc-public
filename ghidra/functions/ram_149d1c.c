/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00149d1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00149d1c(int param_1)

{
  uint uVar1;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  FUN_ram_00149c2c(*(undefined4 *)(uVar1 + 0x84));
  FUN_ram_0014f4e8(param_1,&LAB_ram_0014f4bc,0);
  FUN_ram_0039fe00(&DAT_ram_00192bb4,&DAT_ram_0018cd50,0x3c);
  DAT_ram_8002c25c = 0;
  DAT_ram_8002c260 = 0;
  DAT_ram_8002c264 = 0;
  DAT_ram_8002c268 = 0;
  FUN_ram_000eea80(&DAT_ram_8002c26c,0,0x600);
  *(undefined1 *)(param_1 + 0x402d) = 2;
  return;
}


