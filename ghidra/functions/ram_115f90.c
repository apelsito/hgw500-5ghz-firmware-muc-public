/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_00115f90(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                uint param_6)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  bool bVar10;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar6 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar6 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = _DAT_ram_e00000bc + 0xe0000000;
  }
  puVar8 = *(uint **)(uVar6 + 0x54);
  if ((puVar8 < (uint *)0x80000000) || ((uint *)0x8007ffff < puVar8)) {
    if (puVar8 < (uint *)0x8000000) {
      puVar8 = puVar8 + 0x10000000;
    }
    else if (puVar8 < (uint *)0xc0000000) {
      puVar8 = (uint *)0x0;
    }
  }
  else {
    puVar8 = puVar8 + -0x8000000;
  }
  piVar7 = *(int **)(param_1 + 0x3b54 + param_5 * 4);
  if (piVar7 != (int *)0x0) {
    iVar9 = 0x16;
    iVar5 = 0;
    LP_START = 0x11607c;
    LP_END = 0x1160b8;
    do {
      uVar6 = (*puVar8 + iVar5) % 0x16;
      if (puVar8[uVar6 * 0x28 + 0x13] == 0) {
        *puVar8 = uVar6;
        puVar8[uVar6 * 0x28 + 0x13] = 1;
        puVar4 = puVar8 + uVar6 * 0x28 + 0x12;
        if (puVar4 != (uint *)0x0) {
          bVar3 = *(byte *)((int)piVar7 + 0x4e9);
          puVar4[0x27] = DAT_ram_0018c0d4;
          *puVar4 = 3;
          DAT_ram_0018c0d4 = DAT_ram_0018c0d4 + 1;
          iVar5 = *(int *)(param_3 + 0x20);
          uVar6 = *(uint *)(iVar5 + 0x84);
          puVar4[4] = uVar6;
          puVar4[5] = uVar6;
          puVar4[6] = param_6;
          uVar6 = piVar7[0x13b];
          puVar4[7] = *(uint *)(iVar5 + 0x80);
          puVar4[8] = uVar6;
          *(ushort *)(puVar4 + 0x18) = *(ushort *)(piVar7 + 6) & 0x3fff;
          *(byte *)((int)puVar4 + 0x96) = bVar3;
          iVar5 = piVar7[0x1a1];
          puVar4[0x19] = piVar7[0x102];
          *(char *)(puVar4 + 0x1f) = (char)iVar5;
          puVar4[0xf] = (uint)*(byte *)((int)piVar7 + 0x4ea);
          puVar4[0x1c] = 0;
          puVar4[0x1d] = 0;
          *(undefined1 *)((int)puVar4 + 0x9a) = *(undefined1 *)(*piVar7 + 0x10);
          iVar5 = FUN_ram_000e5c84();
          if (iVar5 == 2) {
            puVar4[0x1c] = 1;
            puVar4[0x1d] = 1;
          }
          uVar1 = *(undefined1 *)((int)piVar7 + 0x683);
          iVar5 = FUN_ram_0011bc70(1,0,uVar1);
          iVar9 = FUN_ram_0011bc70(0,0,uVar1);
          if (iVar9 < iVar5) {
            uVar6 = (iVar5 - iVar9) * 2 & 0xff;
            if (DAT_ram_8002c938 == '\0') goto LAB_ram_00116220;
LAB_ram_001161fc:
            iVar5 = FUN_ram_0011bc98(1,0);
            if ((iVar5 == 0) && (uVar6 <= DAT_ram_8002c939)) goto LAB_ram_00116220;
            uVar6 = 1;
          }
          else {
            if (DAT_ram_8002c938 != '\0') {
              uVar6 = 0;
              goto LAB_ram_001161fc;
            }
LAB_ram_00116220:
            uVar6 = 0;
          }
          puVar4[9] = uVar6;
          FUN_ram_00115f18(param_1,puVar4 + 0x1a,puVar4 + 0x1b);
          iVar5 = FUN_ram_000e5c84();
          bVar2 = *(byte *)(piVar7 + 0x19);
          if (iVar5 == 2) {
            if (((bVar2 & 0x40) == 0) || (0x824 < param_6)) {
              puVar4[1] = 0;
              FUN_ram_00109fd4(param_1,piVar7);
              return 0;
            }
          }
          else if (((bVar2 & 0x40) == 0) && (bVar2 != 0)) {
            if ((bVar2 & 0x10) == 0) {
              if ((bVar2 & 2) == 0) {
                puVar4[2] = 2;
              }
              else {
                puVar4[2] = 1;
              }
            }
            else {
              puVar4[2] = 3;
            }
            goto LAB_ram_001162a8;
          }
          puVar4[2] = 4;
LAB_ram_001162a8:
          LP_END = 0x116332;
          LP_START = 0x1162c4;
          bVar10 = puVar8[DAT_ram_0018c0d8 + 1] == 0xffffffff;
          if (bVar10) {
            puVar8[DAT_ram_0018c0d8 + 1] = *puVar8;
            sync();
            _DAT_ram_e0000024 = 0x10001;
            sync();
          }
          DAT_ram_0018c0d8 = (DAT_ram_0018c0d8 + 1) % 0xc;
          if (!bVar10) {
            puVar4[1] = 0;
            iVar5 = (uint)bVar3 * 4;
            *(int *)(&DAT_ram_80037778 + iVar5) = *(int *)(&DAT_ram_80037778 + iVar5) + 1;
            return 0;
          }
          if (((char)piVar7[0x13a] == '\x03') && (*(char *)((int)piVar7 + 0x4eb) != '\0')) {
            *(char *)(piVar7 + 0x13c) = (char)uVar6;
            return 1;
          }
          *(undefined1 *)(piVar7 + 0x13a) = 3;
          thunk_FUN_ram_0012a654(piVar7,*(undefined1 *)((int)piVar7 + 0x4e9));
          *(undefined1 *)((int)piVar7 + 0x4eb) = 1;
          DAT_ram_80037884 = 3;
          *(char *)(piVar7 + 0x13c) = (char)uVar6;
          return 1;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    DAT_ram_800377f0 = DAT_ram_800377f0 + 1;
  }
  return 0;
}


