/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00170068 */

int FUN_ram_00170068(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = FUN_ram_001711e0(0x264,3,0);
  uVar2 = FUN_ram_001711e0(0x26c,0x380000,0x13);
  FUN_ram_001710d0(0x26c,0x20000,0x11,0);
  FUN_ram_001710d0(0x26c,0x40000,0x12,0);
  FUN_ram_001710d0(0x264,3,0,0);
  FUN_ram_001710d0(0x26c,0x20000,0x11,1);
  FUN_ram_001710d0(0x26c,0x40000,0x12,0);
  FUN_ram_001710d0(0x26c,0x380000,0x13,3);
  FUN_ram_000e4fa0(1000);
  uVar3 = FUN_ram_001711e0(0x1c,0xff,0);
  FUN_ram_001710d0(0x26c,0x20000,0x11,0);
  FUN_ram_001710d0(0x26c,0x40000,0x12,1);
  FUN_ram_001710d0(0x26c,0x380000,0x13,3);
  FUN_ram_000e4fa0(1000);
  iVar4 = FUN_ram_001711e0(0x1c,0xff,0);
  FUN_ram_001710d0(0x264,3,0,uVar1);
  FUN_ram_001710d0(0x26c,0x20000,0x11,0);
  FUN_ram_001710d0(0x26c,0x40000,0x12,0);
  FUN_ram_001710d0(0x26c,0x380000,0x13,uVar2);
  if (uVar3 == 0) {
    iVar4 = -1;
  }
  else {
    uVar7 = iVar4 * 1000;
    if (((int)uVar3 < 1) || (0x3e < uVar7)) {
      if (uVar3 == 0) {
        uVar5 = FUN_ram_000f5e64(uVar7,0);
      }
      else {
        uVar5 = uVar7;
        if ((int)uVar7 < 0) {
          uVar5 = ~uVar7;
        }
        iVar4 = LZCOUNT(uVar5) + -1;
        if ((int)uVar7 < 0) {
          iVar4 = -1;
        }
        uVar5 = uVar3;
        if ((int)uVar3 < 0) {
          uVar5 = ~uVar3;
        }
        iVar6 = LZCOUNT(uVar5) + -1;
        if ((int)uVar3 < 0) {
          iVar6 = -1;
        }
        uVar5 = iVar6 - iVar4;
        bVar10 = (int)uVar5 < 0;
        if (bVar10) {
          uVar5 = 0;
        }
        uVar9 = uVar5 + 1;
        if (!bVar10) {
          uVar3 = uVar3 << (uVar5 & 0x1f);
        }
        uVar5 = 0;
        LP_START = 0x170230;
        LP_END = 0x170240;
        do {
          uVar8 = uVar7 - uVar3;
          if (uVar7 < uVar3) {
            uVar8 = uVar8 + uVar3;
          }
          else {
            uVar5 = uVar5 | 1 << (uVar9 & 0x1f);
          }
          uVar3 = uVar3 >> 1;
          uVar9 = uVar9 - 1;
          uVar7 = uVar8;
        } while (uVar9 != 0);
        uVar5 = uVar5 >> 1 | uVar5 << 0x1f;
      }
    }
    else {
      uVar5 = 0;
      do {
        uVar9 = uVar7 - uVar3;
        bVar10 = uVar3 <= uVar7;
        if (bVar10) {
          uVar5 = uVar5 + 1;
        }
        uVar7 = uVar9;
      } while (bVar10 && uVar9 != 0);
    }
    iVar4 = uVar5 * 0x79eb + -0x9206d0;
  }
  return iVar4;
}


