/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00148474 */

/* WARNING: Removing unreachable block (ram,0x00148622) */
/* WARNING: Removing unreachable block (ram,0x00148628) */
/* WARNING: Removing unreachable block (ram,0x001485ca) */
/* WARNING: Removing unreachable block (ram,0x001485ce) */
/* WARNING: Type propagation algorithm not settling */

void FUN_ram_00148474(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  uVar13 = *(uint *)(param_1 + 0x7c0);
  uVar9 = (uint)(DAT_ram_8002c898 - DAT_ram_8002c894) >> 2;
  if (DAT_ram_8002c8ac == 0) {
    uVar11 = *(uint *)(param_1 + 0x7c4);
    uVar3 = uVar13;
  }
  else {
    if (((int)DAT_ram_8002c8ac < 1) || (0x3e < uVar13)) {
      if (DAT_ram_8002c8ac == 0) {
        uVar3 = FUN_ram_000f5e64(uVar13,0);
      }
      else {
        uVar3 = uVar13;
        if ((int)uVar13 < 0) {
          uVar3 = ~uVar13;
        }
        iVar7 = LZCOUNT(uVar3) + -1;
        if ((int)uVar13 < 0) {
          iVar7 = -1;
        }
        uVar3 = DAT_ram_8002c8ac;
        if ((int)DAT_ram_8002c8ac < 0) {
          uVar3 = ~DAT_ram_8002c8ac;
        }
        iVar6 = LZCOUNT(uVar3) + -1;
        if ((int)DAT_ram_8002c8ac < 0) {
          iVar6 = -1;
        }
        uVar3 = iVar6 - iVar7;
        bVar15 = (int)uVar3 < 0;
        if (bVar15) {
          uVar3 = 0;
        }
        uVar10 = uVar3 + 1;
        uVar11 = DAT_ram_8002c8ac;
        if (!bVar15) {
          uVar11 = DAT_ram_8002c8ac << (uVar3 & 0x1f);
        }
        uVar3 = 0;
        LP_START = 0x148520;
        LP_END = 0x148530;
        uVar12 = uVar13;
        do {
          uVar2 = uVar12 - uVar11;
          if (uVar12 < uVar11) {
            uVar2 = uVar2 + uVar11;
          }
          else {
            uVar3 = uVar3 | 1 << (uVar10 & 0x1f);
          }
          uVar11 = uVar11 >> 1;
          uVar10 = uVar10 - 1;
          uVar12 = uVar2;
        } while (uVar10 != 0);
        uVar3 = uVar3 >> 1 | uVar3 << 0x1f;
      }
    }
    else {
      uVar3 = 0;
      uVar11 = uVar13;
      do {
        uVar10 = uVar11 - DAT_ram_8002c8ac;
        bVar15 = DAT_ram_8002c8ac <= uVar11;
        if (bVar15) {
          uVar3 = uVar3 + 1;
        }
        uVar11 = uVar10;
      } while (bVar15 && uVar10 != 0);
    }
    uVar3 = uVar3 * uVar9;
    uVar11 = *(uint *)(param_1 + 0x7c4);
  }
  uVar3 = uVar3 / 1000;
  if (((uVar3 == 0) || (uVar11 < uVar3)) || (uVar11 < (uint)(DAT_ram_0018c234 * DAT_ram_8002c870)))
  {
    uVar10 = 0;
  }
  else {
    if ((uVar3 == 0) || (0x3e < uVar11)) {
      if (uVar3 == 0) {
        uVar10 = FUN_ram_000f5e64(uVar11,0);
      }
      else {
        uVar10 = uVar11;
        if ((int)uVar11 < 0) {
          uVar10 = ~uVar11;
        }
        iVar7 = LZCOUNT(uVar10) + -1;
        if ((int)uVar11 < 0) {
          iVar7 = -1;
        }
        uVar10 = (LZCOUNT(uVar3) + -1) - iVar7;
        bVar15 = (int)uVar10 < 0;
        if (bVar15) {
          uVar10 = 0;
        }
        uVar2 = uVar10 + 1;
        uVar12 = uVar3;
        if (!bVar15) {
          uVar12 = uVar3 << (uVar10 & 0x1f);
        }
        uVar10 = 0;
        LP_START = 0x1485ec;
        LP_END = 0x1485fc;
        uVar8 = uVar11;
        do {
          uVar14 = uVar8 - uVar12;
          if (uVar8 < uVar12) {
            uVar14 = uVar14 + uVar12;
          }
          else {
            uVar10 = uVar10 | 1 << (uVar2 & 0x1f);
          }
          uVar12 = uVar12 >> 1;
          uVar2 = uVar2 - 1;
          uVar8 = uVar14;
        } while (uVar2 != 0);
        uVar10 = uVar10 >> 1 | uVar10 << 0x1f;
      }
    }
    else {
      uVar10 = 0;
      uVar12 = uVar11;
      do {
        uVar2 = uVar12 - uVar3;
        bVar15 = uVar3 <= uVar12;
        if (bVar15) {
          uVar10 = uVar10 + 1;
        }
        uVar12 = uVar2;
      } while (bVar15 && uVar2 != 0);
    }
    if (uVar10 == 0) {
      uVar10 = FUN_ram_000f5e64(0x800000);
    }
    else {
      uVar12 = uVar10;
      if ((int)uVar10 < 0) {
        uVar12 = ~uVar10;
      }
      iVar7 = LZCOUNT(uVar12) + -1;
      if ((int)uVar10 < 0) {
        iVar7 = -1;
      }
      uVar12 = iVar7 - 7;
      bVar15 = (int)uVar12 < 0;
      if (bVar15) {
        uVar12 = 0;
      }
      uVar2 = uVar12 + 1;
      if (!bVar15) {
        uVar10 = uVar10 << (uVar12 & 0x1f);
      }
      uVar12 = 0;
      LP_START = 0x14864c;
      LP_END = 0x14865c;
      uVar8 = 0x800000;
      do {
        uVar14 = uVar8 - uVar10;
        if (uVar8 < uVar10) {
          uVar14 = uVar14 + uVar10;
        }
        else {
          uVar12 = uVar12 | 1 << (uVar2 & 0x1f);
        }
        uVar10 = uVar10 >> 1;
        uVar2 = uVar2 - 1;
        uVar8 = uVar14;
      } while (uVar2 != 0);
      uVar10 = uVar12 >> 1 | uVar12 << 0x1f;
    }
  }
  uVar12 = (uint)*(byte *)(param_1 + 0x458);
  if (DAT_ram_8002c874 == 0) {
    if ((undefined1 *)(DAT_ram_8002c878 * uVar11) < &LAB_ram_000f4240) {
      uVar12 = uVar12 | 0x10;
      *(char *)(param_1 + 0x458) = (char)uVar12;
    }
    else {
      uVar12 = uVar12 & 0xffffffef;
      *(char *)(param_1 + 0x458) = (char)uVar12;
    }
  }
  else {
    if (((int)DAT_ram_8002c878 < 1) || (0x3e < uVar11)) {
      if (DAT_ram_8002c878 == 0) {
        puVar1 = (undefined1 *)FUN_ram_000f5e64(uVar11,0);
      }
      else {
        uVar2 = uVar11;
        if ((int)uVar11 < 0) {
          uVar2 = ~uVar11;
        }
        iVar7 = LZCOUNT(uVar2) + -1;
        if ((int)uVar11 < 0) {
          iVar7 = -1;
        }
        uVar2 = DAT_ram_8002c878;
        if ((int)DAT_ram_8002c878 < 0) {
          uVar2 = ~DAT_ram_8002c878;
        }
        iVar6 = LZCOUNT(uVar2) + -1;
        if ((int)DAT_ram_8002c878 < 0) {
          iVar6 = -1;
        }
        uVar2 = iVar6 - iVar7;
        bVar15 = (int)uVar2 < 0;
        if (bVar15) {
          uVar2 = 0;
        }
        uVar14 = uVar2 + 1;
        uVar8 = DAT_ram_8002c878;
        if (!bVar15) {
          uVar8 = DAT_ram_8002c878 << (uVar2 & 0x1f);
        }
        uVar2 = 0;
        LP_START = 0x1486e4;
        LP_END = 0x1486f4;
        uVar4 = uVar11;
        do {
          uVar5 = uVar4 - uVar8;
          if (uVar4 < uVar8) {
            uVar5 = uVar5 + uVar8;
          }
          else {
            uVar2 = uVar2 | 1 << (uVar14 & 0x1f);
          }
          uVar8 = uVar8 >> 1;
          uVar14 = uVar14 - 1;
          uVar4 = uVar5;
        } while (uVar14 != 0);
        puVar1 = (undefined1 *)(uVar2 >> 1 | uVar2 << 0x1f);
      }
    }
    else {
      puVar1 = (undefined1 *)0x0;
      uVar2 = uVar11;
      do {
        uVar8 = uVar2 - DAT_ram_8002c878;
        bVar15 = DAT_ram_8002c878 <= uVar2;
        if (bVar15) {
          puVar1 = puVar1 + 1;
        }
        uVar2 = uVar8;
      } while (bVar15 && uVar8 != 0);
    }
    if (puVar1 < &LAB_ram_000f4240) {
      uVar12 = uVar12 | 0x10;
      *(char *)(param_1 + 0x458) = (char)uVar12;
    }
    else {
      uVar12 = uVar12 & 0xffffffef;
      *(char *)(param_1 + 0x458) = (char)uVar12;
    }
  }
  if ((DAT_ram_8002c86c & 4) != 0) {
    FUN_ram_000ee260(s_VSPNOD__tx__pM_b__u_ms__u_msps___ram_001c5ef0,param_1 + 0x96,uVar11,
                     uVar13 / 1000,uVar10,DAT_ram_8002c8ac,uVar9,uVar3,DAT_ram_8002c898,
                     DAT_ram_8002c894,uVar12 >> 4 & 1);
  }
  if (uVar10 != 0) {
    *(uint *)(*(int *)(param_1 + 0x388) + 0x14) = uVar10;
  }
  return;
}


