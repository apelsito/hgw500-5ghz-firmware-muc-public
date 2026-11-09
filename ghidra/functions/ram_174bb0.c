/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00174bb0 */

void FUN_ram_00174bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int aiStack_44 [4];
  int aiStack_34 [4];
  
  iVar7 = 0;
  iVar6 = 0x800000;
  iVar4 = 0x10;
  iVar5 = 0;
  iVar8 = param_1;
  do {
    switch(iVar8) {
    case 0:
      iVar8 = 0;
      uVar2 = 0xf00;
      uVar3 = 8;
      break;
    case 1:
      iVar8 = 1;
      uVar2 = 0xf000;
      uVar3 = 0xc;
      break;
    case 2:
      iVar8 = 2;
      uVar2 = 0xf0000;
      uVar3 = 0x10;
      break;
    case 3:
      iVar8 = 3;
      uVar2 = 0xf00000;
      uVar3 = 0x14;
      break;
    default:
      goto switchD_ram_00174c04_default;
    }
    FUN_ram_001710d0(0x2d0,uVar2,uVar3,iVar7);
switchD_ram_00174c04_default:
    FUN_ram_001831a8(aiStack_44,aiStack_34,0xb);
    iVar1 = aiStack_44[param_1] * aiStack_44[param_1] + aiStack_34[param_1] * aiStack_34[param_1];
    if (iVar1 < iVar6) {
      iVar5 = iVar7;
      iVar6 = iVar1;
    }
    iVar4 = iVar4 + -1;
    iVar7 = iVar7 + 1;
  } while (iVar4 != 0);
  switch(iVar8) {
  case 0:
    uVar2 = 0xf00;
    uVar3 = 8;
    break;
  case 1:
    uVar2 = 0xf000;
    uVar3 = 0xc;
    break;
  case 2:
    uVar2 = 0xf0000;
    uVar3 = 0x10;
    break;
  case 3:
    uVar2 = 0xf00000;
    uVar3 = 0x14;
    break;
  default:
    goto switchD_ram_00174cac_default;
  }
  FUN_ram_001710d0(0x2d0,uVar2,uVar3,iVar5);
switchD_ram_00174cac_default:
  return;
}


