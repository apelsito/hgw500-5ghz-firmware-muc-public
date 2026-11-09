/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00173130 */

void FUN_ram_00173130(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 < 2) {
    iVar4 = param_2 * 0x2f3;
    puVar5 = &DAT_ram_00300030 + param_2 * 0xfffcf;
    FUN_ram_001710d0(0x250,0xffffff,0,puVar5);
    FUN_ram_001710d0(0x254,0xffffff,0,puVar5);
    FUN_ram_001710d0(600,0x3fffff,0,puVar5);
    FUN_ram_001710d0(0x25c,0x3fffff,0,puVar5);
    FUN_ram_001710d0(0x250,0xc00000,0x16,param_2 * 3);
    FUN_ram_001710d0(0x224,0x800,0xb,param_2);
    FUN_ram_001710d0(0x254,0xc00000,0x16,param_2 * 3);
    FUN_ram_001710d0(0x224,0x800000,0x17,param_2);
    FUN_ram_001710d0(0x224,0x7ff,0,iVar4);
    FUN_ram_001710d0(0x224,0x7ff000,0xc,iVar4);
    FUN_ram_001710d0(0x228,0x7ff,0,iVar4);
    uVar1 = 0x228;
    uVar2 = 0x7ff000;
    uVar3 = 0xc;
    goto LAB_ram_00173300;
  }
  if (param_2 != 2) {
    return;
  }
  switch(param_1) {
  case 0:
    FUN_ram_001710d0(0x224,0x100,8,1);
    uVar1 = 0x224;
    break;
  case 1:
    FUN_ram_001710d0(0x224,0x100000,0x14,1);
    uVar1 = 0x224;
    goto LAB_ram_001732f4;
  case 2:
    FUN_ram_001710d0(0x228,0x100,8,1);
    uVar1 = 0x228;
    break;
  case 3:
    FUN_ram_001710d0(0x228,0x100000,0x14,1);
    uVar1 = 0x228;
LAB_ram_001732f4:
    uVar2 = 0x8000;
    uVar3 = 0xf;
    goto LAB_ram_001732fc;
  default:
    goto switchD_ram_0017326c_default;
  }
  uVar2 = 8;
  uVar3 = 3;
LAB_ram_001732fc:
  iVar4 = 1;
LAB_ram_00173300:
  FUN_ram_001710d0(uVar1,uVar2,uVar3,iVar4);
switchD_ram_0017326c_default:
  return;
}


