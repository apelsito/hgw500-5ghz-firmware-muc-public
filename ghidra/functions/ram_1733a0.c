/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001733a0 */

/* WARNING: Removing unreachable block (ram,0x00173402) */
/* WARNING: Removing unreachable block (ram,0x00173476) */
/* WARNING: Removing unreachable block (ram,0x00173478) */
/* WARNING: Removing unreachable block (ram,0x00173404) */
/* WARNING: Removing unreachable block (ram,0x0017340a) */
/* WARNING: Removing unreachable block (ram,0x0017347e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001733a0(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  uVar3 = 0x80 - param_2;
  if ((int)param_2 < 0x81) {
    uVar3 = param_2;
  }
  bVar15 = (int)uVar3 < 0;
  if (bVar15) {
    uVar3 = -uVar3;
  }
  uVar9 = (uint)bVar15;
  uVar1 = param_1;
  if ((int)param_1 < 2) {
    if (uVar3 == 0) {
      uVar2 = FUN_ram_000f5e6c(0x100,0);
      uVar1 = uVar2;
    }
    else {
      uVar2 = uVar3;
      if ((int)uVar3 < 0) {
        uVar2 = -uVar3;
      }
      uVar5 = uVar2;
      if ((int)uVar2 < 0) {
        uVar5 = ~uVar2;
      }
      iVar11 = LZCOUNT(uVar5) + -1;
      if ((int)uVar2 < 0) {
        iVar11 = -1;
      }
      uVar5 = iVar11 - 0x16;
      bVar15 = (int)uVar5 < 0;
      if (bVar15) {
        uVar5 = 0;
      }
      uVar14 = uVar5 + 1;
      if (!bVar15) {
        uVar2 = uVar2 << (uVar5 & 0x1f);
      }
      uVar5 = 0;
      LP_START = 0x1734a4;
      LP_END = 0x1734b4;
      uVar13 = 0x100;
      do {
        uVar12 = uVar13 - uVar2;
        if (uVar13 < uVar2) {
          uVar12 = uVar12 + uVar2;
        }
        else {
          uVar5 = uVar5 | 1 << (uVar14 & 0x1f);
        }
        uVar2 = uVar2 >> 1;
        uVar14 = uVar14 - 1;
        uVar13 = uVar12;
      } while (uVar14 != 0);
      uVar2 = uVar5 >> 1 | uVar5 << 0x1f;
      if ((int)(uVar3 ^ 0x100) < 0) {
        uVar2 = -uVar2;
      }
    }
  }
  else if (uVar3 == 0) {
    uVar2 = FUN_ram_000f5e6c(0xa0,0);
    uVar1 = uVar2;
  }
  else {
    uVar2 = uVar3;
    if ((int)uVar3 < 0) {
      uVar2 = -uVar3;
    }
    uVar5 = uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = ~uVar2;
    }
    iVar11 = LZCOUNT(uVar5) + -1;
    if ((int)uVar2 < 0) {
      iVar11 = -1;
    }
    uVar5 = iVar11 - 0x17;
    bVar15 = (int)uVar5 < 0;
    if (bVar15) {
      uVar5 = 0;
    }
    uVar14 = uVar5 + 1;
    if (!bVar15) {
      uVar2 = uVar2 << (uVar5 & 0x1f);
    }
    uVar5 = 0;
    LP_START = 0x173430;
    LP_END = 0x173440;
    uVar13 = 0xa0;
    do {
      uVar12 = uVar13 - uVar2;
      if (uVar13 < uVar2) {
        uVar12 = uVar12 + uVar2;
      }
      else {
        uVar5 = uVar5 | 1 << (uVar14 & 0x1f);
      }
      uVar2 = uVar2 >> 1;
      uVar14 = uVar14 - 1;
      uVar13 = uVar12;
    } while (uVar14 != 0);
    uVar2 = uVar5 >> 1 | uVar5 << 0x1f;
    if ((int)(uVar3 ^ 0xa0) < 0) {
      uVar2 = -uVar2;
    }
  }
  _DAT_ram_e6091044 = uVar2 - 1;
  _DAT_ram_e609104c = 1;
  _DAT_ram_e6091058 = 1;
  _DAT_ram_e6091048 = 1;
  _DAT_ram_e6091050 = 0;
  iVar11 = param_1 * 0x200;
  if ((int)param_1 < 2) {
    uVar2 = 0;
    uVar9 = uVar9 * 0x80 + 0x40;
    piVar6 = (int *)&DAT_ram_e60a5000;
    do {
      if (param_3 != 0) {
        uVar1 = uVar9;
      }
      if (param_3 == 0) {
        uVar1 = uVar2;
      }
      uVar9 = uVar9 + uVar3;
      *piVar6 = (uint)*(ushort *)
                       ((int)&PTR_DAT_ram_00240000_ram_001aad90 + param_1 * 0x200 + uVar1 * 2) *
                0x1000 + (uint)*(ushort *)((int)&PTR_DAT_ram_00240000_ram_001aad90 + iVar11);
      if (0xff < (int)uVar9) {
        uVar9 = uVar9 - 0x100;
      }
      uVar2 = uVar2 + uVar3;
      iVar11 = iVar11 + uVar3 * 2;
      piVar6 = piVar6 + 1;
    } while ((int)uVar2 < 0x100);
  }
  else {
    iVar4 = 0;
    iVar10 = uVar9 * 0x50 + 0x28;
    piVar6 = (int *)&DAT_ram_e60a5000;
    iVar7 = iVar11;
    do {
      iVar8 = iVar10;
      if (param_3 == 0) {
        iVar8 = iVar4;
      }
      iVar10 = iVar10 + uVar3;
      *piVar6 = (uint)*(ushort *)((int)&PTR_DAT_ram_00240000_ram_001aad90 + iVar7) +
                (uint)*(ushort *)((int)&PTR_DAT_ram_00240000_ram_001aad90 + iVar11 + iVar8 * 2) *
                0x1000;
      if (0x9f < iVar10) {
        iVar10 = iVar10 + -0xa0;
      }
      iVar4 = iVar4 + uVar3;
      iVar7 = iVar7 + uVar3 * 2;
      piVar6 = piVar6 + 1;
    } while (iVar4 < 0xa0);
  }
  return;
}


