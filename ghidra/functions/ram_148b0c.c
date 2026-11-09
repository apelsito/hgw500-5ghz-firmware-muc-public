/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00148b0c */

/* WARNING: Removing unreachable block (ram,0x00148d58) */
/* WARNING: Removing unreachable block (ram,0x00148d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00148b0c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  iVar9 = 0;
  FUN_ram_000e7d50(param_1 + 0x3884);
  iVar1 = *(int *)(param_1 + 0x388c);
  if (iVar1 == 0) {
    uVar12 = 0;
    iVar10 = 0;
  }
  else {
    uVar12 = 0;
    iVar10 = 0;
    do {
      uVar12 = uVar12 + *(int *)(iVar1 + 0x7b4);
      if ((DAT_ram_8002c86c & 2) != 0) {
        iVar10 = iVar10 + *(int *)(iVar1 + 0x7c4);
        iVar9 = iVar9 + *(int *)(iVar1 + 0x7bc);
      }
      iVar1 = *(int *)(iVar1 + 0x114);
    } while (iVar1 != 0);
  }
  FUN_ram_000e7da8(param_1 + 0x3884);
  uVar3 = DAT_ram_8002c8a8;
  uVar6 = DAT_ram_8002c8a4;
  iVar1 = DAT_ram_8002c8a0;
  uVar2 = DAT_ram_8002c898;
  uVar7 = DAT_ram_8002c894;
  uVar12 = uVar12 / 1000;
  DAT_ram_8002c880 = FUN_ram_001489fc(uVar12);
  iVar11 = 0;
  uVar13 = uVar12 * 0x93 >> 7;
  uVar8 = DAT_ram_8002c86c & 2;
  if (uVar7 < uVar2) {
    uVar7 = uVar2 - uVar7 >> 2;
    if ((uVar6 * 100 <= uVar3) || (uVar6 <= (uint)(iVar1 * 2))) goto LAB_ram_00148cdc;
  }
  else {
    if ((uVar6 * 100 <= uVar3) || (uVar6 <= (uint)(iVar1 * 2))) {
      uVar7 = 0;
      goto LAB_ram_00148cdc;
    }
    uVar7 = 0;
  }
  if (uVar2 != 0) {
    uVar3 = DAT_ram_8002c880 * uVar3;
    if (((int)uVar2 < 1) || (0x3e < uVar3)) {
      if (uVar2 == 0) {
        DAT_ram_8002c880 = FUN_ram_000f5e64(uVar3,0);
      }
      else {
        uVar6 = uVar3;
        if ((int)uVar3 < 0) {
          uVar6 = ~uVar3;
        }
        iVar1 = LZCOUNT(uVar6) + -1;
        if ((int)uVar3 < 0) {
          iVar1 = -1;
        }
        uVar6 = uVar2;
        if ((int)uVar2 < 0) {
          uVar6 = ~uVar2;
        }
        iVar5 = LZCOUNT(uVar6) + -1;
        if ((int)uVar2 < 0) {
          iVar5 = -1;
        }
        uVar6 = iVar5 - iVar1;
        bVar15 = (int)uVar6 < 0;
        if (bVar15) {
          uVar6 = 0;
        }
        uVar14 = uVar6 + 1;
        if (!bVar15) {
          uVar2 = uVar2 << (uVar6 & 0x1f);
        }
        uVar6 = 0;
        LP_START = 0x148cb0;
        LP_END = 0x148cc0;
        do {
          uVar4 = uVar3 - uVar2;
          if (uVar3 < uVar2) {
            uVar4 = uVar4 + uVar2;
          }
          else {
            uVar6 = uVar6 | 1 << (uVar14 & 0x1f);
          }
          uVar2 = uVar2 >> 1;
          uVar14 = uVar14 - 1;
          uVar3 = uVar4;
        } while (uVar14 != 0);
        DAT_ram_8002c880 = uVar6 >> 1 | uVar6 << 0x1f;
      }
    }
    else {
      DAT_ram_8002c880 = 0;
      do {
        uVar6 = uVar3 - uVar2;
        bVar15 = uVar2 <= uVar3;
        if (bVar15) {
          DAT_ram_8002c880 = DAT_ram_8002c880 + 1;
        }
        uVar3 = uVar6;
      } while (bVar15 && uVar6 != 0);
    }
  }
LAB_ram_00148cdc:
  if (uVar8 == 0) {
    uVar12 = 0;
    uVar3 = DAT_ram_8002c880;
  }
  else {
    FUN_ram_000ee260(s_VSPNOD__T__d_b__d__R__d_b__d__I___ram_001c5fa8,uVar7,iVar10,uVar12,iVar9,
                     DAT_ram_8002c880);
    uVar12 = DAT_ram_8002c86c & 2;
    uVar3 = DAT_ram_8002c880;
  }
  DAT_ram_8002c880 = uVar3;
  if (DAT_ram_8002c874 == 0) {
    uVar2 = DAT_ram_8002c878 * (uVar7 + uVar13);
  }
  else {
    uVar7 = uVar7 + uVar13;
    if (((int)DAT_ram_8002c878 < 1) || (0x3e < uVar7)) {
      if (DAT_ram_8002c878 == 0) {
        uVar2 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar2 = DAT_ram_8002c878;
        if ((int)DAT_ram_8002c878 < 0) {
          uVar2 = ~DAT_ram_8002c878;
        }
        iVar1 = LZCOUNT(uVar2) + -1;
        if ((int)DAT_ram_8002c878 < 0) {
          iVar1 = -1;
        }
        uVar2 = iVar1 - (LZCOUNT(uVar7) + -1);
        bVar15 = (int)uVar2 < 0;
        if (bVar15) {
          uVar2 = 0;
        }
        uVar8 = uVar2 + 1;
        uVar6 = DAT_ram_8002c878;
        if (!bVar15) {
          uVar6 = DAT_ram_8002c878 << (uVar2 & 0x1f);
        }
        uVar2 = 0;
        LP_START = 0x148d88;
        LP_END = 0x148d98;
        do {
          uVar13 = uVar7 - uVar6;
          if (uVar7 < uVar6) {
            uVar13 = uVar13 + uVar6;
          }
          else {
            uVar2 = uVar2 | 1 << (uVar8 & 0x1f);
          }
          uVar6 = uVar6 >> 1;
          uVar8 = uVar8 - 1;
          uVar7 = uVar13;
        } while (uVar8 != 0);
        uVar2 = uVar2 >> 1 | uVar2 << 0x1f;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar6 = uVar7 - DAT_ram_8002c878;
        bVar15 = DAT_ram_8002c878 <= uVar7;
        if (bVar15) {
          uVar2 = uVar2 + 1;
        }
        uVar7 = uVar6;
      } while (bVar15 && uVar6 != 0);
    }
  }
  if (uVar2 + uVar3 < 0x3e9) {
    iVar11 = 1000 - (uVar2 + uVar3);
  }
  DAT_ram_8002c87c = iVar11;
  if (uVar12 != 0) {
    FUN_ram_000ee260(s_VSPNOD__FAT__d_ram_001c5fcc,iVar11);
    uVar3 = DAT_ram_8002c880;
  }
  DAT_ram_6003b408 = DAT_ram_8002c87c;
  DAT_ram_6003b40c = uVar3;
  _DAT_ram_e000002c = 0x20002000;
  sync();
  return 0x20002000;
}


