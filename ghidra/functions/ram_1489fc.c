/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001489fc */

uint FUN_ram_001489fc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar1 = DAT_ram_8002c890;
  if (param_1 < DAT_ram_8002c890 >> 2) {
    uVar2 = (DAT_ram_8002c890 >> 2) - param_1;
    if (DAT_ram_8002c874 == 0) {
      uVar7 = DAT_ram_8002c878 * uVar2;
    }
    else if (((int)DAT_ram_8002c878 < 1) || (0x3e < uVar2)) {
      if (DAT_ram_8002c878 == 0) {
        uVar7 = FUN_ram_000f5e64(uVar2,0);
      }
      else {
        uVar7 = uVar2;
        if ((int)uVar2 < 0) {
          uVar7 = ~uVar2;
        }
        iVar6 = LZCOUNT(uVar7) + -1;
        if ((int)uVar2 < 0) {
          iVar6 = -1;
        }
        uVar7 = DAT_ram_8002c878;
        if ((int)DAT_ram_8002c878 < 0) {
          uVar7 = ~DAT_ram_8002c878;
        }
        iVar5 = LZCOUNT(uVar7) + -1;
        if ((int)DAT_ram_8002c878 < 0) {
          iVar5 = -1;
        }
        uVar7 = iVar5 - iVar6;
        bVar9 = (int)uVar7 < 0;
        if (bVar9) {
          uVar7 = 0;
        }
        uVar8 = uVar7 + 1;
        uVar4 = DAT_ram_8002c878;
        if (!bVar9) {
          uVar4 = DAT_ram_8002c878 << (uVar7 & 0x1f);
        }
        uVar7 = 0;
        LP_START = 0x148a88;
        LP_END = 0x148a98;
        do {
          uVar3 = uVar2 - uVar4;
          if (uVar2 < uVar4) {
            uVar3 = uVar3 + uVar4;
          }
          else {
            uVar7 = uVar7 | 1 << (uVar8 & 0x1f);
          }
          uVar4 = uVar4 >> 1;
          uVar8 = uVar8 - 1;
          uVar2 = uVar3;
        } while (uVar8 != 0);
        uVar7 = uVar7 >> 1 | uVar7 << 0x1f;
      }
    }
    else {
      uVar7 = 0;
      do {
        uVar4 = uVar2 - DAT_ram_8002c878;
        bVar9 = DAT_ram_8002c878 <= uVar2;
        if (bVar9) {
          uVar7 = uVar7 + 1;
        }
        uVar2 = uVar4;
      } while (bVar9 && uVar4 != 0);
    }
  }
  else {
    uVar7 = 0;
  }
  if ((DAT_ram_8002c86c & 8) != 0) {
    FUN_ram_000ee260(s_NOD__pri__u_sec__u_sec40__u_busy_ram_001c5f74,DAT_ram_8002c884,
                     DAT_ram_8002c888,DAT_ram_8002c88c,uVar1,param_1,uVar7);
  }
  return uVar7;
}


