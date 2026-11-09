/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00176314 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00176314(int param_1,uint param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  bool bVar34;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [4];
  
  FUN_ram_0018291c();
  _DAT_ram_e6091014 = param_1;
  _DAT_ram_e6091018 = param_1;
  FUN_ram_00183358((param_2 & 0xc) * 0x40 + param_2 & 0xffff);
  if (param_4 == 0) {
    _DAT_ram_e6090490 = 3;
  }
  else {
    FUN_ram_00183bec(&DAT_ram_e6090490,1,0,0);
    FUN_ram_00183bec(&DAT_ram_e6090490,2,1,1);
    FUN_ram_001835a4(param_1);
  }
  uVar5 = _DAT_ram_e6090488;
  param_3 = param_3 >> 1;
  _DAT_ram_e6090488 = 0x1000;
  FUN_ram_001733a0(1,param_3,1);
  iVar7 = 0x40 - param_3;
  if (param_3 < 0x40) {
    iVar7 = param_3;
  }
  local_58 = DAT_ram_001ab59c;
  local_54 = DAT_ram_001ab5a0;
  local_50 = DAT_ram_001ab5a4;
  local_4c = DAT_ram_001ab5a8;
  if (param_4 == 0) {
    FUN_ram_00176028(1,param_1);
    local_58 = FUN_ram_001711e0(0x2a8,0xc0,6);
    local_54 = FUN_ram_001711e0(0x2a8,0xc0000,0x12);
    local_50 = FUN_ram_001711e0(0x2ac,0xc0,6);
    local_4c = FUN_ram_001711e0(0x2ac,0xc0000,0x12);
    iVar31 = 3;
    iVar28 = 1;
LAB_ram_001764a0:
    FUN_ram_001710d0(0x2a8,0xc0,6,iVar28);
    FUN_ram_001710d0(0x2a8,0xc0000,0x12,iVar28);
    FUN_ram_001710d0(0x2ac,0xc0,6,iVar28);
    FUN_ram_001710d0(0x2ac,0xc0000,0x12,iVar28);
    _DAT_ram_e6091000 = 8;
    FUN_ram_000e4f98(2000);
    _DAT_ram_e6091000 = 0xc;
    uVar6 = 0xfffff800;
    uVar14 = 0x800;
    iVar17 = 0;
    uVar11 = 0x800;
    uVar8 = 0xfffff800;
    puVar15 = (uint *)&DAT_ram_e60a6000;
    do {
      uVar19 = *puVar15;
      uVar23 = uVar19 & 0xfff;
      if (0x7ff < uVar23) {
        uVar23 = uVar23 - 0x1000;
      }
      (&DAT_ram_0021e554)[iVar17] = uVar23;
      uVar19 = uVar19 >> 0xc & 0xfff;
      if (0x7ff < uVar19) {
        uVar19 = uVar19 - 0x1000;
      }
      (&DAT_ram_0021e954)[iVar17] = uVar19;
      if ((int)uVar6 < (int)uVar23) {
        uVar6 = uVar23;
        if ((int)uVar14 <= (int)uVar23) {
          uVar23 = uVar14;
        }
joined_r0x001765a0:
        uVar14 = uVar23;
        if ((int)uVar8 < (int)uVar19) goto LAB_ram_001765b0;
LAB_ram_001765c8:
        if ((int)uVar19 < (int)uVar11) {
          uVar11 = uVar19;
        }
      }
      else {
        if ((int)uVar23 < (int)uVar14) goto joined_r0x001765a0;
        if ((int)uVar19 <= (int)uVar8) goto LAB_ram_001765c8;
LAB_ram_001765b0:
        uVar8 = uVar19;
        if ((int)uVar19 < (int)uVar11) {
          uVar11 = uVar19;
        }
      }
      if (0xff < iVar17 + 1) goto LAB_ram_001765dc;
      iVar17 = iVar17 + 1;
      puVar15 = puVar15 + 1;
    } while( true );
  }
  _DAT_ram_e6091000 = 8;
  FUN_ram_000e4f98(2000);
  _DAT_ram_e6091000 = 0xc;
  uVar11 = 0xfffff800;
  uVar6 = 0x800;
  iVar28 = 0x100;
  puVar18 = &DAT_ram_0021e954;
  puVar25 = &DAT_ram_0021e554;
  uVar8 = 0x800;
  uVar14 = 0xfffff800;
  puVar15 = (uint *)&DAT_ram_e60a6000;
  do {
    uVar26 = *puVar15;
    uVar19 = uVar26 & 0xfff;
    uVar23 = uVar19 - 0x1000;
    if (uVar19 < 0x800) {
      uVar23 = uVar19;
    }
    *puVar25 = uVar23;
    uVar19 = uVar26 >> 0xc & 0xfff;
    if (0x7ff < uVar19) {
      uVar19 = uVar19 - 0x1000;
    }
    *puVar18 = uVar19;
    if ((int)uVar11 < (int)uVar23) {
      uVar11 = uVar23;
      if ((int)uVar6 <= (int)uVar23) {
        uVar23 = uVar6;
      }
joined_r0x001767e8:
      uVar6 = uVar23;
      if ((int)uVar14 < (int)uVar19) goto LAB_ram_001767f8;
LAB_ram_00176800:
      if ((int)uVar19 < (int)uVar8) {
        uVar8 = uVar19;
      }
    }
    else {
      if ((int)uVar23 < (int)uVar6) goto joined_r0x001767e8;
      if ((int)uVar19 <= (int)uVar14) goto LAB_ram_00176800;
LAB_ram_001767f8:
      uVar14 = uVar19;
      if ((int)uVar19 < (int)uVar8) {
        uVar8 = uVar19;
      }
    }
    puVar25 = puVar25 + 1;
    iVar28 = iVar28 + -1;
    puVar18 = puVar18 + 1;
    puVar15 = puVar15 + 1;
  } while (iVar28 != 0);
  if (((uVar11 == 0x7fc || uVar6 == 0xfffff800) || uVar14 == 0x7fc) || uVar8 == 0xfffff800) {
    FUN_ram_000ee260(s_Rx_IQ_clipping_detected__max_I___ram_001c9c18);
  }
LAB_ram_00176600:
  _DAT_ram_e6091000 = 8;
  FUN_ram_000e4f98(2000);
  _DAT_ram_e6091000 = 0xc;
  iVar28 = 0x100;
  LP_START = 0x176634;
  LP_END = 0x176670;
  puVar15 = (uint *)&DAT_ram_e60a6000;
  puVar18 = &DAT_ram_0021e554;
  puVar25 = &DAT_ram_0021e954;
  do {
    uVar6 = *puVar15 & 0xfff;
    if (0x7ff < uVar6) {
      uVar6 = uVar6 - 0x1000;
    }
    uVar11 = *puVar15 >> 0xc & 0xfff;
    if (0x7ff < uVar11) {
      uVar11 = uVar11 - 0x1000;
    }
    *puVar18 = uVar6;
    *puVar25 = uVar11;
    iVar28 = iVar28 + -1;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
    puVar25 = puVar25 + 1;
  } while (iVar28 != 0);
  iVar31 = 0;
  iVar22 = 0;
  iVar17 = 0;
  iVar28 = 0;
  iVar32 = 0x100;
  iVar30 = 0;
  LP_START = 0x176698;
  LP_END = 0x176930;
  piVar13 = &DAT_ram_0021e554;
  piVar27 = &DAT_ram_0021e954;
  do {
    iVar9 = iVar31 * iVar7;
    iVar21 = -iVar7 * iVar31;
    bVar4 = (byte)(iVar9 + 0x40 >> 0x1f);
    sVar3 = ((short)(iVar9 + 0x40) + (ushort)bVar4 & 0xff) - (ushort)bVar4;
    iVar20 = (int)sVar3;
    bVar4 = (byte)(iVar9 >> 0x1f);
    sVar1 = ((short)iVar9 + (ushort)bVar4 & 0xff) - (ushort)bVar4;
    iVar24 = (int)sVar1;
    bVar4 = (byte)(iVar21 >> 0x1f);
    sVar10 = ((short)iVar21 + (ushort)bVar4 & 0xff) - (ushort)bVar4;
    iVar12 = (int)sVar10;
    bVar4 = (byte)(iVar21 + 0x40 >> 0x1f);
    sVar2 = ((short)(iVar21 + 0x40) + (ushort)bVar4 & 0xff) - (ushort)bVar4;
    iVar9 = (int)sVar2;
    if (iVar20 < 0) {
      iVar20 = (int)(short)(sVar3 + 0x100);
    }
    uVar6 = (uint)*(ushort *)((int)&PTR_DAT_ram_00190000_ram_001aaf90 + iVar20 * 2);
    if (iVar24 < 0) {
      iVar24 = (int)(short)(sVar1 + 0x100);
    }
    if (iVar9 < 0) {
      iVar9 = (int)(short)(sVar2 + 0x100);
    }
    if (iVar12 < 0) {
      iVar12 = (int)(short)(sVar10 + 0x100);
    }
    uVar11 = uVar6;
    if (0x7ff < uVar6) {
      uVar11 = uVar6 - 0x1000;
    }
    iVar21 = *piVar13;
    uVar8 = (uint)*(ushort *)((int)&PTR_DAT_ram_00190000_ram_001aaf90 + iVar24 * 2);
    uVar14 = uVar8;
    if (0x7ff < uVar8) {
      uVar14 = uVar8 - 0x1000;
    }
    iVar20 = *piVar27;
    iVar22 = iVar22 + ((int)(uVar11 * iVar21 + uVar14 * iVar20) >> 2);
    if (0x7ff < uVar8) {
      uVar8 = uVar8 - 0x1000;
    }
    if (0x7ff < uVar6) {
      uVar6 = uVar6 - 0x1000;
    }
    uVar11 = (uint)*(ushort *)((int)&PTR_DAT_ram_00190000_ram_001aaf90 + iVar9 * 2);
    iVar28 = iVar28 + ((int)(uVar6 * iVar20 + -iVar21 * uVar8) >> 2);
    uVar6 = uVar11;
    if (0x7ff < uVar11) {
      uVar6 = uVar11 - 0x1000;
    }
    uVar8 = (uint)*(ushort *)((int)&PTR_DAT_ram_00190000_ram_001aaf90 + iVar12 * 2);
    uVar14 = uVar8;
    if (0x7ff < uVar8) {
      uVar14 = uVar8 - 0x1000;
    }
    iVar17 = iVar17 + ((int)(uVar6 * iVar21 + uVar14 * iVar20) >> 2);
    if (0x7ff < uVar8) {
      uVar8 = uVar8 - 0x1000;
    }
    if (0x7ff < uVar11) {
      uVar11 = uVar11 - 0x1000;
    }
    iVar31 = iVar31 + 1;
    iVar30 = iVar30 + ((int)(uVar8 * -iVar21 + uVar11 * iVar20) >> 2);
    iVar32 = iVar32 + -1;
    piVar13 = piVar13 + 1;
    piVar27 = piVar27 + 1;
  } while (iVar32 != 0);
  iVar7 = iVar28 - iVar30;
  iVar32 = -iVar17 - iVar22;
  iVar28 = -iVar30 - iVar28;
  iVar22 = iVar22 - iVar17;
  iVar31 = iVar32;
  iVar17 = iVar32;
  if (-1 < iVar7) {
    if (iVar32 < 0) {
      if (iVar7 <= -iVar32) goto joined_r0x001769ac;
    }
    else if (iVar7 <= iVar32) goto joined_r0x00176988;
    iVar31 = iVar7;
    if (iVar28 < 0) goto joined_r0x001769f0;
joined_r0x0017698c:
    iVar17 = iVar22;
    if (iVar22 < 0) {
      iVar17 = -iVar22;
    }
    if (iVar17 < iVar28) goto LAB_ram_00176a20;
LAB_ram_00176a14:
    if (-1 < iVar22) {
      if (iVar31 <= iVar22) goto LAB_ram_00176a40;
      goto LAB_ram_00176a50;
    }
    if (-iVar22 < iVar31) goto LAB_ram_00176a50;
LAB_ram_00176a40:
    iVar31 = iVar22;
    if (iVar28 < 0) {
      if (iVar22 < 0) {
        if (-iVar28 <= -iVar22) goto LAB_ram_00176acc;
      }
      else if (-iVar28 <= iVar22) goto LAB_ram_00176ae4;
LAB_ram_00176ad4:
      iVar31 = iVar28;
      if (iVar28 < 0) {
        iVar31 = -iVar28;
      }
    }
    else if (iVar22 < 0) {
      if (-iVar22 < iVar28) goto LAB_ram_00176ad4;
LAB_ram_00176acc:
      iVar31 = -iVar22;
    }
    else if (iVar22 < iVar28) goto LAB_ram_00176ad4;
    goto LAB_ram_00176ae4;
  }
  if (iVar32 < 0) {
    if (-iVar7 <= -iVar32) goto joined_r0x001769ac;
    iVar31 = -iVar7;
    if (-1 < iVar28) goto joined_r0x0017698c;
    if (iVar22 < 0) {
      if (-iVar28 <= -iVar22) goto LAB_ram_00176a14;
      goto LAB_ram_00176a20;
    }
LAB_ram_00176a04:
    if (-iVar28 <= iVar22) goto LAB_ram_00176a14;
  }
  else {
    iVar17 = iVar7;
    if (iVar32 < -iVar7) {
joined_r0x001769ac:
      iVar31 = -iVar17;
    }
joined_r0x00176988:
    if (-1 < iVar28) goto joined_r0x0017698c;
joined_r0x001769f0:
    if (-1 < iVar22) goto LAB_ram_00176a04;
    if (-iVar28 <= -iVar22) goto LAB_ram_00176a14;
  }
LAB_ram_00176a20:
  iVar17 = iVar28;
  if (iVar28 < 0) {
    iVar17 = -iVar28;
  }
  if (iVar31 <= iVar17) goto LAB_ram_00176a40;
LAB_ram_00176a50:
  iVar31 = iVar32;
  if (iVar7 < 0) {
    if (iVar32 < 0) {
      if (-iVar7 <= -iVar32) goto LAB_ram_00176a88;
    }
    else if (-iVar7 <= iVar32) goto LAB_ram_00176ae4;
LAB_ram_00176a90:
    iVar31 = iVar7;
    if (iVar7 < 0) {
      iVar31 = -iVar7;
    }
  }
  else if (iVar32 < 0) {
    if (-iVar32 < iVar7) goto LAB_ram_00176a90;
LAB_ram_00176a88:
    iVar31 = -iVar32;
  }
  else if (iVar32 < iVar7) goto LAB_ram_00176a90;
LAB_ram_00176ae4:
  iVar30 = 0;
  iVar9 = 0x20;
  LP_START = 0x176af4;
  LP_END = 0x176b00;
  iVar17 = iVar31;
  do {
    if (iVar17 != 0) {
      iVar17 = iVar17 >> 1;
      iVar30 = iVar30 + 1;
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar6 = 0;
  if (-1 < iVar30 + -0xe) {
    iVar30 = 0x20;
    iVar17 = 0;
    LP_START = 0x176b18;
    LP_END = 0x176b24;
    do {
      if (iVar31 != 0) {
        iVar31 = iVar31 >> 1;
        iVar17 = iVar17 + 1;
      }
      iVar30 = iVar30 + -1;
    } while (iVar30 != 0);
    uVar6 = iVar17 - 0xe;
  }
  iVar28 = iVar28 >> (uVar6 & 0x1f);
  iVar7 = iVar7 >> (uVar6 & 0x1f);
  iVar22 = iVar22 >> (uVar6 & 0x1f);
  iVar32 = iVar32 >> (uVar6 & 0x1f);
  iVar17 = iVar28 * iVar28 + iVar22 * iVar22;
  iVar31 = iVar22 * iVar7 - iVar28 * iVar32;
  iVar28 = iVar28 * iVar7 + iVar22 * iVar32;
  iVar7 = iVar28;
  if (iVar31 < 0) {
    if (iVar28 < 0) {
      if (-iVar31 <= -iVar28) goto LAB_ram_00176b9c;
    }
    else if (-iVar31 <= iVar28) goto LAB_ram_00176ba8;
    iVar7 = -iVar31;
  }
  else {
    if (iVar28 < 0) {
      if (iVar31 <= -iVar28) {
LAB_ram_00176b9c:
        iVar7 = -iVar28;
        goto LAB_ram_00176ba8;
      }
    }
    else if (iVar31 <= iVar28) goto LAB_ram_00176ba8;
    iVar7 = iVar31;
  }
LAB_ram_00176ba8:
  iVar30 = 0x20;
  iVar22 = 0;
  LP_START = 0x176bb4;
  LP_END = 0x176bc0;
  do {
    if (iVar7 != 0) {
      iVar7 = iVar7 >> 1;
      iVar22 = iVar22 + 1;
    }
    iVar30 = iVar30 + -1;
  } while (iVar30 != 0);
  uVar14 = 0x1f - iVar22;
  uVar6 = iVar31 << (uVar14 & 0x1f);
  uVar11 = iVar28 << (uVar14 & 0x1f);
  iVar28 = 0;
  iVar31 = 0x20;
  LP_START = 0x176bdc;
  LP_END = 0x176be8;
  iVar7 = iVar17;
  do {
    if (iVar7 != 0) {
      iVar7 = iVar7 >> 1;
      iVar28 = iVar28 + 1;
    }
    iVar31 = iVar31 + -1;
  } while (iVar31 != 0);
  uVar8 = 0;
  if (-1 < iVar28 + -0x11) {
    iVar28 = 0;
    iVar31 = 0x20;
    LP_START = 0x176c04;
    LP_END = 0x176c10;
    iVar7 = iVar17;
    do {
      if (iVar7 != 0) {
        iVar7 = iVar7 >> 1;
        iVar28 = iVar28 + 1;
      }
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
    uVar8 = iVar28 - 0x11;
  }
  uVar23 = iVar17 >> (uVar8 & 0x1f);
  if (((int)uVar23 < 1) || (0x3e < uVar6)) {
    if (uVar23 == 0) {
      uVar19 = FUN_ram_000f5e6c(uVar6,0);
    }
    else {
      uVar26 = uVar6 ^ uVar23;
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
      }
      uVar19 = uVar6;
      if ((int)uVar6 < 0) {
        uVar19 = ~uVar6;
      }
      iVar7 = LZCOUNT(uVar19) + -1;
      if ((int)uVar6 < 0) {
        iVar7 = -1;
      }
      uVar19 = uVar23;
      if ((int)uVar23 < 0) {
        uVar19 = -uVar23;
      }
      uVar33 = uVar19;
      if ((int)uVar19 < 0) {
        uVar33 = ~uVar19;
      }
      iVar28 = LZCOUNT(uVar33) + -1;
      if ((int)uVar19 < 0) {
        iVar28 = -1;
      }
      uVar33 = iVar28 - iVar7;
      bVar34 = (int)uVar33 < 0;
      if (bVar34) {
        uVar33 = 0;
      }
      uVar29 = uVar33 + 1;
      if (!bVar34) {
        uVar19 = uVar19 << (uVar33 & 0x1f);
      }
      uVar33 = 0;
      LP_START = 0x176c78;
      LP_END = 0x176c88;
      do {
        uVar16 = uVar6 - uVar19;
        if (uVar6 < uVar19) {
          uVar16 = uVar16 + uVar19;
        }
        else {
          uVar33 = uVar33 | 1 << (uVar29 & 0x1f);
        }
        uVar19 = uVar19 >> 1;
        uVar29 = uVar29 - 1;
        uVar6 = uVar16;
      } while (uVar29 != 0);
      uVar19 = uVar33 >> 1 | uVar33 << 0x1f;
      if ((int)uVar26 < 0) {
        uVar19 = -uVar19;
      }
    }
  }
  else {
    uVar19 = 0;
    do {
      uVar26 = uVar6 - uVar23;
      bVar34 = uVar23 <= uVar6;
      if (bVar34) {
        uVar19 = uVar19 + 1;
      }
      uVar6 = uVar26;
    } while (bVar34 && uVar26 != 0);
  }
  if (((int)uVar23 < 1) || (0x3e < uVar11)) {
    if (uVar23 == 0) {
      uVar6 = FUN_ram_000f5e6c(uVar11,0);
    }
    else {
      uVar26 = uVar11 ^ uVar23;
      if ((int)uVar11 < 0) {
        uVar11 = -uVar11;
      }
      uVar6 = uVar11;
      if ((int)uVar11 < 0) {
        uVar6 = ~uVar11;
      }
      iVar7 = LZCOUNT(uVar6) + -1;
      if ((int)uVar11 < 0) {
        iVar7 = -1;
      }
      if ((int)uVar23 < 0) {
        uVar23 = -uVar23;
      }
      uVar6 = uVar23;
      if ((int)uVar23 < 0) {
        uVar6 = ~uVar23;
      }
      iVar28 = LZCOUNT(uVar6) + -1;
      if ((int)uVar23 < 0) {
        iVar28 = -1;
      }
      uVar6 = iVar28 - iVar7;
      bVar34 = (int)uVar6 < 0;
      if (bVar34) {
        uVar6 = 0;
      }
      uVar33 = uVar6 + 1;
      if (!bVar34) {
        uVar23 = uVar23 << (uVar6 & 0x1f);
      }
      uVar6 = 0;
      LP_START = 0x176d0c;
      LP_END = 0x176d1c;
      do {
        uVar29 = uVar11 - uVar23;
        if (uVar11 < uVar23) {
          uVar29 = uVar29 + uVar23;
        }
        else {
          uVar6 = uVar6 | 1 << (uVar33 & 0x1f);
        }
        uVar23 = uVar23 >> 1;
        uVar33 = uVar33 - 1;
        uVar11 = uVar29;
      } while (uVar33 != 0);
      uVar6 = uVar6 >> 1 | uVar6 << 0x1f;
      if ((int)uVar26 < 0) {
        uVar6 = -uVar6;
      }
    }
  }
  else {
    uVar6 = 0;
    do {
      uVar26 = uVar11 - uVar23;
      bVar34 = uVar23 <= uVar11;
      if (bVar34) {
        uVar6 = uVar6 + 1;
      }
      uVar11 = uVar26;
    } while (bVar34 && uVar26 != 0);
  }
  uVar11 = 0xe - (uVar14 + uVar8);
  if ((int)uVar11 < 1) {
    iVar7 = (int)uVar6 >> (-uVar11 & 0x1f);
    iVar28 = (int)uVar19 >> (-uVar11 & 0x1f);
  }
  else {
    iVar7 = uVar6 << (uVar11 & 0x1f);
    iVar28 = uVar19 << (uVar11 & 0x1f);
  }
  iVar7 = -iVar7;
  if (iVar28 < 0) {
    iVar28 = iVar28 + 0x10000;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x10000;
  }
  local_48[0] = DAT_ram_001ab5ac;
  local_48[1] = DAT_ram_001ab5b0;
  local_48[2] = DAT_ram_001ab5b4;
  local_48[3] = DAT_ram_001ab5b8;
  piVar13 = (int *)(local_48[param_1] + (((int)param_2 >> 5 & 3U) + ((int)param_2 >> 2 & 4U)) * 0x38
                   );
  *piVar13 = (iVar28 >> 4 & 0xfffU) + 0x400000;
  piVar13[1] = iVar7 >> 4 & 0xfff;
  piVar13[2] = 0;
  piVar13[3] = 0;
  piVar13[4] = 0;
  piVar13[5] = 0;
  piVar13[6] = 0;
  piVar13[7] = 0;
  piVar13[8] = 0;
  piVar13[9] = 0;
  piVar13[10] = 0;
  piVar13[0xb] = 0;
  piVar13[0xc] = 0;
  piVar13[0xd] = 0;
  _DAT_ram_e6090530 = _DAT_ram_e6090530 | 1;
  _DAT_ram_e60914ac = 0;
  if (param_4 == 0) {
    FUN_ram_001710d0(0x2a8,0xc0,6,local_58);
    FUN_ram_001710d0(0x2a8,0xc0000,0x12,local_54);
    FUN_ram_001710d0(0x2ac,0xc0,6,local_50);
    FUN_ram_001710d0(0x2ac,0xc0000,0x12,local_4c);
    FUN_ram_00176028(0,param_1);
  }
  _DAT_ram_e6090488 = uVar5;
  FUN_ram_00183bec(&DAT_ram_e6090490,1,0,0);
  FUN_ram_00183bec(&DAT_ram_e6090490,2,1,0);
  _DAT_ram_e609104c = 0;
  _DAT_ram_e6091058 = 0;
  _DAT_ram_e6091048 = 0;
  FUN_ram_00183a40();
  return;
LAB_ram_001765dc:
  iVar17 = uVar6 - uVar14;
  if (0x400 < iVar17) {
    iVar17 = uVar8 - uVar11;
  }
  if (0x400 < iVar17) goto LAB_ram_00176600;
  iVar31 = iVar31 + -1;
  iVar28 = iVar28 + 1;
  if (iVar31 == 0) goto LAB_ram_00176600;
  goto LAB_ram_001764a0;
}


