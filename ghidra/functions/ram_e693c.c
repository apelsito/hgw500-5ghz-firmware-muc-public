/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e693c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e693c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_000e657c();
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar3 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 0x540) {
switchD_ram_000e69e4_caseD_500:
    FUN_ram_000e6854(0);
switchD_ram_000e69e4_caseD_506:
    FUN_ram_000e6854(1);
    uVar2 = 2;
LAB_ram_000e6a18:
    FUN_ram_000e6854(uVar2);
  }
  else {
    if (iVar1 < 0x541) {
      if (iVar1 != 0x532) {
        switch(iVar1) {
        case 0x500:
        case 0x504:
          goto switchD_ram_000e69e4_caseD_500;
        case 0x501:
          break;
        default:
          goto switchD_ram_000e69e4_caseD_502;
        case 0x503:
        case 0x505:
switchD_ram_000e69e4_caseD_503:
          uVar2 = 1;
          goto LAB_ram_000e6a18;
        case 0x506:
          goto switchD_ram_000e69e4_caseD_506;
        }
      }
switchD_ram_000e69e4_caseD_501:
      uVar2 = 0;
      goto LAB_ram_000e6a18;
    }
    if (iVar1 == 0x580) goto switchD_ram_000e69e4_caseD_500;
    if (0x580 < iVar1) {
      if (iVar1 != 0x5b2) {
        if (iVar1 == 0x5f0) goto switchD_ram_000e69e4_caseD_500;
        if (iVar1 != 0x5f2) goto switchD_ram_000e69e4_caseD_502;
      }
      goto switchD_ram_000e69e4_caseD_501;
    }
    if (iVar1 == 0x543) goto switchD_ram_000e69e4_caseD_503;
    if (iVar1 == 0x544) goto switchD_ram_000e69e4_caseD_500;
    if (iVar1 == 0x572) goto switchD_ram_000e69e4_caseD_501;
  }
switchD_ram_000e69e4_caseD_502:
  if (iVar1 == 0x540) {
switchD_ram_000e6a80_caseD_505:
    FUN_ram_000e6854(6);
    if (iVar1 < 0x540) goto LAB_ram_000e6ad0;
    if (iVar1 == 0x540) goto switchD_ram_000e6ae8_caseD_500;
LAB_ram_000e6b44:
    if (iVar1 == 0x580) goto switchD_ram_000e6ae8_caseD_500;
    if (0x580 < iVar1) {
      if ((iVar1 != 0x5b2 && iVar1 != 0x5f0) && iVar1 != 0x5f2) goto switchD_ram_000e6ae8_caseD_502;
      goto switchD_ram_000e6ae8_caseD_500;
    }
    if (iVar1 != 0x543 && iVar1 != 0x544) {
      if (iVar1 != 0x572) goto switchD_ram_000e6ae8_caseD_502;
      goto switchD_ram_000e6ae8_caseD_500;
    }
  }
  else {
    if (iVar1 < 0x541) {
      if (iVar1 != 0x532) {
        switch(iVar1) {
        case 0x500:
        case 0x501:
        case 0x503:
        case 0x504:
        case 0x506:
          break;
        default:
          goto switchD_ram_000e6a80_caseD_502;
        case 0x505:
          goto switchD_ram_000e6a80_caseD_505;
        }
      }
      uVar2 = 8;
LAB_ram_000e6a64:
      FUN_ram_000e6854(uVar2);
    }
    else {
      if (iVar1 == 0x580) {
LAB_ram_000e6b10:
        uVar2 = 5;
        goto LAB_ram_000e6a64;
      }
      if (iVar1 < 0x581) {
        if ((iVar1 == 0x543 || iVar1 == 0x544) || iVar1 == 0x572)
        goto switchD_ram_000e6a80_caseD_505;
      }
      else {
        if (iVar1 == 0x5b2) goto LAB_ram_000e6b10;
        if ((iVar1 == 0x5f0) || (iVar1 == 0x5f2)) {
          uVar2 = 7;
          goto LAB_ram_000e6a64;
        }
      }
    }
switchD_ram_000e6a80_caseD_502:
    if (iVar1 == 0x540) goto switchD_ram_000e6ae8_caseD_500;
    if (0x540 < iVar1) goto LAB_ram_000e6b44;
LAB_ram_000e6ad0:
    if (iVar1 != 0x532) {
      switch(iVar1) {
      case 0x500:
        break;
      case 0x501:
        goto switchD_ram_000e6ae8_caseD_501;
      default:
        goto switchD_ram_000e6ae8_caseD_502;
      case 0x503:
      case 0x504:
      case 0x505:
      case 0x506:
        goto switchD_ram_000e6ae8_caseD_503;
      }
    }
switchD_ram_000e6ae8_caseD_500:
    FUN_ram_000e6854(3);
  }
switchD_ram_000e6ae8_caseD_503:
  FUN_ram_000e6854(0xd);
  if (*(int *)(uVar3 + 0x4c) == 0) {
    FUN_ram_000e6854(0x11);
  }
switchD_ram_000e6ae8_caseD_501:
  FUN_ram_000e6854(4);
  FUN_ram_000e6854(9);
  FUN_ram_000e6854(10);
  FUN_ram_000e6854(0xb);
  FUN_ram_000e6854(0xc);
  FUN_ram_000e6854(0xe);
  FUN_ram_000e6854(0xf);
  FUN_ram_000e6854(0x10);
  FUN_ram_000e6854(0x16);
  FUN_ram_000e6854(0x17);
  FUN_ram_000e6854(0x12);
  FUN_ram_000e6854(0x13);
  FUN_ram_000e6854(0x14);
  FUN_ram_000e6854(0x15);
  FUN_ram_000e6854(0x18);
switchD_ram_000e6ae8_caseD_502:
  FUN_ram_000e68a4();
  return;
}


