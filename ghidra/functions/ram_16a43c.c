/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016a43c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0016a43c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  code *local_4c;
  code *pcStack_48;
  code *pcStack_44;
  code *pcStack_3c;
  code *local_38;
  
  iVar11 = param_1 * 0x1c;
  FUN_ram_000ee260(s______getting_cal_files_info_into_ram_001c8ce0,param_1);
  DAT_ram_0018c2e0 = 3;
  DAT_ram_0018c2e4 = 3;
  DAT_ram_0018c2e8 = 3;
  DAT_ram_0018c318 = 6;
  DAT_ram_0018c2f4 = 1;
  uVar7 = _DAT_ram_e0000014 & 0xff;
  if (uVar7 == 0x43) {
LAB_ram_0016a4e4:
    DAT_ram_0018c31c = 7;
    DAT_ram_0018c31e = 1;
    DAT_ram_0018c31f = 8;
    DAT_ram_0018c2ec = 0x1c0;
  }
  else if (uVar7 == 0x44) {
    DAT_ram_0018c31c = 7;
    DAT_ram_0018c31e = 7;
    DAT_ram_0018c31f = 6;
    DAT_ram_0018c2ec = 0x1c0;
  }
  else {
    if (uVar7 != 0x50) goto LAB_ram_0016a4e4;
    DAT_ram_0018c31c = 0xb;
    DAT_ram_0018c31e = 0xb;
    DAT_ram_0018c31f = 8;
    DAT_ram_0018c2ec = 0x2c0;
  }
  if (param_1 == 0) {
    DAT_ram_0018c2e0 = 1;
    DAT_ram_0018c2e4 = 1;
    DAT_ram_0018c318 = 1;
    DAT_ram_0018c2f4 = (int)(((uint)(DAT_ram_0018c30c >> 1) >> 0x1e) + DAT_ram_0018c30c) >> 2;
    DAT_ram_0018c2e8 = 1;
  }
  DAT_ram_0018c31d = 8;
  DAT_ram_0018c2f0 = param_1;
  FUN_ram_0039fe00(&DAT_ram_00192e3c,&DAT_ram_00193668,1000);
  local_4c = FUN_ram_000f3c18;
  pcStack_48 = FUN_ram_000f3ce8;
  pcStack_44 = FUN_ram_000f3cf0;
  pcStack_3c = FUN_ram_000f3cf8;
  iVar12 = param_1 * 0x10;
  local_38 = FUN_ram_0039fe00;
  iVar3 = FUN_ram_000f3c18(*(undefined4 *)(&DAT_ram_00193bc0 + iVar12),0);
  iVar4 = FUN_ram_000f3c18(*(undefined4 *)(&DAT_ram_00193bc4 + iVar12),0);
  FUN_ram_000f3cf8(iVar3);
  FUN_ram_000f3cf8(iVar4);
  iVar2 = param_1 * 2;
  if (iVar3 < 0) {
    FUN_ram_000eea80(DAT_ram_0018c2f0 * 0x2a6 + 0x212bf8,0,0x2a6);
    FUN_ram_0016a1a8(*(undefined4 *)(&DAT_ram_00193bc0 + iVar12),(&DAT_ram_0018c320)[iVar2]);
    *(undefined4 *)(&DAT_ram_00214388 + iVar11) = 0;
    iVar13 = 0;
    if (-1 < iVar4) {
      iVar13 = 0;
LAB_ram_0016a694:
      FUN_ram_00167ac8(*(undefined4 *)(&DAT_ram_00193bc4 + iVar12),(&DAT_ram_0018c321)[iVar2]);
      iVar5 = FUN_ram_00167b20(*(undefined4 *)(&DAT_ram_00193bc4 + iVar12));
      *(undefined4 *)(&DAT_ram_00214390 + iVar11) = 1;
      goto LAB_ram_0016a6ac;
    }
  }
  else {
    FUN_ram_00167ac8(*(undefined4 *)(&DAT_ram_00193bc0 + iVar12),(&DAT_ram_0018c320)[iVar2]);
    iVar13 = FUN_ram_00167b20(*(undefined4 *)(&DAT_ram_00193bc0 + iVar12));
    *(undefined4 *)(&DAT_ram_00214388 + iVar11) = 1;
    if (-1 < iVar4) goto LAB_ram_0016a694;
  }
  FUN_ram_000eea80(DAT_ram_0018c2f0 * 0x66 + 0x213144,0,0x66);
  iVar5 = 0;
  FUN_ram_0016a1a8(*(undefined4 *)(&DAT_ram_00193bc4 + iVar12),(&DAT_ram_0018c321)[iVar2]);
  *(undefined4 *)(&DAT_ram_00214390 + iVar11) = 0;
LAB_ram_0016a6ac:
  FUN_ram_000f4ba8(&local_4c);
  DAT_ram_0018c35c = 0xff;
  DAT_ram_002105f8 = 0x13;
  DAT_ram_00210474 = 1;
  uVar6 = FUN_ram_000f4c5c(*(undefined4 *)(&DAT_ram_00193bc0 + iVar12),(&DAT_ram_0018c320)[iVar2]);
  param_1 = param_1 * 8;
  uVar1 = (&DAT_ram_0018c321)[iVar2];
  *(undefined4 *)(&DAT_ram_00213280 + param_1) = uVar6;
  uVar6 = FUN_ram_000f4c5c(*(undefined4 *)(&DAT_ram_00193bc4 + iVar12),uVar1);
  *(undefined4 *)(&DAT_ram_00213284 + param_1) = uVar6;
  *(undefined4 *)(&DAT_ram_00214380 + iVar11) = 0;
  *(undefined4 *)(&DAT_ram_00214384 + iVar11) = 0;
  (&DAT_ram_00214398)[iVar11] = 3;
  if (iVar3 < 0 || iVar13 < 10) {
    FUN_ram_000f4e90(*(undefined4 *)(&DAT_ram_00213280 + param_1),0,0xe2,
                     DAT_ram_0018c2f0 * 0x2a6 + 0x212bf8);
    FUN_ram_000f4e90(*(undefined4 *)(&DAT_ram_00213280 + param_1),1,0xe2,
                     &DAT_ram_00212cda + DAT_ram_0018c2f0 * 0x2a6);
    FUN_ram_000f4e90(*(undefined4 *)(&DAT_ram_00213280 + param_1),2,0xe2,
                     &DAT_ram_00212dbc + DAT_ram_0018c2f0 * 0x2a6);
    uVar7 = DAT_ram_0018c2e0 * 0x240;
    if (((int)DAT_ram_0018c2f4 < 1) || (0x3e < uVar7)) {
      if (DAT_ram_0018c2f4 == 0) {
        uVar8 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar8 = uVar7;
        if ((int)uVar7 < 0) {
          uVar8 = ~uVar7;
        }
        iVar11 = LZCOUNT(uVar8) + -1;
        if ((int)uVar7 < 0) {
          iVar11 = -1;
        }
        uVar8 = DAT_ram_0018c2f4;
        if ((int)DAT_ram_0018c2f4 < 0) {
          uVar8 = ~DAT_ram_0018c2f4;
        }
        iVar12 = LZCOUNT(uVar8) + -1;
        if ((int)DAT_ram_0018c2f4 < 0) {
          iVar12 = -1;
        }
        uVar8 = iVar12 - iVar11;
        bVar15 = (int)uVar8 < 0;
        if (bVar15) {
          uVar8 = 0;
        }
        uVar14 = uVar8 + 1;
        uVar9 = DAT_ram_0018c2f4;
        if (!bVar15) {
          uVar9 = DAT_ram_0018c2f4 << (uVar8 & 0x1f);
        }
        uVar8 = 0;
        LP_START = 0x16a7dc;
        LP_END = 0x16a7ec;
        do {
          uVar10 = uVar7 - uVar9;
          if (uVar7 < uVar9) {
            uVar10 = uVar10 + uVar9;
          }
          else {
            uVar8 = uVar8 | 1 << (uVar14 & 0x1f);
          }
          uVar9 = uVar9 >> 1;
          uVar14 = uVar14 - 1;
          uVar7 = uVar10;
        } while (uVar14 != 0);
        uVar8 = uVar8 >> 1 | uVar8 << 0x1f;
      }
      uVar6 = *(undefined4 *)(&DAT_ram_00213280 + param_1);
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar7 - DAT_ram_0018c2f4;
        bVar15 = DAT_ram_0018c2f4 <= uVar7;
        if (bVar15) {
          uVar8 = uVar8 + 1;
        }
        uVar7 = uVar9;
      } while (bVar15 && uVar9 != 0);
      uVar6 = *(undefined4 *)(&DAT_ram_00213280 + param_1);
    }
    FUN_ram_000f4e90(uVar6,3,uVar8,&DAT_ram_00212788);
    uVar7 = DAT_ram_0018c2e4 * 0xb00;
    if (((int)DAT_ram_0018c2f4 < 1) || (0x3e < uVar7)) {
      if (DAT_ram_0018c2f4 == 0) {
        uVar8 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar8 = uVar7;
        if ((int)uVar7 < 0) {
          uVar8 = ~uVar7;
        }
        iVar11 = LZCOUNT(uVar8) + -1;
        if ((int)uVar7 < 0) {
          iVar11 = -1;
        }
        uVar8 = DAT_ram_0018c2f4;
        if ((int)DAT_ram_0018c2f4 < 0) {
          uVar8 = ~DAT_ram_0018c2f4;
        }
        iVar12 = LZCOUNT(uVar8) + -1;
        if ((int)DAT_ram_0018c2f4 < 0) {
          iVar12 = -1;
        }
        uVar8 = iVar12 - iVar11;
        bVar15 = (int)uVar8 < 0;
        if (bVar15) {
          uVar8 = 0;
        }
        uVar14 = uVar8 + 1;
        uVar9 = DAT_ram_0018c2f4;
        if (!bVar15) {
          uVar9 = DAT_ram_0018c2f4 << (uVar8 & 0x1f);
        }
        uVar8 = 0;
        LP_START = 0x16a878;
        LP_END = 0x16a888;
        do {
          uVar10 = uVar7 - uVar9;
          if (uVar7 < uVar9) {
            uVar10 = uVar10 + uVar9;
          }
          else {
            uVar8 = uVar8 | 1 << (uVar14 & 0x1f);
          }
          uVar9 = uVar9 >> 1;
          uVar14 = uVar14 - 1;
          uVar7 = uVar10;
        } while (uVar14 != 0);
        uVar8 = uVar8 >> 1 | uVar8 << 0x1f;
      }
      uVar6 = *(undefined4 *)(&DAT_ram_00213280 + param_1);
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar7 - DAT_ram_0018c2f4;
        bVar15 = DAT_ram_0018c2f4 <= uVar7;
        if (bVar15) {
          uVar8 = uVar8 + 1;
        }
        uVar7 = uVar9;
      } while (bVar15 && uVar9 != 0);
      uVar6 = *(undefined4 *)(&DAT_ram_00213280 + param_1);
    }
    FUN_ram_000f4e90(uVar6,4,uVar8,&DAT_ram_00211bc8);
    uVar7 = DAT_ram_0018c2e8 * 0xb00;
    if (((int)DAT_ram_0018c2f4 < 1) || (0x3e < uVar7)) {
      if (DAT_ram_0018c2f4 == 0) {
        uVar8 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar8 = uVar7;
        if ((int)uVar7 < 0) {
          uVar8 = ~uVar7;
        }
        iVar11 = LZCOUNT(uVar8) + -1;
        if ((int)uVar7 < 0) {
          iVar11 = -1;
        }
        uVar8 = DAT_ram_0018c2f4;
        if ((int)DAT_ram_0018c2f4 < 0) {
          uVar8 = ~DAT_ram_0018c2f4;
        }
        iVar12 = LZCOUNT(uVar8) + -1;
        if ((int)DAT_ram_0018c2f4 < 0) {
          iVar12 = -1;
        }
        uVar8 = iVar12 - iVar11;
        bVar15 = (int)uVar8 < 0;
        if (bVar15) {
          uVar8 = 0;
        }
        uVar14 = uVar8 + 1;
        uVar9 = DAT_ram_0018c2f4;
        if (!bVar15) {
          uVar9 = DAT_ram_0018c2f4 << (uVar8 & 0x1f);
        }
        uVar8 = 0;
        LP_START = 0x16a914;
        LP_END = 0x16a924;
        do {
          uVar10 = uVar7 - uVar9;
          if (uVar7 < uVar9) {
            uVar10 = uVar10 + uVar9;
          }
          else {
            uVar8 = uVar8 | 1 << (uVar14 & 0x1f);
          }
          uVar9 = uVar9 >> 1;
          uVar14 = uVar14 - 1;
          uVar7 = uVar10;
        } while (uVar14 != 0);
        uVar8 = uVar8 >> 1 | uVar8 << 0x1f;
      }
      uVar6 = *(undefined4 *)(&DAT_ram_00213280 + param_1);
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar7 - DAT_ram_0018c2f4;
        bVar15 = DAT_ram_0018c2f4 <= uVar7;
        if (bVar15) {
          uVar8 = uVar8 + 1;
        }
        uVar7 = uVar9;
      } while (bVar15 && uVar9 != 0);
      uVar6 = *(undefined4 *)(&DAT_ram_00213280 + param_1);
    }
    FUN_ram_000f4e90(uVar6,5,uVar8,&DAT_ram_00212798);
    FUN_ram_0016a24c(0);
    (&DAT_ram_0018c2d8)[iVar2] = 0;
  }
  else {
    (&DAT_ram_0018c2d8)[iVar2] = 1;
  }
  if ((iVar4 < 0) || (iVar5 < 10)) {
    if (DAT_ram_0018c3dd == '\x02') {
      FUN_ram_0016980c(iVar3);
    }
    FUN_ram_000f4e90(*(undefined4 *)(&DAT_ram_00213284 + param_1),0xb,0x66,
                     DAT_ram_0018c2f0 * 0x66 + 0x213144);
    uVar7 = DAT_ram_0018c318 * 0x60;
    if (((int)DAT_ram_0018c2f4 < 1) || (0x3e < uVar7)) {
      if (DAT_ram_0018c2f4 == 0) {
        uVar8 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar8 = uVar7;
        if ((int)uVar7 < 0) {
          uVar8 = ~uVar7;
        }
        iVar11 = LZCOUNT(uVar8) + -1;
        if ((int)uVar7 < 0) {
          iVar11 = -1;
        }
        uVar8 = DAT_ram_0018c2f4;
        if ((int)DAT_ram_0018c2f4 < 0) {
          uVar8 = ~DAT_ram_0018c2f4;
        }
        iVar3 = LZCOUNT(uVar8) + -1;
        if ((int)DAT_ram_0018c2f4 < 0) {
          iVar3 = -1;
        }
        uVar8 = iVar3 - iVar11;
        bVar15 = (int)uVar8 < 0;
        if (bVar15) {
          uVar8 = 0;
        }
        uVar14 = uVar8 + 1;
        uVar9 = DAT_ram_0018c2f4;
        if (!bVar15) {
          uVar9 = DAT_ram_0018c2f4 << (uVar8 & 0x1f);
        }
        uVar8 = 0;
        LP_START = 0x16aa14;
        LP_END = 0x16aa24;
        do {
          uVar10 = uVar7 - uVar9;
          if (uVar7 < uVar9) {
            uVar10 = uVar10 + uVar9;
          }
          else {
            uVar8 = uVar8 | 1 << (uVar14 & 0x1f);
          }
          uVar9 = uVar9 >> 1;
          uVar14 = uVar14 - 1;
          uVar7 = uVar10;
        } while (uVar14 != 0);
        uVar8 = uVar8 >> 1 | uVar8 << 0x1f;
      }
      uVar6 = *(undefined4 *)(&DAT_ram_00213284 + param_1);
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar7 - DAT_ram_0018c2f4;
        bVar15 = DAT_ram_0018c2f4 <= uVar7;
        if (bVar15) {
          uVar8 = uVar8 + 1;
        }
        uVar7 = uVar9;
      } while (bVar15 && uVar9 != 0);
      uVar6 = *(undefined4 *)(&DAT_ram_00213284 + param_1);
    }
    FUN_ram_000f4e90(uVar6,0xc,uVar8,&DAT_ram_00213210);
    uVar7 = DAT_ram_0018c318 << 4;
    if (((int)DAT_ram_0018c2f4 < 1) || (0x3e < uVar7)) {
      if (DAT_ram_0018c2f4 == 0) {
        uVar8 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar8 = uVar7;
        if ((int)uVar7 < 0) {
          uVar8 = ~uVar7;
        }
        iVar11 = LZCOUNT(uVar8) + -1;
        if ((int)uVar7 < 0) {
          iVar11 = -1;
        }
        uVar8 = DAT_ram_0018c2f4;
        if ((int)DAT_ram_0018c2f4 < 0) {
          uVar8 = ~DAT_ram_0018c2f4;
        }
        iVar3 = LZCOUNT(uVar8) + -1;
        if ((int)DAT_ram_0018c2f4 < 0) {
          iVar3 = -1;
        }
        uVar8 = iVar3 - iVar11;
        bVar15 = (int)uVar8 < 0;
        if (bVar15) {
          uVar8 = 0;
        }
        uVar14 = uVar8 + 1;
        uVar9 = DAT_ram_0018c2f4;
        if (!bVar15) {
          uVar9 = DAT_ram_0018c2f4 << (uVar8 & 0x1f);
        }
        uVar8 = 0;
        LP_START = 0x16aaac;
        LP_END = 0x16aabc;
        do {
          uVar10 = uVar7 - uVar9;
          if (uVar7 < uVar9) {
            uVar10 = uVar10 + uVar9;
          }
          else {
            uVar8 = uVar8 | 1 << (uVar14 & 0x1f);
          }
          uVar9 = uVar9 >> 1;
          uVar14 = uVar14 - 1;
          uVar7 = uVar10;
        } while (uVar14 != 0);
        uVar8 = uVar8 >> 1 | uVar8 << 0x1f;
      }
      uVar6 = *(undefined4 *)(&DAT_ram_00213284 + param_1);
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar7 - DAT_ram_0018c2f4;
        bVar15 = DAT_ram_0018c2f4 <= uVar7;
        if (bVar15) {
          uVar8 = uVar8 + 1;
        }
        uVar7 = uVar9;
      } while (bVar15 && uVar9 != 0);
      uVar6 = *(undefined4 *)(&DAT_ram_00213284 + param_1);
    }
    FUN_ram_000f4e90(uVar6,0xd,uVar8,&DAT_ram_00213270);
    FUN_ram_0016a24c(1);
    (&DAT_ram_0018c2d9)[iVar2] = 0;
  }
  else {
    (&DAT_ram_0018c2d9)[iVar2] = 1;
  }
  return 0;
}


