/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00174d2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00174d2c(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_ram_0018291c();
  _DAT_ram_e6090500 = 1 << (param_1 & 0x1f);
  _DAT_ram_e6090490 = 3;
  DAT_ram_0018c3a8 = _DAT_ram_e6090488;
  _DAT_ram_e6090488 = 0x1000;
  _DAT_ram_e6091014 = param_1;
  _DAT_ram_e6091018 = param_1;
  FUN_ram_00183358(0);
  FUN_ram_001710d0(0x2d0,0xf0,4,0xb);
  FUN_ram_001710d0(0x2d0,0xf,0,0xf);
  FUN_ram_001710d0(0x2cc,0x100000,0x14,1);
  FUN_ram_001710d0(0x29c,1,0,1);
  switch(param_1) {
  case 0:
    uVar1 = 0x250;
    param_1 = 0;
    break;
  case 1:
    uVar1 = 0x254;
    param_1 = 1;
    break;
  case 2:
    param_1 = 2;
    uVar1 = 600;
    break;
  case 3:
    uVar1 = 0x25c;
    param_1 = 3;
    break;
  default:
    goto switchD_ram_00174e08_default;
  }
  FUN_ram_001710d0(uVar1,0x300000,0x14,0);
switchD_ram_00174e08_default:
  FUN_ram_00174bb0(param_1);
  _DAT_ram_e6091054 = 1;
  _DAT_ram_e6091028 = 0x800;
  _DAT_ram_e6091030 = 0;
  _DAT_ram_e6091020 = 0x1e;
  FUN_ram_001733a0(0,1,0);
  _DAT_ram_e6091034 = 0;
  _DAT_ram_e609102c = 0xb;
  DAT_ram_0021e044 = FUN_ram_001711e0(0x2a8,0xc0,6);
  DAT_ram_0021e048 = FUN_ram_001711e0(0x2a8,0xc0000,0x12);
  DAT_ram_0021e04c = FUN_ram_001711e0(0x2ac,0xc0,6);
  DAT_ram_0021e050 = FUN_ram_001711e0(0x2ac,0xc0000,0x12);
  iVar3 = 3;
  iVar2 = 1;
  do {
    FUN_ram_001710d0(0x2a8,0xc0,6,iVar2);
    FUN_ram_001710d0(0x2a8,0xc0000,0x12,iVar2);
    FUN_ram_001710d0(0x2ac,0xc0,6,iVar2);
    FUN_ram_001710d0(0x2ac,0xc0000,0x12,iVar2);
    iVar4 = 0;
    iVar5 = 0;
    do {
      while (param_1 != 0) {
        if (param_1 == 1) {
          param_1 = 1;
          _DAT_ram_e6091150 = 0;
          _DAT_ram_e6091160 = 0;
LAB_ram_00174fa4:
          _DAT_ram_e6091000 = 4;
          FUN_ram_00183120();
        }
        else {
          if (param_1 == 2) {
            _DAT_ram_e6091154 = 0;
            _DAT_ram_e6091164 = 0;
            param_1 = 2;
            goto LAB_ram_00174fa4;
          }
          if (param_1 == 3) {
            _DAT_ram_e6091158 = 0;
            _DAT_ram_e6091168 = 0;
            param_1 = 3;
            goto LAB_ram_00174fa4;
          }
          _DAT_ram_e6091000 = 4;
          FUN_ram_00183120();
        }
        if (param_1 == 1) {
          param_1 = 1;
          if (_DAT_ram_e6091160 < 0x7fff) {
            iVar4 = iVar4 + _DAT_ram_e6091160;
          }
        }
        else if (param_1 == 2) {
          param_1 = 2;
          if (_DAT_ram_e6091164 < 0x7fff) {
            iVar4 = iVar4 + _DAT_ram_e6091164;
          }
        }
        else if ((param_1 == 3) && (param_1 = 3, _DAT_ram_e6091168 < 0x7fff)) {
          iVar4 = iVar4 + _DAT_ram_e6091168;
        }
        iVar5 = iVar5 + 1;
        if (7 < iVar5) goto LAB_ram_00175058;
      }
      _DAT_ram_e609114c = 0;
      _DAT_ram_e609115c = 0;
      _DAT_ram_e6091000 = 4;
      FUN_ram_00183120();
      if (_DAT_ram_e609115c < 0x7fff) {
        iVar4 = iVar4 + _DAT_ram_e609115c;
      }
      param_1 = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
LAB_ram_00175058:
    iVar4 = iVar4 >> 3;
    if (0xff < iVar4) break;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar3 != 0);
  if (iVar4 < 1) {
    DAT_ram_0018c3ac = 3;
  }
  else {
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      iVar4 = iVar4 >> 1;
      iVar2 = iVar3 + 1;
    } while (0 < iVar4);
    DAT_ram_0018c3ac = iVar3 + 4;
    if (0xe < DAT_ram_0018c3ac) {
      DAT_ram_0018c3ac = 0xf;
    }
  }
  switch(param_1) {
  case 0:
    _DAT_ram_e609115c = 0x4000;
    break;
  case 1:
    _DAT_ram_e6091160 = 0x4000;
    break;
  case 2:
    _DAT_ram_e6091164 = 0x4000;
    break;
  case 3:
    _DAT_ram_e6091168 = 0x4000;
  }
  return;
}


