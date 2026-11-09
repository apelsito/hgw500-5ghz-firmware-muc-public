/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001591e4 */

void FUN_ram_001591e4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  iVar9 = 6;
  puVar8 = &DAT_ram_001aa5c0;
  do {
    iVar1 = FUN_ram_00155e44(*(undefined1 *)(param_1 + 0x67c),*puVar8);
    if (iVar1 != 0) {
      uVar6 = *(uint *)(iVar1 + 0xa4);
      if (uVar6 == 0) {
        uVar6 = *(uint *)(iVar1 + 0xd8);
        if (uVar6 != 0) goto LAB_ram_001592c8;
      }
      else {
        uVar4 = *(int *)(iVar1 + 0x9c) << 10;
        if (((int)uVar6 < 1) || (0x3e < uVar4)) {
          if (uVar6 == 0) {
            uVar2 = FUN_ram_000f5e64(uVar4,0);
          }
          else {
            uVar2 = uVar4;
            if ((int)uVar4 < 0) {
              uVar2 = ~uVar4;
            }
            iVar5 = LZCOUNT(uVar2) + -1;
            if ((int)uVar4 < 0) {
              iVar5 = -1;
            }
            uVar2 = uVar6;
            if ((int)uVar6 < 0) {
              uVar2 = ~uVar6;
            }
            iVar7 = LZCOUNT(uVar2) + -1;
            if ((int)uVar6 < 0) {
              iVar7 = -1;
            }
            uVar2 = iVar7 - iVar5;
            bVar11 = (int)uVar2 < 0;
            if (bVar11) {
              uVar2 = 0;
            }
            uVar10 = uVar2 + 1;
            if (!bVar11) {
              uVar6 = uVar6 << (uVar2 & 0x1f);
            }
            uVar2 = 0;
            LP_START = 0x159278;
            LP_END = 0x159288;
            do {
              uVar3 = uVar4 - uVar6;
              if (uVar4 < uVar6) {
                uVar3 = uVar3 + uVar6;
              }
              else {
                uVar2 = uVar2 | 1 << (uVar10 & 0x1f);
              }
              uVar6 = uVar6 >> 1;
              uVar10 = uVar10 - 1;
              uVar4 = uVar3;
            } while (uVar10 != 0);
            uVar2 = uVar2 >> 1 | uVar2 << 0x1f;
          }
        }
        else {
          uVar2 = 0;
          do {
            uVar10 = uVar4 - uVar6;
            bVar11 = uVar6 <= uVar4;
            if (bVar11) {
              uVar2 = uVar2 + 1;
            }
            uVar4 = uVar10;
          } while (bVar11 && uVar10 != 0);
        }
        FUN_ram_80025e54(iVar1 + 0xac,uVar2,2);
        uVar6 = *(uint *)(iVar1 + 0xd8);
        if (uVar6 == 0) {
          iVar5 = *(int *)(iVar1 + 0xa4);
joined_r0x00159370:
          if (iVar5 == 0) goto LAB_ram_001593b4;
        }
        else {
LAB_ram_001592c8:
          uVar4 = *(int *)(iVar1 + 0xd4) << 10;
          if (((int)uVar6 < 1) || (0x3e < uVar4)) {
            if (uVar6 == 0) {
              uVar2 = FUN_ram_000f5e64(uVar4,0);
            }
            else {
              uVar2 = uVar4;
              if ((int)uVar4 < 0) {
                uVar2 = ~uVar4;
              }
              iVar5 = LZCOUNT(uVar2) + -1;
              if ((int)uVar4 < 0) {
                iVar5 = -1;
              }
              uVar2 = uVar6;
              if ((int)uVar6 < 0) {
                uVar2 = ~uVar6;
              }
              iVar7 = LZCOUNT(uVar2) + -1;
              if ((int)uVar6 < 0) {
                iVar7 = -1;
              }
              uVar2 = iVar7 - iVar5;
              bVar11 = (int)uVar2 < 0;
              if (bVar11) {
                uVar2 = 0;
              }
              uVar10 = uVar2 + 1;
              if (!bVar11) {
                uVar6 = uVar6 << (uVar2 & 0x1f);
              }
              uVar2 = 0;
              LP_START = 0x159320;
              LP_END = 0x159330;
              do {
                uVar3 = uVar4 - uVar6;
                if (uVar4 < uVar6) {
                  uVar3 = uVar3 + uVar6;
                }
                else {
                  uVar2 = uVar2 | 1 << (uVar10 & 0x1f);
                }
                uVar6 = uVar6 >> 1;
                uVar10 = uVar10 - 1;
                uVar4 = uVar3;
              } while (uVar10 != 0);
              uVar2 = uVar2 >> 1 | uVar2 << 0x1f;
            }
          }
          else {
            uVar2 = 0;
            do {
              uVar10 = uVar4 - uVar6;
              bVar11 = uVar6 <= uVar4;
              if (bVar11) {
                uVar2 = uVar2 + 1;
              }
              uVar4 = uVar10;
            } while (bVar11 && uVar10 != 0);
          }
          FUN_ram_80025e54(iVar1 + 0xdc,uVar2,2);
          if (*(int *)(iVar1 + 0xa4) == 0) {
            iVar5 = *(int *)(iVar1 + 0xd8);
            goto joined_r0x00159370;
          }
        }
        FUN_ram_80025e54(iVar1 + 0x9c,0,2);
        FUN_ram_80025e54(iVar1 + 0xa4,0,2);
        FUN_ram_80025e54(iVar1 + 0xd4,0,2);
        FUN_ram_80025e54(iVar1 + 0xd8,0,2);
      }
    }
LAB_ram_001593b4:
    iVar9 = iVar9 + -1;
    puVar8 = puVar8 + 1;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
}


