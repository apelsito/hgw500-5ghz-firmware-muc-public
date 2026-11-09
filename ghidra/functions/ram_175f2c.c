/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00175f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00175f2c(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_ram_001710d0(0x2a8,0xc0,6,DAT_ram_0021e044);
  FUN_ram_001710d0(0x2a8,0xc0000,0x12,DAT_ram_0021e048);
  FUN_ram_001710d0(0x2ac,0xc0,6,DAT_ram_0021e04c);
  FUN_ram_001710d0(0x2ac,0xc0000,0x12,DAT_ram_0021e050);
  FUN_ram_001710d0(0x29c,1,0,0);
  switch(param_1) {
  case 0:
    uVar1 = 0x250;
    break;
  case 1:
    uVar1 = 0x254;
    break;
  case 2:
    uVar1 = 600;
    break;
  case 3:
    uVar1 = 0x25c;
    break;
  default:
    goto switchD_ram_00175faa_default;
  }
  FUN_ram_001710d0(uVar1,0x300000,0x14,3);
switchD_ram_00175faa_default:
  _DAT_ram_e6090488 = DAT_ram_0018c3a8;
  _DAT_ram_e6090490 = 0;
  _DAT_ram_e609104c = 0;
  _DAT_ram_e6091058 = 0;
  _DAT_ram_e6091048 = 0;
  _DAT_ram_e6090500 = 0;
  FUN_ram_00183a40();
  return;
}


