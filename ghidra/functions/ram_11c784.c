/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c784 */

/* WARNING: Removing unreachable block (ram,0x0011c7ee) */
/* WARNING: Removing unreachable block (ram,0x0011c7f2) */
/* WARNING: Removing unreachable block (ram,0x0011c7f6) */

uint FUN_ram_0011c784(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar8 = (uint)DAT_ram_8002c8e8;
  if ((uVar8 == 1) || (uVar8 == 0)) {
    if (param_2 < 0x12) {
      return 0;
    }
    uVar6 = 2;
  }
  else {
    if (param_2 < 0x12) {
      return 0;
    }
    uVar6 = 1;
  }
  uVar3 = param_2 - 0x11;
  if ((uVar6 == 0) || (0x3e < uVar3)) {
    if (uVar6 == 0) {
      uVar7 = FUN_ram_000f5e6c(uVar3,0);
    }
    else {
      uVar5 = uVar3 ^ uVar6;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      uVar7 = uVar3;
      if ((int)uVar3 < 0) {
        uVar7 = ~uVar3;
      }
      iVar2 = LZCOUNT(uVar7) + -1;
      if ((int)uVar3 < 0) {
        iVar2 = -1;
      }
      uVar7 = (LZCOUNT(uVar6) + -1) - iVar2;
      bVar10 = (int)uVar7 < 0;
      if (bVar10) {
        uVar7 = 0;
      }
      uVar9 = uVar7 + 1;
      if (!bVar10) {
        uVar6 = uVar6 << (uVar7 & 0x1f);
      }
      uVar7 = 0;
      LP_START = 0x11c810;
      LP_END = 0x11c820;
      do {
        uVar4 = uVar3 - uVar6;
        if (uVar3 < uVar6) {
          uVar4 = uVar4 + uVar6;
        }
        else {
          uVar7 = uVar7 | 1 << (uVar9 & 0x1f);
        }
        uVar6 = uVar6 >> 1;
        uVar9 = uVar9 - 1;
        uVar3 = uVar4;
      } while (uVar9 != 0);
      uVar7 = uVar7 >> 1;
      if ((int)uVar5 < 0) {
        uVar7 = -uVar7;
      }
    }
  }
  else {
    uVar7 = 0;
    do {
      uVar5 = uVar3 - uVar6;
      bVar10 = uVar6 <= uVar3;
      if (bVar10) {
        uVar7 = uVar7 + 1;
      }
      uVar3 = uVar5;
    } while (bVar10 && uVar5 != 0);
  }
  bVar1 = (&DAT_ram_0018c16c)[uVar8];
  iVar2 = FUN_ram_0011bca8(param_1);
  uVar8 = (uint)bVar1 - iVar2 & 0xff;
  if ((uVar7 & 0xff) < uVar8) {
    return uVar7 & 0xff;
  }
  return uVar8;
}


