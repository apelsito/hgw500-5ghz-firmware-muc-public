/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00172e38 */

void FUN_ram_00172e38(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_2 + param_1 * 4) {
  case 0:
    FUN_ram_001710d0(0x300,0x1f,0,param_3);
    uVar1 = 0x300;
    break;
  case 1:
    FUN_ram_001710d0(0x304,0x1f,0,param_3);
    uVar1 = 0x304;
    break;
  case 2:
    FUN_ram_001710d0(0x308,0x1f,0,param_3);
    uVar1 = 0x308;
    break;
  case 3:
    FUN_ram_001710d0(0x30c,0x1f,0,param_3);
    uVar1 = 0x30c;
    break;
  case 4:
    FUN_ram_001710d0(0x340,0x1f,0,param_3);
    uVar1 = 0x340;
    break;
  case 5:
    FUN_ram_001710d0(0x344,0x1f,0,param_3);
    uVar1 = 0x344;
    break;
  case 6:
    FUN_ram_001710d0(0x348,0x1f,0,param_3);
    uVar1 = 0x348;
    break;
  case 7:
    FUN_ram_001710d0(0x34c,0x1f,0,param_3);
    uVar1 = 0x34c;
    break;
  case 8:
    FUN_ram_001710d0(0x380,0x1f,0,param_3);
    uVar1 = 0x380;
    break;
  case 9:
    FUN_ram_001710d0(900,0x1f,0,param_3);
    uVar1 = 900;
    break;
  case 10:
    FUN_ram_001710d0(0x388,0x1f,0,param_3);
    uVar1 = 0x388;
    break;
  case 0xb:
    FUN_ram_001710d0(0x38c,0x1f,0,param_3);
    uVar1 = 0x38c;
    break;
  case 0xc:
    FUN_ram_001710d0(0x3c0,0x1f,0,param_3);
    uVar1 = 0x3c0;
    break;
  case 0xd:
    FUN_ram_001710d0(0x3c4,0x1f,0,param_3);
    uVar1 = 0x3c4;
    break;
  case 0xe:
    FUN_ram_001710d0(0x3c8,0x1f,0,param_3);
    uVar1 = 0x3c8;
    break;
  case 0xf:
    FUN_ram_001710d0(0x3cc,0x1f,0,param_3);
    uVar1 = 0x3cc;
    break;
  default:
    goto switchD_ram_00172e58_default;
  }
  FUN_ram_001710d0(uVar1,0x1f000,0xc,param_4);
switchD_ram_00172e58_default:
  return;
}


