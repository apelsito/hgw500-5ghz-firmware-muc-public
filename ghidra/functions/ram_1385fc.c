/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001385fc */

/* WARNING: Removing unreachable block (ram,0x00138e50) */
/* WARNING: Type propagation algorithm not settling */

void FUN_ram_001385fc(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  
  iVar9 = DAT_ram_0018cd50 - DAT_ram_0018d3e4;
  iVar7 = DAT_ram_0018cd54 - DAT_ram_0018d3e8;
  iVar2 = DAT_ram_0018cd58 - DAT_ram_0018d3ec;
  uVar1 = DAT_ram_0018cd5c - DAT_ram_0018d3f0;
  uVar15 = DAT_ram_0018cd60 - DAT_ram_0018d3f4;
  uVar14 = DAT_ram_0018cd64 - DAT_ram_0018d3f8;
  iVar3 = DAT_ram_0018cd68 - DAT_ram_0018d3fc;
  iVar5 = DAT_ram_0018cd80 - DAT_ram_0018d414;
  uVar6 = DAT_ram_0018cd84 - DAT_ram_0018d418;
  uVar27 = DAT_ram_0018cd88 - DAT_ram_0018d41c;
  uVar16 = DAT_ram_0018c1c4 - DAT_ram_0018c1e4;
  uVar19 = DAT_ram_0018c1c8 - DAT_ram_0018c1e8;
  FUN_ram_0039fe00(&DAT_ram_0018d3e4,&DAT_ram_0018cd50,0x3c);
  DAT_ram_0018c1e8 = DAT_ram_0018c1c8;
  uVar19 = uVar19 / 0xfa;
  DAT_ram_0018c1e4 = DAT_ram_0018c1c4;
  uVar16 = uVar16 / 0xfa;
  uVar8 = uVar6 * 100;
  if (uVar1 <= uVar16) {
    iVar20 = 0;
    if (uVar1 < uVar15) {
      iVar26 = uVar15 - uVar1;
      if (uVar15 < uVar14) goto LAB_ram_00138770;
      if (uVar14 != 0) {
        iVar10 = 0;
        goto LAB_ram_0013883c;
      }
      iVar10 = 0;
    }
    else if (uVar15 < uVar14) {
      iVar10 = uVar14 - uVar15;
      if (uVar14 != 0) goto LAB_ram_00138800;
      iVar26 = 0;
    }
    else {
      if (uVar14 != 0) {
        iVar10 = 0;
LAB_ram_00138800:
        iVar26 = 0;
        goto LAB_ram_0013883c;
      }
      iVar10 = 0;
      iVar26 = 0;
    }
    goto LAB_ram_00138814;
  }
  iVar20 = uVar1 - uVar16;
  if (uVar15 <= uVar1) {
    iVar26 = 0;
    if (uVar14 <= uVar15) {
      if (uVar14 == 0) {
        iVar10 = 0;
        goto LAB_ram_00138814;
      }
      iVar10 = iVar26;
      iVar26 = 0;
      goto LAB_ram_0013883c;
    }
    iVar10 = uVar14 - uVar15;
    if (uVar14 != 0) {
      iVar26 = 0;
      goto LAB_ram_0013883c;
    }
LAB_ram_00138814:
    uVar25 = 0;
    if (uVar14 != 0) goto LAB_ram_001388e0;
LAB_ram_001388d0:
    uVar18 = 0;
    uVar22 = uVar18;
    if (uVar14 != 0) goto LAB_ram_001389fc;
    if (uVar27 == 0) {
LAB_ram_00138b7c:
      uVar18 = 0;
      uVar23 = uVar18;
      uVar24 = uVar18;
      if (uVar27 < uVar8) {
joined_r0x00138b90:
        uVar23 = 0;
        uVar18 = 0;
        goto joined_r0x00138b90;
      }
      goto LAB_ram_00138c38;
    }
LAB_ram_00138ac4:
    uVar23 = 0;
    uVar18 = 0;
    uVar17 = (uVar16 + iVar10) * 100;
    if (((int)uVar27 < 1) || (0x3e < uVar17)) {
      if (uVar27 == 0) {
        uVar24 = FUN_ram_000f5e64(uVar17,0);
      }
      else {
        uVar24 = uVar17;
        if ((int)uVar17 < 0) {
          uVar24 = ~uVar17;
        }
        iVar12 = LZCOUNT(uVar24) + -1;
        if ((int)uVar17 < 0) {
          iVar12 = -1;
        }
        uVar24 = uVar27;
        if ((int)uVar27 < 0) {
          uVar24 = ~uVar27;
        }
        iVar11 = LZCOUNT(uVar24) + -1;
        if ((int)uVar27 < 0) {
          iVar11 = -1;
        }
        uVar24 = iVar11 - iVar12;
        bVar29 = (int)uVar24 < 0;
        if (bVar29) {
          uVar24 = 0;
        }
        uVar13 = uVar24 + 1;
        uVar4 = uVar27;
        if (!bVar29) {
          uVar4 = uVar27 << (uVar24 & 0x1f);
        }
        uVar24 = 0;
        LP_START = 0x138b30;
        LP_END = 0x138b40;
        do {
          uVar28 = uVar17 - uVar4;
          if (uVar17 < uVar4) {
            uVar28 = uVar28 + uVar4;
          }
          else {
            uVar24 = uVar24 | 1 << (uVar13 & 0x1f);
          }
          uVar4 = uVar4 >> 1;
          uVar13 = uVar13 - 1;
          uVar17 = uVar28;
        } while (uVar13 != 0);
        uVar24 = uVar24 >> 1 | uVar24 << 0x1f;
      }
    }
    else {
      uVar24 = 0;
      do {
        uVar4 = uVar17 - uVar27;
        bVar29 = uVar27 <= uVar17;
        if (bVar29) {
          uVar24 = uVar24 + 1;
        }
        uVar17 = uVar4;
      } while (bVar29 && uVar4 != 0);
    }
    if (uVar27 < uVar8) goto joined_r0x00138b90;
    if (uVar14 != 0) goto LAB_ram_00138c40;
    goto LAB_ram_00138e6c;
  }
  iVar26 = uVar15 - uVar1;
  if (uVar15 < uVar14) {
LAB_ram_00138770:
    iVar10 = uVar14 - uVar15;
    if (uVar14 == 0) goto LAB_ram_00138814;
  }
  else {
    iVar10 = 0;
    if (uVar14 == 0) {
      iVar10 = 0;
      goto LAB_ram_00138814;
    }
  }
LAB_ram_0013883c:
  uVar17 = iVar9 * 100;
  if (((int)uVar14 < 1) || (0x3e < uVar17)) {
    if (uVar14 == 0) {
      uVar25 = FUN_ram_000f5e64(uVar17,0);
    }
    else {
      uVar25 = uVar17;
      if ((int)uVar17 < 0) {
        uVar25 = ~uVar17;
      }
      iVar12 = LZCOUNT(uVar25) + -1;
      if ((int)uVar17 < 0) {
        iVar12 = -1;
      }
      uVar25 = uVar14;
      if ((int)uVar14 < 0) {
        uVar25 = ~uVar14;
      }
      iVar11 = LZCOUNT(uVar25) + -1;
      if ((int)uVar14 < 0) {
        iVar11 = -1;
      }
      uVar25 = iVar11 - iVar12;
      bVar29 = (int)uVar25 < 0;
      if (bVar29) {
        uVar25 = 0;
      }
      uVar18 = uVar25 + 1;
      uVar22 = uVar14;
      if (!bVar29) {
        uVar22 = uVar14 << (uVar25 & 0x1f);
      }
      uVar25 = 0;
      LP_START = 0x13889c;
      LP_END = 0x1388ac;
      do {
        uVar23 = uVar17 - uVar22;
        if (uVar17 < uVar22) {
          uVar23 = uVar23 + uVar22;
        }
        else {
          uVar25 = uVar25 | 1 << (uVar18 & 0x1f);
        }
        uVar22 = uVar22 >> 1;
        uVar18 = uVar18 - 1;
        uVar17 = uVar23;
      } while (uVar18 != 0);
      uVar25 = uVar25 >> 1 | uVar25 << 0x1f;
    }
  }
  else {
    uVar25 = 0;
    do {
      uVar22 = uVar17 - uVar14;
      bVar29 = uVar14 <= uVar17;
      if (bVar29) {
        uVar25 = uVar25 + 1;
      }
      uVar17 = uVar22;
    } while (bVar29 && uVar22 != 0);
  }
  if (uVar14 == 0) goto LAB_ram_001388d0;
LAB_ram_001388e0:
  uVar17 = iVar7 * 100;
  if (((int)uVar14 < 1) || (0x3e < uVar17)) {
    if (uVar14 == 0) {
      uVar22 = FUN_ram_000f5e64(uVar17,0);
    }
    else {
      uVar22 = uVar17;
      if ((int)uVar17 < 0) {
        uVar22 = ~uVar17;
      }
      iVar12 = LZCOUNT(uVar22) + -1;
      if ((int)uVar17 < 0) {
        iVar12 = -1;
      }
      uVar22 = uVar14;
      if ((int)uVar14 < 0) {
        uVar22 = ~uVar14;
      }
      iVar11 = LZCOUNT(uVar22) + -1;
      if ((int)uVar14 < 0) {
        iVar11 = -1;
      }
      uVar22 = iVar11 - iVar12;
      bVar29 = (int)uVar22 < 0;
      if (bVar29) {
        uVar22 = 0;
      }
      uVar23 = uVar22 + 1;
      uVar18 = uVar14;
      if (!bVar29) {
        uVar18 = uVar14 << (uVar22 & 0x1f);
      }
      uVar22 = 0;
      LP_START = 0x138944;
      LP_END = 0x138954;
      do {
        uVar24 = uVar17 - uVar18;
        if (uVar17 < uVar18) {
          uVar24 = uVar24 + uVar18;
        }
        else {
          uVar22 = uVar22 | 1 << (uVar23 & 0x1f);
        }
        uVar18 = uVar18 >> 1;
        uVar23 = uVar23 - 1;
        uVar17 = uVar24;
      } while (uVar23 != 0);
      uVar22 = uVar22 >> 1 | uVar22 << 0x1f;
    }
  }
  else {
    uVar22 = 0;
    do {
      uVar18 = uVar17 - uVar14;
      bVar29 = uVar14 <= uVar17;
      if (bVar29) {
        uVar22 = uVar22 + 1;
      }
      uVar17 = uVar18;
    } while (bVar29 && uVar18 != 0);
  }
  if (uVar14 == 0) {
    if (uVar27 != 0) goto LAB_ram_00138ac4;
    goto LAB_ram_00138b7c;
  }
  uVar17 = iVar2 * 100;
  if (((int)uVar14 < 1) || (0x3e < uVar17)) {
    if (uVar14 == 0) {
      uVar18 = FUN_ram_000f5e64(uVar17,0);
    }
    else {
      uVar18 = uVar17;
      if ((int)uVar17 < 0) {
        uVar18 = ~uVar17;
      }
      iVar12 = LZCOUNT(uVar18) + -1;
      if ((int)uVar17 < 0) {
        iVar12 = -1;
      }
      uVar18 = uVar14;
      if ((int)uVar14 < 0) {
        uVar18 = ~uVar14;
      }
      iVar11 = LZCOUNT(uVar18) + -1;
      if ((int)uVar14 < 0) {
        iVar11 = -1;
      }
      uVar18 = iVar11 - iVar12;
      bVar29 = (int)uVar18 < 0;
      if (bVar29) {
        uVar18 = 0;
      }
      uVar24 = uVar18 + 1;
      uVar23 = uVar14;
      if (!bVar29) {
        uVar23 = uVar14 << (uVar18 & 0x1f);
      }
      uVar18 = 0;
      LP_START = 0x1389d4;
      LP_END = 0x1389e4;
      do {
        uVar4 = uVar17 - uVar23;
        if (uVar17 < uVar23) {
          uVar4 = uVar4 + uVar23;
        }
        else {
          uVar18 = uVar18 | 1 << (uVar24 & 0x1f);
        }
        uVar23 = uVar23 >> 1;
        uVar24 = uVar24 - 1;
        uVar17 = uVar4;
      } while (uVar24 != 0);
      uVar18 = uVar18 >> 1 | uVar18 << 0x1f;
    }
  }
  else {
    uVar18 = 0;
    do {
      uVar23 = uVar17 - uVar14;
      bVar29 = uVar14 <= uVar17;
      if (bVar29) {
        uVar18 = uVar18 + 1;
      }
      uVar17 = uVar23;
    } while (bVar29 && uVar23 != 0);
  }
LAB_ram_001389fc:
  uVar17 = uVar1 * 100;
  if (((int)uVar14 < 1) || (0x3e < uVar17)) {
    if (uVar14 == 0) {
      uVar23 = FUN_ram_000f5e64(uVar17,0);
    }
    else {
      uVar23 = uVar17;
      if ((int)uVar17 < 0) {
        uVar23 = ~uVar17;
      }
      iVar12 = LZCOUNT(uVar23) + -1;
      if ((int)uVar17 < 0) {
        iVar12 = -1;
      }
      uVar23 = uVar14;
      if ((int)uVar14 < 0) {
        uVar23 = ~uVar14;
      }
      iVar11 = LZCOUNT(uVar23) + -1;
      if ((int)uVar14 < 0) {
        iVar11 = -1;
      }
      uVar23 = iVar11 - iVar12;
      bVar29 = (int)uVar23 < 0;
      if (bVar29) {
        uVar23 = 0;
      }
      uVar4 = uVar23 + 1;
      uVar24 = uVar14;
      if (!bVar29) {
        uVar24 = uVar14 << (uVar23 & 0x1f);
      }
      uVar23 = 0;
      LP_START = 0x138a5c;
      LP_END = 0x138a6c;
      do {
        uVar13 = uVar17 - uVar24;
        if (uVar17 < uVar24) {
          uVar13 = uVar13 + uVar24;
        }
        else {
          uVar23 = uVar23 | 1 << (uVar4 & 0x1f);
        }
        uVar24 = uVar24 >> 1;
        uVar4 = uVar4 - 1;
        uVar17 = uVar13;
      } while (uVar4 != 0);
      uVar23 = uVar23 >> 1 | uVar23 << 0x1f;
    }
  }
  else {
    uVar23 = 0;
    do {
      uVar24 = uVar17 - uVar14;
      bVar29 = uVar14 <= uVar17;
      if (bVar29) {
        uVar23 = uVar23 + 1;
      }
      uVar17 = uVar24;
    } while (bVar29 && uVar24 != 0);
  }
  if (uVar27 == 0) {
    uVar24 = 0;
    if ((uVar8 == 0) || ((uint)(iVar5 * 2) <= uVar6)) goto LAB_ram_00138c38;
LAB_ram_00138d10:
    if (uVar27 == 0) {
LAB_ram_00138e40:
      DAT_ram_800378e0 = 0;
      uVar17 = DAT_ram_800378e0;
    }
    else {
      uVar8 = (iVar3 + uVar6 + iVar26) * 100;
      if (((int)uVar27 < 1) || (0x3e < uVar8)) {
        if (uVar27 == 0) {
          uVar17 = FUN_ram_000f5e64(uVar8,0);
        }
        else {
          uVar17 = uVar8;
          if ((int)uVar8 < 0) {
            uVar17 = ~uVar8;
          }
          iVar5 = LZCOUNT(uVar17) + -1;
          if ((int)uVar8 < 0) {
            iVar5 = -1;
          }
          uVar17 = uVar27;
          if ((int)uVar27 < 0) {
            uVar17 = ~uVar27;
          }
          iVar12 = LZCOUNT(uVar17) + -1;
          if ((int)uVar27 < 0) {
            iVar12 = -1;
          }
          uVar17 = iVar12 - iVar5;
          bVar29 = (int)uVar17 < 0;
          if (bVar29) {
            uVar17 = 0;
          }
          uVar13 = uVar17 + 1;
          uVar4 = uVar27;
          if (!bVar29) {
            uVar4 = uVar27 << (uVar17 & 0x1f);
          }
          uVar17 = 0;
          LP_START = 0x138d80;
          LP_END = 0x138d90;
          do {
            uVar28 = uVar8 - uVar4;
            if (uVar8 < uVar4) {
              uVar28 = uVar28 + uVar4;
            }
            else {
              uVar17 = uVar17 | 1 << (uVar13 & 0x1f);
            }
            uVar4 = uVar4 >> 1;
            uVar13 = uVar13 - 1;
            uVar8 = uVar28;
          } while (uVar13 != 0);
          uVar17 = uVar17 >> 1 | uVar17 << 0x1f;
        }
      }
      else {
        uVar17 = 0;
        do {
          uVar4 = uVar8 - uVar27;
          bVar29 = uVar27 <= uVar8;
          if (bVar29) {
            uVar17 = uVar17 + 1;
          }
          uVar8 = uVar4;
        } while (bVar29 && uVar4 != 0);
      }
      uVar8 = iVar20 * 100;
      if (((int)uVar27 < 1) || (0x3e < uVar8)) {
        if (uVar27 == 0) {
          DAT_ram_800378e0 = FUN_ram_000f5e64(uVar8,0);
        }
        else {
          uVar4 = uVar8;
          if ((int)uVar8 < 0) {
            uVar4 = ~uVar8;
          }
          iVar5 = LZCOUNT(uVar4) + -1;
          if ((int)uVar8 < 0) {
            iVar5 = -1;
          }
          uVar4 = uVar27;
          if ((int)uVar27 < 0) {
            uVar4 = ~uVar27;
          }
          iVar20 = LZCOUNT(uVar4) + -1;
          if ((int)uVar27 < 0) {
            iVar20 = -1;
          }
          uVar4 = iVar20 - iVar5;
          bVar29 = (int)uVar4 < 0;
          if (bVar29) {
            uVar4 = 0;
          }
          uVar28 = uVar4 + 1;
          uVar13 = uVar27;
          if (!bVar29) {
            uVar13 = uVar27 << (uVar4 & 0x1f);
          }
          uVar4 = 0;
          LP_START = 0x138e08;
          LP_END = 0x138e18;
          do {
            uVar21 = uVar8 - uVar13;
            if (uVar8 < uVar13) {
              uVar21 = uVar21 + uVar13;
            }
            else {
              uVar4 = uVar4 | 1 << (uVar28 & 0x1f);
            }
            uVar13 = uVar13 >> 1;
            uVar28 = uVar28 - 1;
            uVar8 = uVar21;
          } while (uVar28 != 0);
          DAT_ram_800378e0 = uVar4 >> 1 | uVar4 << 0x1f;
        }
      }
      else {
        DAT_ram_800378e0 = 0;
        do {
          uVar4 = uVar8 - uVar27;
          bVar29 = uVar27 <= uVar8;
          if (bVar29) {
            DAT_ram_800378e0 = DAT_ram_800378e0 + 1;
          }
          uVar8 = uVar4;
        } while (bVar29 && uVar4 != 0);
      }
    }
  }
  else {
    uVar17 = (uVar16 + iVar10) * 100;
    if (((int)uVar27 < 1) || (0x3e < uVar17)) {
      if (uVar27 == 0) {
        uVar24 = FUN_ram_000f5e64(uVar17,0);
      }
      else {
        uVar24 = uVar17;
        if ((int)uVar17 < 0) {
          uVar24 = ~uVar17;
        }
        iVar12 = LZCOUNT(uVar24) + -1;
        if ((int)uVar17 < 0) {
          iVar12 = -1;
        }
        uVar24 = uVar27;
        if ((int)uVar27 < 0) {
          uVar24 = ~uVar27;
        }
        iVar11 = LZCOUNT(uVar24) + -1;
        if ((int)uVar27 < 0) {
          iVar11 = -1;
        }
        uVar24 = iVar11 - iVar12;
        bVar29 = (int)uVar24 < 0;
        if (bVar29) {
          uVar24 = 0;
        }
        uVar13 = uVar24 + 1;
        uVar4 = uVar27;
        if (!bVar29) {
          uVar4 = uVar27 << (uVar24 & 0x1f);
        }
        uVar24 = 0;
        LP_START = 0x138c08;
        LP_END = 0x138c18;
        do {
          uVar28 = uVar17 - uVar4;
          if (uVar17 < uVar4) {
            uVar28 = uVar28 + uVar4;
          }
          else {
            uVar24 = uVar24 | 1 << (uVar13 & 0x1f);
          }
          uVar4 = uVar4 >> 1;
          uVar13 = uVar13 - 1;
          uVar17 = uVar28;
        } while (uVar13 != 0);
        uVar24 = uVar24 >> 1 | uVar24 << 0x1f;
      }
    }
    else {
      uVar24 = 0;
      do {
        uVar4 = uVar17 - uVar27;
        bVar29 = uVar27 <= uVar17;
        if (bVar29) {
          uVar24 = uVar24 + 1;
        }
        uVar17 = uVar4;
      } while (bVar29 && uVar4 != 0);
    }
    if (uVar27 < uVar8) {
joined_r0x00138b90:
      if (uVar6 < (uint)(iVar5 * 2)) goto LAB_ram_00138d10;
    }
LAB_ram_00138c38:
    if (uVar14 == 0) {
LAB_ram_00138e6c:
      uVar17 = 0;
      if (uVar14 == 0) goto LAB_ram_00138e40;
    }
    else {
LAB_ram_00138c40:
      uVar8 = (uVar14 - iVar20) * 100;
      if (((int)uVar14 < 1) || (0x3e < uVar8)) {
        if (uVar14 == 0) {
          uVar17 = FUN_ram_000f5e64(uVar8,0);
        }
        else {
          uVar17 = uVar8;
          if ((int)uVar8 < 0) {
            uVar17 = ~uVar8;
          }
          iVar5 = LZCOUNT(uVar17) + -1;
          if ((int)uVar8 < 0) {
            iVar5 = -1;
          }
          uVar17 = uVar14;
          if ((int)uVar14 < 0) {
            uVar17 = ~uVar14;
          }
          iVar12 = LZCOUNT(uVar17) + -1;
          if ((int)uVar14 < 0) {
            iVar12 = -1;
          }
          uVar17 = iVar12 - iVar5;
          bVar29 = (int)uVar17 < 0;
          if (bVar29) {
            uVar17 = 0;
          }
          uVar13 = uVar17 + 1;
          uVar4 = uVar14;
          if (!bVar29) {
            uVar4 = uVar14 << (uVar17 & 0x1f);
          }
          uVar17 = 0;
          LP_START = 0x138ca0;
          LP_END = 0x138cb0;
          do {
            uVar28 = uVar8 - uVar4;
            if (uVar8 < uVar4) {
              uVar28 = uVar28 + uVar4;
            }
            else {
              uVar17 = uVar17 | 1 << (uVar13 & 0x1f);
            }
            uVar4 = uVar4 >> 1;
            uVar13 = uVar13 - 1;
            uVar8 = uVar28;
          } while (uVar13 != 0);
          uVar17 = uVar17 >> 1 | uVar17 << 0x1f;
        }
      }
      else {
        uVar17 = 0;
        do {
          uVar4 = uVar8 - uVar14;
          bVar29 = uVar14 <= uVar8;
          if (bVar29) {
            uVar17 = uVar17 + 1;
          }
          uVar8 = uVar4;
        } while (bVar29 && uVar4 != 0);
      }
      if (uVar17 <= uVar24) goto LAB_ram_00138e6c;
      uVar17 = uVar17 - uVar24;
      if (uVar14 == 0) {
        DAT_ram_800378e0 = 0;
        goto LAB_ram_00138ef4;
      }
    }
    uVar8 = iVar20 * 100;
    if (((int)uVar14 < 1) || (0x3e < uVar8)) {
      if (uVar14 == 0) {
        DAT_ram_800378e0 = FUN_ram_000f5e64(uVar8,0);
      }
      else {
        uVar4 = uVar8;
        if ((int)uVar8 < 0) {
          uVar4 = ~uVar8;
        }
        iVar5 = LZCOUNT(uVar4) + -1;
        if ((int)uVar8 < 0) {
          iVar5 = -1;
        }
        uVar4 = uVar14;
        if ((int)uVar14 < 0) {
          uVar4 = ~uVar14;
        }
        iVar20 = LZCOUNT(uVar4) + -1;
        if ((int)uVar14 < 0) {
          iVar20 = -1;
        }
        uVar4 = iVar20 - iVar5;
        bVar29 = (int)uVar4 < 0;
        if (bVar29) {
          uVar4 = 0;
        }
        uVar28 = uVar4 + 1;
        uVar13 = uVar14;
        if (!bVar29) {
          uVar13 = uVar14 << (uVar4 & 0x1f);
        }
        uVar4 = 0;
        LP_START = 0x138ecc;
        LP_END = 0x138edc;
        do {
          uVar21 = uVar8 - uVar13;
          if (uVar8 < uVar13) {
            uVar21 = uVar21 + uVar13;
          }
          else {
            uVar4 = uVar4 | 1 << (uVar28 & 0x1f);
          }
          uVar13 = uVar13 >> 1;
          uVar28 = uVar28 - 1;
          uVar8 = uVar21;
        } while (uVar28 != 0);
        DAT_ram_800378e0 = uVar4 >> 1 | uVar4 << 0x1f;
      }
    }
    else {
      DAT_ram_800378e0 = 0;
      do {
        uVar4 = uVar8 - uVar14;
        bVar29 = uVar14 <= uVar8;
        if (bVar29) {
          DAT_ram_800378e0 = DAT_ram_800378e0 + 1;
        }
        uVar8 = uVar4;
      } while (bVar29 && uVar4 != 0);
    }
  }
LAB_ram_00138ef4:
  DAT_ram_0020fcfc = iVar9;
  DAT_ram_0020fd00 = iVar7;
  DAT_ram_0020fd08 = uVar15;
  DAT_ram_0020fd04 = iVar2;
  DAT_ram_0020fd0c = uVar14;
  DAT_ram_0020fd10 = iVar3;
  DAT_ram_0020fd14 = uVar6;
  DAT_ram_0020fd18 = uVar27;
  DAT_ram_0020fd20 = iVar26;
  DAT_ram_0020fd1c = uVar1;
  DAT_ram_0020fd24 = iVar10;
  DAT_ram_0020fd28 = uVar16;
  DAT_ram_0020fd2c = uVar19;
  DAT_ram_0020fd34 = uVar22;
  if (uVar25 < 100) {
    DAT_ram_0020fd30 = uVar25;
    if (99 < uVar22) {
      DAT_ram_0020fd34 = 100;
    }
joined_r0x00138f64:
    if (99 < uVar18) goto joined_r0x00139044;
joined_r0x00138f70:
    DAT_ram_0020fd38 = uVar18;
    if (uVar23 < 100) goto joined_r0x00139000;
joined_r0x00138f80:
    DAT_ram_0020fd3c = 100;
    DAT_ram_0020fd38 = uVar18;
    if (99 < uVar17) {
      DAT_ram_0020fd3c = 100;
joined_r0x001390c4:
      DAT_ram_0020fd40 = 100;
      if (99 < DAT_ram_800378e0) {
        if (uVar24 < 100) {
          DAT_ram_0020fd40 = 100;
          DAT_ram_0020fd44 = 100;
          DAT_ram_0020fd48 = uVar24;
          DAT_ram_800378cc = DAT_ram_0020fd30;
          DAT_ram_800378d0 = DAT_ram_0020fd34;
          DAT_ram_800378d4 = DAT_ram_0020fd38;
          DAT_ram_800378d8 = DAT_ram_0020fd3c;
          DAT_ram_800378dc = 100;
          DAT_ram_800378e0 = 100;
          DAT_ram_800378e4 = uVar24;
          return;
        }
        DAT_ram_0020fd40 = 100;
        DAT_ram_0020fd44 = 100;
        DAT_ram_0020fd48 = 100;
        DAT_ram_800378cc = DAT_ram_0020fd30;
        DAT_ram_800378d0 = DAT_ram_0020fd34;
        DAT_ram_800378d4 = DAT_ram_0020fd38;
        DAT_ram_800378d8 = DAT_ram_0020fd3c;
        DAT_ram_800378dc = 100;
        DAT_ram_800378e0 = 100;
        DAT_ram_800378e4 = 100;
        return;
      }
      goto LAB_ram_001390d0;
    }
  }
  else {
    DAT_ram_0020fd30 = 100;
    if (uVar22 < 100) goto joined_r0x00138f64;
    DAT_ram_0020fd34 = 100;
    if (uVar18 < 100) goto joined_r0x00138f70;
joined_r0x00139044:
    uVar18 = 100;
    if (99 < uVar23) goto joined_r0x00138f80;
    DAT_ram_0020fd38 = 100;
joined_r0x00139000:
    DAT_ram_0020fd3c = uVar23;
    if (99 < uVar17) goto joined_r0x001390c4;
  }
  DAT_ram_0020fd40 = uVar17;
  if (99 < DAT_ram_800378e0) {
    if (uVar24 < 100) {
      DAT_ram_0020fd44 = 100;
      DAT_ram_0020fd48 = uVar24;
      DAT_ram_800378cc = DAT_ram_0020fd30;
      DAT_ram_800378d0 = DAT_ram_0020fd34;
      DAT_ram_800378d4 = DAT_ram_0020fd38;
      DAT_ram_800378d8 = DAT_ram_0020fd3c;
      DAT_ram_800378dc = uVar17;
      DAT_ram_800378e0 = 100;
      DAT_ram_800378e4 = uVar24;
      return;
    }
    DAT_ram_0020fd44 = 100;
    DAT_ram_0020fd48 = 100;
    DAT_ram_800378cc = DAT_ram_0020fd30;
    DAT_ram_800378d0 = DAT_ram_0020fd34;
    DAT_ram_800378d4 = DAT_ram_0020fd38;
    DAT_ram_800378d8 = DAT_ram_0020fd3c;
    DAT_ram_800378dc = uVar17;
    DAT_ram_800378e0 = 100;
    DAT_ram_800378e4 = 100;
    return;
  }
LAB_ram_001390d0:
  if (99 < uVar24) {
    uVar24 = 100;
  }
  DAT_ram_0020fd48 = uVar24;
  DAT_ram_800378cc = DAT_ram_0020fd30;
  DAT_ram_800378d0 = DAT_ram_0020fd34;
  DAT_ram_800378d4 = DAT_ram_0020fd38;
  DAT_ram_800378d8 = DAT_ram_0020fd3c;
  DAT_ram_800378dc = DAT_ram_0020fd40;
  DAT_ram_800378e4 = uVar24;
  DAT_ram_0020fd44 = DAT_ram_800378e0;
  return;
}


