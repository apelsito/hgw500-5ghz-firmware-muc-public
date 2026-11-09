/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00176028 */

void FUN_ram_00176028(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  cVar1 = (char)param_1;
  iVar7 = (int)(char)('\x01' - cVar1);
  iVar5 = (int)cVar1;
  iVar4 = (int)(char)(cVar1 * '\x03');
  if (param_1 == 0) {
    puVar6 = &DAT_ram_00300030;
  }
  else {
    puVar6 = (undefined *)0x3ff3f3;
  }
  FUN_ram_001710d0(0x240,0x3000,0xc,iVar4);
  FUN_ram_001710d0(0x21c,0x40,6,0);
  FUN_ram_001710d0(0x244,0x3000,0xc,iVar4);
  FUN_ram_001710d0(0x21c,0x40000,0x12,0);
  FUN_ram_001710d0(0x248,0x3000,0xc,iVar4);
  FUN_ram_001710d0(0x220,0x40,6,0);
  FUN_ram_001710d0(0x24c,0x3000,0xc,iVar4);
  FUN_ram_001710d0(0x220,0x40000,0x12,0);
  switch(param_2) {
  case 0:
    FUN_ram_001710d0(0x2d4,1,0,iVar5);
    FUN_ram_001710d0(0x2d4,6,1,0);
    FUN_ram_001710d0(0x2d4,8,3,iVar5);
    FUN_ram_001710d0(0x2d4,0x20,5,iVar7);
    uVar2 = 0x254;
    break;
  case 1:
    FUN_ram_001710d0(0x2d4,0x40,6,iVar5);
    FUN_ram_001710d0(0x2d4,0x180,7,0);
    FUN_ram_001710d0(0x2d4,0x200,9,iVar5);
    FUN_ram_001710d0(0x2d4,0x800,0xb,iVar7);
    uVar2 = 0x250;
    break;
  case 2:
    FUN_ram_001710d0(0x2d4,0x1000,0xc,iVar5);
    FUN_ram_001710d0(0x2d4,0x6000,0xd,0);
    FUN_ram_001710d0(0x2d4,0x8000,0xf,iVar5);
    FUN_ram_001710d0(0x2d4,0x20000,0x11,iVar7);
    FUN_ram_001710d0(0x250,0xffffff,0,puVar6);
    uVar2 = 0x254;
    uVar3 = 0xffffff;
    goto LAB_ram_00176254;
  case 3:
    FUN_ram_001710d0(0x2d4,0x40000,0x12,iVar5);
    FUN_ram_001710d0(0x2d4,0x180000,0x13,0);
    FUN_ram_001710d0(0x2d4,0x200000,0x15,iVar5);
    FUN_ram_001710d0(0x2d4,0x800000,0x17,iVar7);
    FUN_ram_001710d0(0x250,0xffffff,0,puVar6);
    FUN_ram_001710d0(0x254,0xffffff,0,puVar6);
    uVar2 = 600;
    goto LAB_ram_001762e8;
  default:
    goto switchD_ram_0017610c_default;
  }
  FUN_ram_001710d0(uVar2,0xffffff,0,puVar6);
  uVar3 = 0x3fffff;
  uVar2 = 600;
LAB_ram_00176254:
  FUN_ram_001710d0(uVar2,uVar3,0,puVar6);
  uVar2 = 0x25c;
LAB_ram_001762e8:
  FUN_ram_001710d0(uVar2,0x3fffff,0,puVar6);
switchD_ram_0017610c_default:
  return;
}


