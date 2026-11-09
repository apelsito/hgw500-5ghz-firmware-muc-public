/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00177020 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00177020(int param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  undefined2 *puVar2;
  int extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;
  int local_80;
  int local_70 [12];
  int local_40 [2];
  
  if (0x80 < param_3) {
    param_3 = param_3 + -0x100;
  }
  local_80 = param_4;
  if (0x80 < param_4) {
    local_80 = param_4 + -0x100;
  }
  local_40[1] = local_80;
  local_40[0] = param_3;
  FUN_ram_0018291c();
  _DAT_ram_e6091014 = param_1;
  _DAT_ram_e6091018 = param_1;
  FUN_ram_00183bec(&DAT_ram_e6090490,1,0,0);
  FUN_ram_00183bec(&DAT_ram_e6090490,2,1,1);
  uVar19 = 0xfffff800;
  FUN_ram_00183358((param_2 & 0xc) * 0x40 + param_2 & 0xffff);
  FUN_ram_001835a4(param_1);
  uVar3 = _DAT_ram_e6090488;
  _DAT_ram_e6090488 = 0x1000;
  _DAT_ram_e6091044 = 0x7f;
  _DAT_ram_e609104c = 1;
  _DAT_ram_e6091058 = 1;
  _DAT_ram_e6091048 = 1;
  _DAT_ram_e6091050 = 0;
  _DAT_ram_e6091000 = 8;
  FUN_ram_000e4f98(2000);
  _DAT_ram_e6091000 = 0xc;
  uVar9 = 0x800;
  puVar8 = &DAT_ram_0021e554;
  puVar7 = &DAT_ram_0021e954;
  iVar6 = 0x100;
  uVar17 = 0x800;
  uVar10 = 0xfffff800;
  puVar1 = (uint *)&DAT_ram_e60a6000;
  do {
    uVar4 = *puVar1 >> 0xc & 0xfff;
    if (0x7ff < uVar4) {
      uVar4 = uVar4 - 0x1000;
    }
    uVar5 = *puVar1 & 0xfff;
    *puVar8 = uVar4;
    if (0x7ff < uVar5) {
      uVar5 = uVar5 - 0x1000;
    }
    *puVar7 = uVar5;
    if ((int)uVar19 < (int)uVar4) {
      uVar19 = uVar4;
      if ((int)uVar9 <= (int)uVar4) {
        uVar4 = uVar9;
      }
joined_r0x00177200:
      uVar9 = uVar4;
      if ((int)uVar10 < (int)uVar5) goto LAB_ram_00177210;
LAB_ram_00177218:
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
    else {
      if ((int)uVar4 < (int)uVar9) goto joined_r0x00177200;
      if ((int)uVar5 <= (int)uVar10) goto LAB_ram_00177218;
LAB_ram_00177210:
      uVar10 = uVar5;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
    puVar8 = puVar8 + 1;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + 1;
    puVar1 = puVar1 + 1;
    if (iVar6 == 0) {
      FUN_ram_000ee260(s_I____d___d___Q____d___d__ram_001c9c5c,uVar19,uVar9,uVar10,uVar17);
      uVar4 = uVar19;
      if ((int)uVar19 < 0) {
        uVar4 = -uVar19;
      }
      if (0x9f < (int)uVar4) {
        uVar4 = uVar9;
        if ((int)uVar9 < 0) {
          uVar4 = -uVar9;
        }
        if (0x9f < (int)uVar4) {
          uVar4 = uVar10;
          if ((int)uVar10 < 0) {
            uVar4 = -uVar10;
          }
          if (0x9f < (int)uVar4) {
            uVar4 = uVar17;
            if ((int)uVar17 < 0) {
              uVar4 = -uVar17;
            }
            if (0x9f < (int)uVar4) {
              if (((uVar19 == 0x7fc || uVar9 == 0xfffff800) || uVar10 == 0x7fc) ||
                  uVar17 == 0xfffff800) {
                FUN_ram_000ee260(s_RX_IQ_Clipping_detected__max_I___ram_001c9c78,uVar19,uVar9,uVar10
                                 ,uVar17);
                return 1;
              }
              _DAT_ram_e6090488 = uVar3;
              FUN_ram_00183bec(&DAT_ram_e6090490,1,0,0);
              FUN_ram_00183bec(&DAT_ram_e6090490,2,1,0);
              _DAT_ram_e609104c = 0;
              _DAT_ram_e6091058 = 0;
              _DAT_ram_e6091048 = 0;
              FUN_ram_00183a40();
              iVar22 = 0;
              iVar23 = 2;
              iVar6 = extraout_r1;
              while( true ) {
                iVar12 = 0;
                iVar20 = local_40[iVar22];
                iVar15 = 0;
                iVar16 = 0;
                iVar13 = 0;
                iVar21 = 0;
                do {
                  iVar14 = iVar20 * iVar21 * 0x40;
                  uVar9 = (uint)(iVar14 >> 0xd) >> 0x12;
                  iVar14 = (iVar14 + uVar9 & 0x3fff) - uVar9;
                  iVar6 = FUN_ram_00176efc(iVar14,iVar6);
                  iVar12 = iVar12 + (&DAT_ram_0021e554)[iVar21] * iVar6;
                  iVar6 = FUN_ram_00176f88(iVar14);
                  piVar18 = &DAT_ram_0021e954 + iVar21;
                  iVar16 = iVar16 + iVar6 * (&DAT_ram_0021e554)[iVar21];
                  iVar6 = FUN_ram_00176efc(iVar14);
                  iVar21 = iVar21 + 1;
                  iVar13 = iVar13 + *piVar18 * iVar6;
                  iVar14 = FUN_ram_00176f88(iVar14);
                  iVar6 = *piVar18;
                  iVar15 = iVar15 + iVar14 * iVar6;
                } while (iVar21 < 0x100);
                iVar12 = iVar12 >> 0x11;
                iVar16 = iVar16 >> 0x11;
                iVar15 = iVar15 >> 0x11;
                iVar13 = iVar13 >> 0x11;
                iVar20 = iVar12 * iVar12 + iVar16 * iVar16;
                iVar21 = iVar13 * iVar13 + iVar15 * iVar15;
                if (iVar21 < 0x80001) {
                  uVar9 = iVar20 >> 2;
                  uVar19 = iVar21 * 0x400;
                }
                else {
                  uVar9 = iVar20 >> 4;
                  uVar19 = iVar21 * 0x100;
                }
                if (uVar9 == 0) {
                  return 2;
                }
                if (((int)uVar9 < 1) || (0x3e < uVar19)) {
                  if (uVar9 == 0) {
                    uVar26 = FUN_ram_000f5e6c(uVar19,0);
                  }
                  else {
                    uVar10 = uVar19 ^ uVar9;
                    if ((int)uVar19 < 0) {
                      uVar19 = -uVar19;
                    }
                    uVar17 = uVar19;
                    if ((int)uVar19 < 0) {
                      uVar17 = ~uVar19;
                    }
                    iVar6 = LZCOUNT(uVar17) + -1;
                    if ((int)uVar19 < 0) {
                      iVar6 = -1;
                    }
                    if ((int)uVar9 < 0) {
                      uVar9 = -uVar9;
                    }
                    uVar17 = uVar9;
                    if ((int)uVar9 < 0) {
                      uVar17 = ~uVar9;
                    }
                    iVar20 = LZCOUNT(uVar17) + -1;
                    if ((int)uVar9 < 0) {
                      iVar20 = -1;
                    }
                    uVar17 = iVar20 - iVar6;
                    bVar25 = (int)uVar17 < 0;
                    if (bVar25) {
                      uVar17 = 0;
                    }
                    uVar4 = uVar17 + 1;
                    if (!bVar25) {
                      uVar9 = uVar9 << (uVar17 & 0x1f);
                    }
                    uVar17 = 0;
                    LP_START = 0x1774e8;
                    LP_END = 0x1774f8;
                    do {
                      uVar5 = uVar19 - uVar9;
                      if (uVar19 < uVar9) {
                        uVar5 = uVar5 + uVar9;
                      }
                      else {
                        uVar17 = uVar17 | 1 << (uVar4 & 0x1f);
                      }
                      uVar9 = uVar9 >> 1;
                      uVar4 = uVar4 - 1;
                      uVar19 = uVar5;
                    } while (uVar4 != 0);
                    uVar9 = uVar17 >> 1 | uVar17 << 0x1f;
                    iVar6 = uVar10 << 1;
                    uVar26 = CONCAT44(iVar6,uVar9);
                    if ((int)uVar10 < 0) {
                      uVar26 = CONCAT44(iVar6,-uVar9);
                    }
                  }
                }
                else {
                  iVar20 = 0;
                  do {
                    uVar10 = uVar19 - uVar9;
                    bVar25 = uVar9 <= uVar19;
                    if (bVar25) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar26 = CONCAT44(iVar6,iVar20);
                    uVar19 = uVar10;
                  } while (bVar25 && uVar10 != 0);
                }
                uVar3 = (undefined4)((ulonglong)uVar26 >> 0x20);
                local_70[iVar22] = (int)uVar26 + 0x1000;
                iVar20 = iVar13 * iVar12 + iVar15 * iVar16;
                uVar9 = iVar20 * 0x100;
                iVar6 = iVar15 * iVar12 - iVar16 * iVar13;
                bVar25 = iVar6 == 0;
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 1;
                }
                uVar19 = iVar6 >> 1;
                if (bVar25) break;
                if (((int)uVar19 < 1) || (0x3e < uVar9)) {
                  if (uVar19 == 0) {
                    uVar26 = FUN_ram_000f5e6c(uVar9,0);
                  }
                  else {
                    uVar10 = uVar9 ^ uVar19;
                    if ((int)uVar9 < 0) {
                      uVar9 = iVar20 * -0x100;
                    }
                    uVar17 = uVar9;
                    if ((int)uVar9 < 0) {
                      uVar17 = ~uVar9;
                    }
                    iVar6 = LZCOUNT(uVar17) + -1;
                    if ((int)uVar9 < 0) {
                      iVar6 = -1;
                    }
                    if ((int)uVar19 < 0) {
                      uVar19 = -uVar19;
                    }
                    uVar17 = uVar19;
                    if ((int)uVar19 < 0) {
                      uVar17 = ~uVar19;
                    }
                    iVar12 = LZCOUNT(uVar17) + -1;
                    if ((int)uVar19 < 0) {
                      iVar12 = -1;
                    }
                    uVar17 = iVar12 - iVar6;
                    bVar25 = (int)uVar17 < 0;
                    if (bVar25) {
                      uVar17 = 0;
                    }
                    uVar4 = uVar17 + 1;
                    if (!bVar25) {
                      uVar19 = uVar19 << (uVar17 & 0x1f);
                    }
                    uVar17 = 0;
                    LP_START = 0x1775b0;
                    LP_END = 0x1775c0;
                    do {
                      uVar5 = uVar9 - uVar19;
                      if (uVar9 < uVar19) {
                        uVar5 = uVar5 + uVar19;
                      }
                      else {
                        uVar17 = uVar17 | 1 << (uVar4 & 0x1f);
                      }
                      uVar19 = uVar19 >> 1;
                      uVar4 = uVar4 - 1;
                      uVar9 = uVar5;
                    } while (uVar4 != 0);
                    uVar9 = uVar17 >> 1 | uVar17 << 0x1f;
                    uVar26 = CONCAT44(uVar3,uVar9);
                    if ((int)uVar10 < 0) {
                      uVar26 = CONCAT44(uVar3,-uVar9);
                    }
                  }
                }
                else {
                  iVar6 = 0;
                  do {
                    uVar10 = uVar9 - uVar19;
                    bVar25 = uVar19 <= uVar9;
                    if (bVar25) {
                      iVar6 = iVar6 + 1;
                    }
                    uVar26 = CONCAT44(uVar3,iVar6);
                    uVar9 = uVar10;
                  } while (bVar25 && uVar10 != 0);
                }
                iVar6 = (int)((ulonglong)uVar26 >> 0x20);
                iVar12 = (int)uVar26;
                if (iVar12 < 1) {
                  if (iVar12 < 0) {
                    iVar12 = -iVar12;
                  }
                  iVar13 = -1;
                }
                else {
                  iVar13 = 1;
                }
                uVar9 = (uint)(iVar12 >> 8) >> 0x17;
                iVar12 = (iVar12 + uVar9 & 0x1ff) - uVar9;
                if (iVar12 < 0) {
                  iVar12 = -*(int *)(&DAT_ram_00199da0 + iVar12 * -4);
                }
                else {
                  iVar12 = *(int *)(&DAT_ram_00199da0 + iVar12 * 4);
                }
                iVar23 = iVar23 + -1;
                local_70[iVar22 + 2] = iVar12 * iVar13;
                iVar22 = iVar22 + 1;
                if (iVar23 == 0) {
                  uVar9 = local_80 - param_3;
                  iVar6 = local_70[3] - local_70[2];
                  if (uVar9 == 0) {
                    return 2;
                  }
                  uVar19 = iVar6 * 0x200;
                  if (((int)uVar9 < 1) || (0x3e < uVar19)) {
                    if (uVar9 == 0) {
                      uVar10 = FUN_ram_000f5e6c(uVar19,0);
                    }
                    else {
                      uVar17 = uVar19 ^ uVar9;
                      if ((int)uVar19 < 0) {
                        uVar19 = iVar6 * -0x200;
                      }
                      uVar10 = uVar19;
                      if ((int)uVar19 < 0) {
                        uVar10 = ~uVar19;
                      }
                      iVar22 = LZCOUNT(uVar10) + -1;
                      if ((int)uVar19 < 0) {
                        iVar22 = -1;
                      }
                      uVar10 = uVar9;
                      if ((int)uVar9 < 0) {
                        uVar10 = -uVar9;
                      }
                      uVar4 = uVar10;
                      if ((int)uVar10 < 0) {
                        uVar4 = ~uVar10;
                      }
                      iVar23 = LZCOUNT(uVar4) + -1;
                      if ((int)uVar10 < 0) {
                        iVar23 = -1;
                      }
                      uVar4 = iVar23 - iVar22;
                      bVar25 = (int)uVar4 < 0;
                      if (bVar25) {
                        uVar4 = 0;
                      }
                      uVar5 = uVar4 + 1;
                      if (!bVar25) {
                        uVar10 = uVar10 << (uVar4 & 0x1f);
                      }
                      uVar4 = 0;
                      LP_START = 0x1776cc;
                      LP_END = 0x1776dc;
                      do {
                        uVar24 = uVar19 - uVar10;
                        if (uVar19 < uVar10) {
                          uVar24 = uVar24 + uVar10;
                        }
                        else {
                          uVar4 = uVar4 | 1 << (uVar5 & 0x1f);
                        }
                        uVar10 = uVar10 >> 1;
                        uVar5 = uVar5 - 1;
                        uVar19 = uVar24;
                      } while (uVar5 != 0);
                      uVar10 = uVar4 >> 1 | uVar4 << 0x1f;
                      if ((int)uVar17 < 0) {
                        uVar10 = -uVar10;
                      }
                    }
                  }
                  else {
                    uVar10 = 0;
                    do {
                      uVar17 = uVar19 - uVar9;
                      bVar25 = uVar9 <= uVar19;
                      if (bVar25) {
                        uVar10 = uVar10 + 1;
                      }
                      uVar19 = uVar17;
                    } while (bVar25 && uVar17 != 0);
                  }
                  uVar19 = param_3 * iVar6;
                  if (((int)uVar9 < 1) || (0x3e < uVar19)) {
                    if (uVar9 == 0) {
                      uVar17 = FUN_ram_000f5e6c(uVar19,0);
                    }
                    else {
                      uVar4 = uVar19 ^ uVar9;
                      if ((int)uVar19 < 0) {
                        uVar19 = -uVar19;
                      }
                      uVar17 = uVar19;
                      if ((int)uVar19 < 0) {
                        uVar17 = ~uVar19;
                      }
                      iVar22 = LZCOUNT(uVar17) + -1;
                      if ((int)uVar19 < 0) {
                        iVar22 = -1;
                      }
                      uVar17 = uVar9;
                      if ((int)uVar9 < 0) {
                        uVar17 = -uVar9;
                      }
                      uVar5 = uVar17;
                      if ((int)uVar17 < 0) {
                        uVar5 = ~uVar17;
                      }
                      iVar23 = LZCOUNT(uVar5) + -1;
                      if ((int)uVar17 < 0) {
                        iVar23 = -1;
                      }
                      uVar5 = iVar23 - iVar22;
                      bVar25 = (int)uVar5 < 0;
                      if (bVar25) {
                        uVar5 = 0;
                      }
                      uVar24 = uVar5 + 1;
                      if (!bVar25) {
                        uVar17 = uVar17 << (uVar5 & 0x1f);
                      }
                      uVar5 = 0;
                      LP_START = 0x177778;
                      LP_END = 0x177788;
                      do {
                        uVar11 = uVar19 - uVar17;
                        if (uVar19 < uVar17) {
                          uVar11 = uVar11 + uVar17;
                        }
                        else {
                          uVar5 = uVar5 | 1 << (uVar24 & 0x1f);
                        }
                        uVar17 = uVar17 >> 1;
                        uVar24 = uVar24 - 1;
                        uVar19 = uVar11;
                      } while (uVar24 != 0);
                      uVar17 = uVar5 >> 1 | uVar5 << 0x1f;
                      if ((int)uVar4 < 0) {
                        uVar17 = -uVar17;
                      }
                    }
                  }
                  else {
                    uVar17 = 0;
                    do {
                      uVar4 = uVar19 - uVar9;
                      bVar25 = uVar9 <= uVar19;
                      if (bVar25) {
                        uVar17 = uVar17 + 1;
                      }
                      uVar19 = uVar4;
                    } while (bVar25 && uVar4 != 0);
                  }
                  uVar19 = local_80 * iVar6;
                  if (((int)uVar9 < 1) || (0x3e < uVar19)) {
                    if (uVar9 == 0) {
                      uVar4 = FUN_ram_000f5e6c(uVar19,0);
                    }
                    else {
                      uVar5 = uVar19 ^ uVar9;
                      if ((int)uVar19 < 0) {
                        uVar19 = -uVar19;
                      }
                      uVar4 = uVar19;
                      if ((int)uVar19 < 0) {
                        uVar4 = ~uVar19;
                      }
                      iVar6 = LZCOUNT(uVar4) + -1;
                      if ((int)uVar19 < 0) {
                        iVar6 = -1;
                      }
                      if ((int)uVar9 < 0) {
                        uVar9 = -uVar9;
                      }
                      uVar4 = uVar9;
                      if ((int)uVar9 < 0) {
                        uVar4 = ~uVar9;
                      }
                      iVar22 = LZCOUNT(uVar4) + -1;
                      if ((int)uVar9 < 0) {
                        iVar22 = -1;
                      }
                      uVar4 = iVar22 - iVar6;
                      bVar25 = (int)uVar4 < 0;
                      if (bVar25) {
                        uVar4 = 0;
                      }
                      uVar24 = uVar4 + 1;
                      if (!bVar25) {
                        uVar9 = uVar9 << (uVar4 & 0x1f);
                      }
                      uVar4 = 0;
                      LP_START = 0x17781c;
                      LP_END = 0x17782c;
                      do {
                        uVar11 = uVar19 - uVar9;
                        if (uVar19 < uVar9) {
                          uVar11 = uVar11 + uVar9;
                        }
                        else {
                          uVar4 = uVar4 | 1 << (uVar24 & 0x1f);
                        }
                        uVar9 = uVar9 >> 1;
                        uVar24 = uVar24 - 1;
                        uVar19 = uVar11;
                      } while (uVar24 != 0);
                      uVar4 = uVar4 >> 1 | uVar4 << 0x1f;
                      if ((int)uVar5 < 0) {
                        uVar4 = -uVar4;
                      }
                    }
                  }
                  else {
                    uVar4 = 0;
                    do {
                      uVar5 = uVar19 - uVar9;
                      bVar25 = uVar9 <= uVar19;
                      if (bVar25) {
                        uVar4 = uVar4 + 1;
                      }
                      uVar19 = uVar5;
                    } while (bVar25 && uVar5 != 0);
                  }
                  iVar6 = (int)(local_70[2] - uVar17) >> 4;
                  iVar22 = (int)(local_70[3] - uVar4) >> 4;
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 0x4000;
                  }
                  if (iVar22 < 0) {
                    iVar22 = iVar22 + 0x4000;
                  }
                  iVar23 = FUN_ram_00176f88(iVar6);
                  iVar12 = FUN_ram_00176f88(iVar22);
                  iVar12 = local_70[1] * iVar12 + local_70[0] * iVar23 >> 0xf;
                  iVar23 = iVar12 + 0x1000;
                  if (-1 < iVar12) {
                    iVar23 = iVar12;
                  }
                  iVar6 = FUN_ram_00176efc(iVar6);
                  iVar22 = FUN_ram_00176efc(iVar22);
                  iVar22 = iVar22 * local_70[1] + iVar6 * local_70[0] >> 0xf;
                  iVar6 = iVar22 + 0x1000;
                  if (-1 < iVar22) {
                    iVar6 = iVar22;
                  }
                  puVar2 = (undefined2 *)
                           (&DAT_ram_002119f0 +
                           (((int)param_2 >> 5 & 3U) + ((int)param_2 >> 2 & 4U)) * 6 +
                           param_1 * 0x30);
                  *puVar2 = (short)iVar6;
                  puVar2[1] = (short)iVar23;
                  uVar9 = (uint)DAT_ram_0018c362;
                  puVar2[2] = (short)((int)uVar10 >> 0xb) + 0x80;
                  FUN_ram_000f4dd4(DAT_ram_0018c2d4,4,uVar9 * 0xc0,0xc0);
                  if (&UNK_auxregs_0709 < DAT_ram_0018c2f8) {
                    FUN_ram_0017bf30(0);
                    FUN_ram_0017bf30(1);
                    iVar6 = 0;
                    iVar22 = 4;
                    do {
                      FUN_ram_0017c1f8(iVar6);
                      iVar22 = iVar22 + -1;
                      iVar6 = iVar6 + 1;
                    } while (iVar22 != 0);
                  }
                  return 0;
                }
              }
              return 2;
            }
          }
        }
      }
      FUN_ram_000ee260(s_RX_IQ_training_signal_too_weak__ram_001c9cbc);
      return 2;
    }
  } while( true );
}


