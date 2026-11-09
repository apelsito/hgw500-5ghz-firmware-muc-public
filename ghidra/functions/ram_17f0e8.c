/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f0e8 */

int FUN_ram_0017f0e8(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_ram_8002c8bc == '\x03') {
    return 0;
  }
  uVar1 = 0;
LAB_ram_0017f10c:
  do {
    if ((param_1 & 1) == 0) {
      puVar2 = (undefined *)0x3ff3f3;
    }
    else {
      puVar2 = &DAT_ram_00300030;
    }
    param_1 = (int)param_1 >> 1;
    iVar4 = 2;
    switch(uVar1) {
    case 0:
      FUN_ram_001710d0(0x250,0xffffff,0,puVar2);
      FUN_ram_00183bec(&DAT_ram_e609048c,1,0,1);
      uVar3 = 0;
      iVar4 = 0;
      break;
    case 1:
      FUN_ram_001710d0(0x254,0xffffff,0,puVar2);
      FUN_ram_00183bec(&DAT_ram_e609048c,1,0,0);
      uVar3 = 1;
      iVar4 = 1;
      break;
    case 2:
      FUN_ram_001710d0(600,0x3fffff,0,puVar2);
      FUN_ram_00183bec(&DAT_ram_e609048c,1,0,0);
      FUN_ram_00183bec(&DAT_ram_e609048c,2,1,0);
      uVar3 = 1;
      goto LAB_ram_0017f1a0;
    case 3:
      iVar4 = 3;
      FUN_ram_001710d0(0x25c,0x3fffff,0,puVar2);
      FUN_ram_00183bec(&DAT_ram_e609048c,1,0,0);
      FUN_ram_00183bec(&DAT_ram_e609048c,2,1,0);
      FUN_ram_00183bec(&DAT_ram_e609048c,0x10,4,0);
      uVar3 = 1;
      goto LAB_ram_0017f2a8;
    default:
      goto switchD_ram_0017f13c_default;
    }
    FUN_ram_00183bec(&DAT_ram_e609048c,2,1,uVar3);
    uVar3 = 0;
LAB_ram_0017f1a0:
    FUN_ram_00183bec(&DAT_ram_e609048c,0x10,4,uVar3);
    uVar3 = 0;
LAB_ram_0017f2a8:
    FUN_ram_00183bec(&DAT_ram_e609048c,0x20,5,uVar3);
    uVar1 = iVar4 + 1;
  } while (uVar1 < 4);
  goto LAB_ram_0017f2bc;
switchD_ram_0017f13c_default:
  uVar1 = uVar1 + 1;
  if (3 < (int)uVar1) {
LAB_ram_0017f2bc:
    return param_1 * 2;
  }
  goto LAB_ram_0017f10c;
}


