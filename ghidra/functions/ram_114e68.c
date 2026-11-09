/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00114e68 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00114e68(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  
  piVar14 = *(int **)(param_1 + 0x3b54 + param_5 * 4);
  uVar1 = false;
  if (piVar14 == (int *)0x0) {
    return 0;
  }
  if ((((char)piVar14[0x19] == '\0') && (*(short *)((int)piVar14 + 0x87) == 0)) &&
     (*(short *)((int)piVar14 + 0x89) == 0)) {
    if ((*(uint *)((int)piVar14 + 0x3c2) & 0x800) == 0) {
      return 0;
    }
    iVar10 = piVar14[0x34a];
  }
  else {
    iVar10 = piVar14[0x34a];
  }
  if (iVar10 == 0) {
    return 0;
  }
  uVar12 = (uint)*(byte *)((int)piVar14 + 0x4e9);
  uVar9 = *(uint *)(param_2 + 4);
  if ((uVar9 & 0x80000) == 0) {
    if (((*(uint *)(param_2 + 8) & 0x20000) != 0) || ((uVar9 & 0xc0) == 0xc0)) {
LAB_ram_00115054:
      bVar5 = false;
      bVar6 = false;
      goto LAB_ram_00115098;
    }
LAB_ram_00115060:
    DAT_ram_800370cc = DAT_ram_800370cc + 1;
    if (uVar12 < 10) {
      bVar5 = true;
      bVar6 = false;
      *(int *)(&DAT_ram_80037638 + uVar12 * 4) = *(int *)(&DAT_ram_80037638 + uVar12 * 4) + 1;
      goto LAB_ram_00115098;
    }
    DAT_ram_800370d4 = DAT_ram_800370d4 + 1;
LAB_ram_001150b8:
    uVar9 = *(uint *)(param_2 + 0xc) & 0x10;
    if (uVar9 == 0) {
      DAT_ram_800370d8 = DAT_ram_800370d8 + 1;
      uVar8 = *(short *)(param_1 + 0x3ff8) + 1;
      uVar1 = 100 < uVar8;
      *(ushort *)(param_1 + 0x3ff8) = uVar8;
      if ((bool)uVar1) {
        *(undefined2 *)(param_1 + 0x3ff8) = 0;
        DAT_ram_800370e0 = DAT_ram_800370e0 + 1;
      }
      uVar13 = 0;
      goto LAB_ram_0011561c;
    }
    _DAT_ram_e60501fc = _DAT_ram_e60501fc & 0xfffffffd;
    sync();
    if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
      if (_DAT_ram_e00000bc < 0x8000000) {
        uVar12 = _DAT_ram_e00000bc + 0x40000000;
      }
      else {
        uVar12 = _DAT_ram_e00000bc;
        if (_DAT_ram_e00000bc < 0xc0000000) {
          uVar12 = 0;
        }
      }
    }
    else {
      uVar12 = _DAT_ram_e00000bc + 0xe0000000;
    }
    puVar16 = *(uint **)(uVar12 + 0x54);
    if ((puVar16 < (uint *)0x80000000) || ((uint *)0x8007ffff < puVar16)) {
      if (puVar16 < (uint *)0x8000000) {
        puVar16 = puVar16 + 0x10000000;
      }
      else if (puVar16 < (uint *)0xc0000000) {
        puVar16 = (uint *)0x0;
      }
    }
    else {
      puVar16 = puVar16 + -0x8000000;
    }
    iVar17 = 0x16;
    iVar10 = 0;
    LP_START = 0x1151dc;
    LP_END = 0x11521c;
    do {
      uVar12 = (*puVar16 + iVar10) % 0x16;
      if (puVar16[uVar12 * 0x28 + 0x13] == 0) {
        *puVar16 = uVar12;
        puVar16[uVar12 * 0x28 + 0x13] = 1;
        puVar4 = puVar16 + uVar12 * 0x28 + 0x12;
        if (puVar4 != (uint *)0x0) {
          puVar15 = puVar4 + 0x1f;
          uVar12 = *(uint *)(param_2 + 4);
          *(undefined1 *)((int)puVar4 + 0x86) = *(undefined1 *)(param_4 + 0x10);
          *(undefined1 *)((int)puVar4 + 0x85) = *(undefined1 *)(param_4 + 0x11);
          *(undefined1 *)(puVar4 + 0x21) = *(undefined1 *)(param_4 + 0x12);
          *(undefined1 *)((int)puVar4 + 0x83) = *(undefined1 *)(param_4 + 0x13);
          *(undefined1 *)((int)puVar4 + 0x82) = *(undefined1 *)(param_4 + 0x14);
          iVar10 = param_4 + 0x16;
          uVar7 = *(undefined1 *)(param_4 + 0x15);
          *(undefined1 *)((int)puVar4 + 0x81) = uVar7;
          uVar12 = uVar12 & 0x70000;
          *(byte *)puVar15 = (byte)(uVar12 >> 0x10);
          if ((DAT_ram_8002c224 & 0x20) == 0) {
LAB_ram_001152d0:
            bVar2 = (byte)*puVar15;
          }
          else {
            *(byte *)puVar15 = (byte)DAT_ram_0018c0d0;
            iVar10 = DAT_ram_0018c0d0 + 1;
            if (iVar10 < 8) {
              DAT_ram_8002c224 = DAT_ram_8002c224 & 0xffffffdf;
              DAT_ram_0018c0d0 = iVar10;
              goto LAB_ram_001152d0;
            }
            DAT_ram_8002c224 = DAT_ram_8002c224 & 0xffffffdf;
            bVar2 = (byte)*puVar15;
            DAT_ram_0018c0d0 = 2;
          }
          if (1 < bVar2) {
            FUN_ram_000ee260(s_NDP_bw___d__ram_001c1d44,(byte)*puVar15,
                             (undefined1 *)((int)puVar4 + 0x81),6,uVar7,uVar12 >> 0x10,iVar10);
          }
          uVar7 = FUN_ram_0016d584(*(undefined1 *)(param_2 + 2));
          *(undefined1 *)((int)puVar4 + 0x7d) = uVar7;
          *(undefined1 *)((int)puVar4 + 0x7e) = 0x36;
          *(undefined1 *)((int)puVar4 + 0x7f) = 0x1e;
          *(undefined1 *)(puVar4 + 0x20) = 0x46;
          *(undefined1 *)((int)puVar4 + 0x87) = 0x46;
          puVar4[0xe] = 3;
          puVar4[0x10] = 3;
          puVar4[0x11] = 0;
          puVar4[0x12] = 0;
          puVar4[0x13] = 0;
          puVar4[0x14] = 0;
          *(undefined1 *)((int)puVar4 + 0x96) = *(undefined1 *)((int)piVar14 + 0x4e9);
          puVar4[0x15] = 0;
          puVar4[0x16] = 0;
          puVar4[3] = 0;
          bVar2 = *(byte *)(piVar14 + 0x19);
          if ((bVar2 & 0x40) == 0 || bVar2 == 0) {
LAB_ram_001153e8:
            if ((bVar2 & 0x40) == 0) {
              if ((bVar2 & 0x10) == 0) {
                if ((bVar2 & 2) == 0) {
                  if ((bVar2 == 0) && ((*(byte *)(piVar14 + 0x22) & 6) != 0)) {
                    puVar4[2] = 4;
                    bVar2 = *(byte *)((int)piVar14 + 0x89);
                    cVar3 = *(char *)((int)piVar14 + 0x7a);
                    puVar4[0xe] = (int)(bVar2 & 0x60) >> 5;
                    if ((cVar3 == '\0') || (*(char *)((int)piVar14 + 0x7b) != '\0')) {
                      uVar1 = true;
                    }
                    else {
                      uVar1 = false;
                    }
                    puVar4[0xc] = 3;
                    puVar4[0xe] = 2;
                    puVar4[0xd] = 2;
                    puVar4[0xf] = (int)(bVar2 & 6) >> 1;
                    *(undefined1 *)(puVar4 + 0x22) = 3;
                    *(undefined1 *)((int)puVar4 + 0x89) = 0;
                    puVar4[0x15] = *(byte *)(piVar14 + 0x22) >> 2 & 1;
                    puVar4[0x16] = 3;
                    goto LAB_ram_001154b8;
                  }
                  puVar4[2] = 2;
                }
                else {
                  puVar4[2] = 1;
                }
                puVar4[0xc] = 2;
                puVar4[0xd] = 1;
              }
              else {
                puVar4[2] = 3;
                puVar4[0xc] = 4;
                puVar4[0xd] = 3;
              }
              puVar4[0xf] = 0;
            }
            else {
              puVar4[2] = 4;
              puVar4[0xc] = 4;
              puVar4[0xd] = 3;
              puVar4[0xf] = 1;
              *(undefined1 *)(puVar4 + 0x22) = 4;
              *(undefined1 *)((int)puVar4 + 0x89) = 0;
            }
          }
          else {
            if ((char)piVar14[0x1c] == '\x01') {
              if (*(char *)((int)piVar14 + 0x7b) == '\0') goto LAB_ram_001153e8;
            }
            else if (((char)piVar14[0x1c] != '\0') || (*(char *)((int)piVar14 + 0x7a) != '\0'))
            goto LAB_ram_001153e8;
            puVar4[2] = 4;
            puVar4[0xe] = 1;
            puVar4[0xc] = 2;
            puVar4[0xd] = 1;
            puVar4[0xf] = 1;
            *(undefined1 *)(puVar4 + 0x22) = 2;
            *(undefined1 *)((int)puVar4 + 0x89) = 0;
          }
LAB_ram_001154b8:
          *puVar4 = 1;
          iVar10 = *piVar14;
          uVar11 = *(uint *)(*(int *)(param_3 + 0x20) + 0x84);
          uVar12 = *(uint *)(*(int *)(param_3 + 0x20) + 0x80);
          puVar4[4] = uVar11;
          puVar4[5] = uVar11;
          puVar4[7] = uVar12;
          FUN_ram_0039fe00((int)puVar4 + 0x8a,iVar10 + 0x18,6);
          FUN_ram_0039fe00(puVar4 + 0x24,piVar14 + 0x27,6);
          if ((!(bool)uVar1) && (puVar16[0xd] == 0xffffffff)) {
            puVar16[0xd] = *puVar16;
            sync();
            _DAT_ram_e0000024 = 0x10001;
            sync();
            DAT_ram_800370dc = DAT_ram_800370dc + 1;
            *(undefined2 *)(param_1 + 0x3ff8) = 0;
            uVar13 = 1;
            goto joined_r0x00115584;
          }
          puVar4[1] = 0;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    uVar1 = true;
    *(undefined2 *)(param_1 + 0x3ff8) = 0;
    uVar13 = 0;
joined_r0x00115584:
    if (uVar9 == 0) goto LAB_ram_0011561c;
  }
  else {
    if ((uVar9 & 0xc0) != 0xc0) {
      if ((*(uint *)(param_2 + 8) & 0x20000) != 0) goto LAB_ram_00115054;
      goto LAB_ram_00115060;
    }
    DAT_ram_800370d0 = DAT_ram_800370d0 + 1;
    if (uVar12 < 10) {
      *(int *)(&DAT_ram_80037660 + uVar12 * 4) = *(int *)(&DAT_ram_80037660 + uVar12 * 4) + 1;
      cVar3 = (char)piVar14[0x19];
    }
    else {
      DAT_ram_800370d4 = DAT_ram_800370d4 + 1;
      cVar3 = (char)piVar14[0x19];
    }
    if (((cVar3 != '\0') && (DAT_ram_8002c944 != '\0')) &&
       ((piVar14[0x35a] + 1000) - DAT_ram_80038ee0 < 0)) {
      FUN_ram_001034e0(*(undefined4 *)(param_1 + 0x3b20),(char)piVar14[0x19f],0,0,
                       *(undefined1 *)((int)piVar14 + 0x683));
      iVar10 = DAT_ram_80038ee4;
      piVar14[0x35a] = DAT_ram_80038ee0;
      piVar14[0x35b] = iVar10;
    }
    bVar6 = true;
    bVar5 = false;
LAB_ram_00115098:
    if (bVar5) goto LAB_ram_001150b8;
    uVar13 = 0;
    if (!bVar6) goto LAB_ram_0011561c;
  }
  if ((*(int *)(param_1 + 0x3fe8) != 0) &&
     (uVar9 = *(int *)(param_1 + 0x3fe8) + 1, *(uint *)(param_1 + 0x3fe8) = uVar9, 10000 < uVar9)) {
    uVar9 = STATUS32;
    if ((uVar9 & 2) != 0) {
      STATUS32 = uVar9 & 0xfffffffd;
    }
    FUN_ram_00103230(*(int *)(param_1 + 0x3b20),2,10000,
                     *(int *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014) + 10000,6000);
    STATUS32 = uVar9;
    DAT_ram_80037838 = DAT_ram_80037838 + 1;
    *(undefined4 *)(param_1 + 0x3fe8) = 1;
  }
LAB_ram_0011561c:
  if (!(bool)uVar1) {
    return uVar13;
  }
  sync();
  _DAT_ram_e60501fc = _DAT_ram_e60501fc | 2;
  return uVar13;
}


