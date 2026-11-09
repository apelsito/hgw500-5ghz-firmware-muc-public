/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00180128 */

int FUN_ram_00180128(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_ram_8002c8bc == '\x03') {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    uVar4 = param_1;
    do {
      uVar3 = -((uVar4 ^ 1) & 1) & 0x3ffff;
      switch(iVar1) {
      case 0:
        FUN_ram_001710d0(0x240,0xfffff,0,uVar3);
        uVar2 = 0x240;
        iVar1 = 0;
        break;
      case 1:
        iVar1 = 1;
        FUN_ram_001710d0(0x244,0x3ffff,0,uVar3);
        uVar2 = 0x244;
        break;
      case 2:
        iVar1 = 2;
        FUN_ram_001710d0(0x248,0x3ffff,0,uVar3);
        uVar2 = 0x248;
        break;
      case 3:
        FUN_ram_001710d0(0x24c,0x3ffff,0,uVar3);
        uVar2 = 0x24c;
        iVar1 = 3;
        break;
      default:
        goto switchD_ram_00180164_default;
      }
      FUN_ram_001710d0(uVar2,0xc000,0xe,3);
switchD_ram_00180164_default:
      iVar1 = iVar1 + 1;
      uVar4 = (int)uVar4 >> 1;
    } while (iVar1 < 4);
    iVar1 = param_1 * 2;
  }
  return iVar1;
}


