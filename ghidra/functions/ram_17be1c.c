/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017be1c */

void FUN_ram_0017be1c(void)

{
  uint uVar1;
  
  if (-1 < DAT_ram_0018c2c8) {
    FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(uint)DAT_ram_0018c360 << 4,0x10,&DAT_ram_0020fe38);
    uVar1 = (uint)DAT_ram_0020fe38;
    if ((((uVar1 != 0) && (DAT_ram_0020fe3c != 0)) && (DAT_ram_0020fe40 != 0)) &&
       (DAT_ram_0020fe44 != 0)) {
      FUN_ram_001710d0(700,0x7f,0,uVar1 & 0x7f);
      FUN_ram_001710d0(700,0x3f80,7,(int)uVar1 >> 7 & 0x7f);
      uVar1 = (uint)DAT_ram_0020fe3c;
      FUN_ram_001710d0(0x2c0,0x7f,0,uVar1 & 0x7f);
      FUN_ram_001710d0(0x2c0,0x3f80,7,(int)uVar1 >> 7 & 0x7f);
      uVar1 = (uint)DAT_ram_0020fe40;
      FUN_ram_001710d0(0x2c4,0x7f,0,uVar1 & 0x7f);
      FUN_ram_001710d0(0x2c4,0x3f80,7,(int)uVar1 >> 7 & 0x7f);
      uVar1 = (uint)DAT_ram_0020fe44;
      FUN_ram_001710d0(0x2c8,0x7f,0,uVar1 & 0x7f);
      FUN_ram_001710d0(0x2c8,0x3f80,7,(int)uVar1 >> 7 & 0x7f);
    }
  }
  return;
}


