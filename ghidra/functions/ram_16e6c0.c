/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016e6c0 */

undefined4 FUN_ram_0016e6c0(undefined4 param_1,int param_2)

{
  if (param_2 < 0x24) {
    if (0x27 < param_2) goto LAB_ram_0016e6d4;
  }
  else {
    if (param_2 < 0x28) {
      return 0;
    }
LAB_ram_0016e6d4:
    if (param_2 < 0x2c) {
      return 1;
    }
  }
  if (param_2 < 0x2c) {
    if (0x2f < param_2) goto LAB_ram_0016e6f8;
  }
  else {
    if (param_2 < 0x30) {
      return 2;
    }
LAB_ram_0016e6f8:
    if (param_2 < 0x34) {
      return 3;
    }
  }
  if (param_2 < 0x34) {
    if (0x37 < param_2) goto LAB_ram_0016e71c;
  }
  else {
    if (param_2 < 0x38) {
      return 4;
    }
LAB_ram_0016e71c:
    if (param_2 < 0x3c) {
      return 5;
    }
  }
  if (param_2 < 0x3c) {
    if (0x3f < param_2) goto LAB_ram_0016e740;
  }
  else {
    if (param_2 < 0x40) {
      return 6;
    }
LAB_ram_0016e740:
    if (param_2 < 100) {
      return 7;
    }
  }
  if (param_2 < 100) {
    if (0x67 < param_2) goto LAB_ram_0016e764;
  }
  else {
    if (param_2 < 0x68) {
      return 8;
    }
LAB_ram_0016e764:
    if (param_2 < 0x6c) {
      return 9;
    }
  }
  if (param_2 < 0x6c) {
    if (0x6f < param_2) goto LAB_ram_0016e788;
  }
  else {
    if (param_2 < 0x70) {
      return 10;
    }
LAB_ram_0016e788:
    if (param_2 < 0x74) {
      return 0xb;
    }
  }
  if (param_2 < 0x74) {
    if (0x77 < param_2) goto LAB_ram_0016e7ac;
  }
  else {
    if (param_2 < 0x78) {
      return 0xc;
    }
LAB_ram_0016e7ac:
    if (param_2 < 0x7c) {
      return 0xd;
    }
  }
  if (param_2 < 0x7c) {
    if (0x7f < param_2) goto LAB_ram_0016e7d4;
  }
  else {
    if (param_2 < 0x80) {
      return 0xe;
    }
LAB_ram_0016e7d4:
    if (param_2 < 0x84) {
      return 0xf;
    }
  }
  if (param_2 < 0x84) {
    if (0x87 < param_2) goto LAB_ram_0016e7fc;
  }
  else {
    if (param_2 < 0x88) {
      return 0x10;
    }
LAB_ram_0016e7fc:
    if (param_2 < 0x8c) {
      return 0x11;
    }
  }
  if (param_2 < 0x8c) {
    if (0x94 < param_2) goto LAB_ram_0016e824;
  }
  else {
    if (param_2 < 0x95) {
      return 0x12;
    }
LAB_ram_0016e824:
    if (param_2 < 0x99) {
      return 0x13;
    }
  }
  if (param_2 < 0x99) {
    if (0x9c < param_2) goto LAB_ram_0016e84c;
  }
  else {
    if (param_2 < 0x9d) {
      return 0x14;
    }
LAB_ram_0016e84c:
    if (param_2 < 0xa1) {
      return 0x15;
    }
  }
  if (param_2 < 0xa1) {
    if (0xa4 < param_2) goto LAB_ram_0016e874;
  }
  else {
    if (param_2 < 0xa5) {
      return 0x16;
    }
LAB_ram_0016e874:
    if (param_2 < 0xb6) {
      return 0x17;
    }
  }
  if (param_2 < 0xb6) {
    if (param_2 < 0xba) goto LAB_ram_0016e8a8;
  }
  else if (param_2 < 0xba) {
    return 0x18;
  }
  if (param_2 < 0xbe) {
    return 0x19;
  }
LAB_ram_0016e8a8:
  if (param_2 < 0xbe) {
    if (param_2 < 0xc2) {
      return 0;
    }
  }
  else if (param_2 < 0xc2) {
    return 0x1a;
  }
  if (199 < param_2) {
    return 0;
  }
  return 0x1b;
}


