/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e657c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_000e657c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar5 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar5 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if (uVar5 == 0) {
    iVar2 = 0;
    if (0x7fffffff < _DAT_ram_e00000bc) goto LAB_ram_000e6600;
LAB_ram_000e6610:
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar5 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar5 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar5 = 0;
      }
    }
  }
  else {
    iVar2 = *(int *)(uVar5 + 0x38);
    if (_DAT_ram_e00000bc < 0x80000000) goto LAB_ram_000e6610;
LAB_ram_000e6600:
    if (0x8007ffff < _DAT_ram_e00000bc) goto LAB_ram_000e6610;
    uVar5 = _DAT_ram_e00000bc + 0xe0000000;
  }
  uVar4 = _DAT_ram_e000016c & 7;
  if (uVar4 == 2) {
    uVar4 = (_DAT_ram_e000000c >> 0x1b & 3) << 4 | 2;
  }
  uVar4 = uVar4 | 0x500;
  if (iVar2 < 4) {
    uVar1 = 2;
LAB_ram_000e6680:
    FUN_ram_000f7c10(15000,uVar1,iVar2,&LAB_ram_000eacc8,2);
    return 0;
  }
  if (uVar5 == 0) {
    uVar1 = 5;
    iVar2 = 0;
    goto LAB_ram_000e6680;
  }
  uVar3 = *(uint *)(uVar5 + 0x3c);
  if ((uVar3 == 0xffffffff) || (uVar4 == uVar3)) {
    if (uVar4 == 0x540) goto switchD_ram_000e66c4_caseD_500;
    if (uVar4 < 0x541) {
      if (uVar4 == 0x532) goto switchD_ram_000e66c4_caseD_500;
      switch(uVar4) {
      case 0x500:
      case 0x501:
      case 0x503:
      case 0x504:
      case 0x505:
      case 0x506:
        goto switchD_ram_000e66c4_caseD_500;
      }
    }
    else {
      if (uVar4 == 0x580) goto switchD_ram_000e66c4_caseD_500;
      if (uVar4 < 0x581) {
        if ((uVar4 == 0x543 || uVar4 == 0x544) || uVar4 == 0x572)
        goto switchD_ram_000e66c4_caseD_500;
      }
      else if ((uVar4 == 0x5b2 || uVar4 == 0x5f0) || uVar4 == 0x5f2)
      goto switchD_ram_000e66c4_caseD_500;
    }
    uVar1 = 4;
    uVar3 = uVar4;
  }
  else {
    if (uVar4 < 0x540) {
      if (uVar4 == 0x532) {
        if (uVar3 != 0x572) {
          if ((int)uVar3 < 0x573) {
            if (uVar3 != 0x500) goto switchD_ram_000e670e_caseD_500;
          }
          else if (uVar3 != 0x5b2 && uVar3 != 0x5f2) {
            if ((int)uVar3 < 0x540) goto LAB_ram_000e67b8;
            if (uVar3 != 0x540) goto LAB_ram_000e67f0;
          }
        }
      }
      else {
        switch(uVar4) {
        case 0x500:
switchD_ram_000e670e_caseD_500:
          if (uVar3 != 0x540) {
            if ((int)uVar3 < 0x541) {
LAB_ram_000e67b8:
              if (uVar3 != 0x504) goto switchD_ram_000e670e_caseD_504;
            }
            else {
LAB_ram_000e67f0:
              if (uVar3 != 0x580 && uVar3 != 0x5f0) {
                if ((int)uVar3 < 0x505) goto LAB_ram_000e6798;
                if (uVar3 != 0x505) goto LAB_ram_000e680c;
              }
            }
          }
          break;
        default:
          goto switchD_ram_000e670e_caseD_501;
        case 0x503:
        case 0x505:
          goto switchD_ram_000e670e_caseD_503;
        case 0x504:
switchD_ram_000e670e_caseD_504:
          if (uVar3 != 0x505) {
            if ((int)uVar3 < 0x506) {
LAB_ram_000e6798:
              if (uVar3 != 0x501 && uVar3 != 0x503) {
switchD_ram_000e670e_caseD_503:
                if (uVar3 != 0x543) goto switchD_ram_000e670e_caseD_501;
              }
            }
            else {
LAB_ram_000e680c:
              if (uVar3 != 0x506 && uVar3 != 0x544) goto switchD_ram_000e670e_caseD_503;
            }
          }
        }
      }
      uVar4 = uVar3 & 0xffff;
      goto switchD_ram_000e66c4_caseD_500;
    }
switchD_ram_000e670e_caseD_501:
    uVar1 = 3;
  }
  FUN_ram_000f7c10(15000,uVar1,uVar3,&LAB_ram_000eacc8,2);
switchD_ram_000e66c4_caseD_500:
  *(uint *)(uVar5 + 0x3c) = uVar4;
  return uVar4;
}


