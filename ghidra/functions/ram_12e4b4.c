/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e4b4 */

uint FUN_ram_0012e4b4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = *(uint *)(param_2 + 0x408);
  iVar6 = *(int *)(param_2 + 0xd28);
  uVar1 = *(byte *)(param_2 + 0x4ea) - 1;
  uVar8 = 0xffffffff;
  if (uVar1 != 0 && *(byte *)(param_2 + 0x4ea) != 0) {
    uVar9 = uVar9 >> (uVar1 & 0x1f);
  }
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = uVar9 & 0xff;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
LAB_ram_0012e558:
      do {
        bVar4 = 0;
        uVar8 = 0xffffffff;
        uVar1 = 1;
        uVar10 = 0xffffffff;
        uVar12 = 0xffffffff;
        do {
          while( true ) {
            uVar11 = uVar1;
            if ((iVar6 != 0) && (uVar1 = uVar11, *(int *)(param_1 + 0x3fb4 + uVar11 * 4) == iVar6))
            goto LAB_ram_0012e698;
            iVar7 = uVar11 + 1;
            cVar2 = (char)iVar7;
            uVar5 = uVar12;
            if ((-1 < (int)uVar12) ||
               (iVar3 = param_1 + 0x3fe0 + uVar11 * 4, *(int *)(iVar3 + -0x2c) != 0)) break;
            uVar5 = uVar11;
            if (uVar9 != 1) {
              if (iVar7 < 10) {
                iVar7 = *(int *)(iVar3 + -0x28);
                if (((iVar7 != 0) && (uVar5 = uVar12, (int)uVar8 < 0)) &&
                   (*(int *)(iVar7 + 0x14) != 0)) goto LAB_ram_0012e5f8;
              }
              else {
                uVar5 = uVar12;
                if ((int)uVar8 < 0) {
LAB_ram_0012e5f8:
                  uVar5 = uVar12;
                  uVar8 = uVar11;
                }
              }
            }
            if (-1 < (int)uVar8) {
              bVar4 = bVar4 + 1;
            }
LAB_ram_0012e610:
            uVar1 = (int)cVar2;
            uVar11 = uVar10;
            uVar12 = uVar5;
            if (9 < cVar2) goto LAB_ram_0012e618;
          }
          if ((9 < iVar7) ||
             (iVar7 = param_1 + 0x3fe0 + uVar11 * 4,
             *(int *)(iVar7 + -0x28) != *(int *)(iVar7 + -0x2c))) goto LAB_ram_0012e610;
          uVar1 = (int)cVar2;
          uVar10 = uVar11;
        } while (cVar2 < 10);
LAB_ram_0012e618:
        uVar1 = uVar12;
        if ((cVar2 != '\n') || (-1 < (int)uVar12)) {
LAB_ram_0012e698:
          uVar8 = uVar1;
          if (-1 < (int)uVar8) break;
          goto LAB_ram_0012e558;
        }
        if (bVar4 != 0) {
          if (bVar4 < 2) goto LAB_ram_0012e660;
          iVar6 = *(int *)(*(int *)(param_1 + 0x3fb8 + uVar8 * 4) + 0x14);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          FUN_ram_0012d030(param_1,iVar6);
          FUN_ram_0012e4b4(param_1,iVar6,0);
LAB_ram_0012e78c:
          iVar6 = *(int *)(param_2 + 0xd28);
          uVar1 = uVar12;
          goto LAB_ram_0012e698;
        }
        if ((int)uVar11 < 0) {
          return 0xfffffff4;
        }
LAB_ram_0012e660:
        if ((int)uVar8 < 0) {
          if ((int)uVar11 < 0) goto LAB_ram_0012e698;
          iVar6 = *(int *)(*(int *)(param_1 + 0x3fb4 + uVar11 * 4) + 0x14);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          if (1 < *(byte *)(iVar6 + 0x4ea)) {
            return 0xffffffff;
          }
          FUN_ram_0012d030(param_1,iVar6);
          *(char *)(iVar6 + 0x4ea) = *(char *)(iVar6 + 0x4ea) * '\x02';
          FUN_ram_0012a654(iVar6,uVar11 & 0xff);
          FUN_ram_0012e4b4(param_1,iVar6,0);
          uVar12 = (uint)(char)((char)uVar11 + '\x01');
          if (1 < uVar9) {
            if (1 < *(byte *)(param_2 + 0x4ea)) {
              return 0xffffffff;
            }
            *(byte *)(param_2 + 0x4ea) = *(byte *)(param_2 + 0x4ea) * '\x02';
            uVar9 = 1;
          }
          goto LAB_ram_0012e78c;
        }
        if (1 < *(byte *)(param_2 + 0x4ea)) {
          return 0xffffffff;
        }
        *(byte *)(param_2 + 0x4ea) = *(byte *)(param_2 + 0x4ea) * '\x02';
        uVar9 = uVar9 >> 1;
      } while ((int)uVar8 < 0);
    }
    else {
      if (*(int *)(param_1 + 0x3fb4) != 0) {
        return 0xffffffff;
      }
      uVar8 = 0;
      uVar9 = 1;
    }
    iVar7 = param_1 + 0x3fe0 + uVar8 * 4;
    *(char *)(param_2 + 0x4e9) = (char)uVar8;
    *(int *)(iVar7 + -0x2c) = iVar6;
    FUN_ram_0012e45c(param_2,uVar8);
    if (1 < uVar9) {
      *(undefined4 *)(iVar7 + -0x28) = *(undefined4 *)(param_2 + 0xd28);
      FUN_ram_0012e45c(param_2,uVar8 + 1);
    }
    FUN_ram_0012a654(param_2,uVar8 & 0xff);
  }
  return uVar8;
}


