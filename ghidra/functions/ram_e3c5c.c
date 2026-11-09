/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e3c5c */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_ram_000e3c5c(int param_1,int *param_2,int param_3,byte *param_4,int param_5,int param_6,
                       int param_7,int param_8,byte param_9,char param_10,byte param_11,
                       undefined4 param_12,char param_13,int param_14,int param_15,int param_16,
                       int param_17,byte param_18,undefined4 *param_19,uint param_20,
                       undefined4 param_21,char param_22)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  byte *local_6c;
  int local_68;
  uint local_58;
  uint *local_48;
  int local_44;
  ushort auStack_40 [4];
  
  uVar10 = DAT_ram_0018c100;
  bVar7 = param_18 & 0xf0;
  bVar18 = *(char *)(*param_2 + 0x4660) == '\0';
  puVar6 = (uint *)(param_1 + 0x4c);
  if ((DAT_ram_8002c8c0 == 0) || (param_3 != 0)) {
    uVar16 = param_2[0x7f];
joined_r0x000e3d38:
    if (((param_8 != 0) && (param_10 == '\0')) && ((param_3 == 0 && (param_7 != 0))))
    goto LAB_ram_000e3d10;
LAB_ram_000e3dc8:
    iVar14 = 0;
  }
  else {
    if (param_6 != 0) {
      if ((bVar18) && (DAT_ram_8002c8e9 != '\0')) {
        uVar16 = param_2[0x81];
      }
      else if (param_16 == 0) {
        uVar16 = param_2[0x7e];
      }
      else {
        uVar16 = param_2[0x76];
      }
      goto joined_r0x000e3d38;
    }
    if (((bVar18) && (DAT_ram_8002c8e9 != '\0')) && ((param_18 & 0xc) == 8)) {
      uVar16 = param_2[0x80];
      goto joined_r0x000e3d38;
    }
    if (param_16 == 0) {
      uVar16 = param_2[0x79];
      goto joined_r0x000e3d38;
    }
    uVar16 = param_2[0x73];
    if (((param_8 == 0) || (param_10 != '\0')) || (param_7 == 0)) goto LAB_ram_000e3dc8;
LAB_ram_000e3d10:
    iVar14 = 2;
  }
  iVar3 = FUN_ram_000e5c84();
  if ((iVar3 == 2) && (((uVar10 = 3, DAT_ram_0018c114 != 1 || (iVar14 == 0)) && (param_10 == '\0')))
     ) {
    iVar14 = 2;
    auStack_40[0] = 0x372;
    auStack_40[1] = 0;
    auStack_40[2] = 0x382;
    auStack_40[3] = 0;
    bVar18 = true;
    param_9 = 1;
  }
  else {
    bVar18 = false;
  }
  if (DAT_ram_0018c12c == 0) {
    local_58 = (uint)param_11;
  }
  else {
    local_58 = 1;
  }
  uVar17 = 0;
  if (param_10 == '\0') {
    uVar17 = param_20 & DAT_ram_0018c0f8 & 0xff;
    if ((DAT_ram_0018c0f4 == 0) || (param_13 == '\0')) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  iVar12 = 0;
  if ((DAT_ram_0018c0ec == 0) || (param_14 == 0)) {
    if (DAT_ram_0018c0e8 != 0) {
      if (param_10 != '\0') goto LAB_ram_000e3ee4;
      goto joined_r0x000e3efc;
    }
LAB_ram_000e3eb0:
    if (bVar7 != 0x80) {
      bVar2 = false;
      param_15 = 0;
      goto LAB_ram_000e3f20;
    }
    param_15 = 0;
LAB_ram_000e3f04:
    if ((param_18 & 0xc) == 4) {
      bVar2 = true;
      iVar3 = 0;
      iVar12 = 0;
      param_15 = 0;
      uVar17 = 1;
    }
    else {
LAB_ram_000e3f08:
      bVar2 = false;
    }
  }
  else {
    if (param_10 == '\0') {
      iVar12 = 1;
      if (DAT_ram_0018c0e8 == 0) {
        param_15 = 0;
      }
joined_r0x000e3efc:
      if (bVar7 == 0x80) goto LAB_ram_000e3f04;
      goto LAB_ram_000e3f08;
    }
    if (DAT_ram_0018c0e8 == 0) goto LAB_ram_000e3eb0;
LAB_ram_000e3ee4:
    param_15 = 0;
    if (bVar7 == 0x80) goto LAB_ram_000e3f04;
    bVar2 = false;
  }
LAB_ram_000e3f20:
  if (param_17 != 0) {
    iVar3 = 0;
    uVar10 = DAT_ram_8002c8d0;
  }
  local_68 = param_5;
  if ((((param_6 == 0) || (uVar13 = DAT_ram_0018c0fc, bVar2)) && (uVar13 = 0, (param_18 & 0xc) == 0)
      ) && ((bVar7 == 0x50 || (uVar13 = DAT_ram_8002c218, bVar7 == 0xc0)))) {
    local_68 = 4;
    uVar13 = 0;
  }
  if (param_10 == '\0') {
    iVar4 = 0;
  }
  else {
    uVar10 = 3;
    iVar4 = FUN_ram_000e5c84();
    if (iVar4 == 4) {
      iVar15 = 0xf;
      iVar4 = 1;
      goto LAB_ram_000e3fc4;
    }
    iVar4 = FUN_ram_000e5c84();
    if (iVar4 == 3) {
      iVar15 = 7;
      iVar4 = 1;
      goto LAB_ram_000e3fc4;
    }
    iVar15 = FUN_ram_000e5c84();
    iVar4 = 1;
    if (iVar15 == 2) {
      iVar15 = 3;
      goto LAB_ram_000e3fc4;
    }
  }
  iVar15 = 0;
LAB_ram_000e3fc4:
  uVar10 = iVar15 << 0x14 | (local_58 & 3) << 9 | iVar3 << 0xf | (uVar13 & 0xf) << 0x10 |
           iVar4 << 0x18 | (uVar10 & 3) << 0x19;
  uVar16 = uVar16 & 0x7fff | iVar12 << 0x1a;
  if (0 < local_68) {
    iVar3 = 0;
    local_44 = local_68;
    uVar13 = 0;
    local_6c = param_4;
    local_48 = puVar6;
    do {
      if (param_3 == 0) {
        uVar8 = (uint)*local_6c;
        uVar11 = 1;
        if (param_10 == '\0') goto LAB_ram_000e4084;
        if (DAT_ram_0018c12c != 0) goto LAB_ram_000e4088;
LAB_ram_000e40f0:
        uVar11 = 0;
      }
      else {
        uVar8 = (uint)(byte)(&DAT_ram_0018c000)[iVar3];
        if (param_10 == '\0') {
LAB_ram_000e4084:
          uVar11 = 1;
          if ((uVar8 & 0x80) == 0) goto joined_r0x000e40ec;
        }
        else {
joined_r0x000e40ec:
          uVar11 = 1;
          if (DAT_ram_0018c12c == 0) goto LAB_ram_000e40f0;
        }
      }
LAB_ram_000e4088:
      uVar5 = uVar8 & 0x7f;
      if (uVar17 == 0) {
        iVar12 = 1 - uVar11;
        if (1 < uVar11) {
          iVar12 = 0;
        }
        if ((iVar12 != 0) || (0x4c < uVar5)) goto LAB_ram_000e40f8;
        iVar12 = 1 - local_58;
        if (1 < local_58) {
          iVar12 = 0;
        }
        uVar9 = (uint)(byte)(&DAT_ram_0018c578)[uVar5] - iVar12 & 0xff;
        if (uVar5 < (uint)(param_15 << 3)) goto LAB_ram_000e4138;
LAB_ram_000e4148:
        uVar13 = 0;
        if (bVar18) {
          uVar5 = iVar14 << 0x1d;
          iVar12 = FUN_ram_000e3a84(uVar8,uVar17);
          if ((int)(uint)param_9 < iVar12) {
            uVar13 = 0xffff;
            param_15 = 0;
          }
          else {
            uVar13 = (uint)auStack_40[iVar12 * 2];
            param_15 = 0;
          }
        }
        else if ((param_10 == '\0') && (iVar14 != 0)) {
          iVar12 = FUN_ram_000e3a84(uVar8,uVar17);
          if (((int)(uint)param_9 < iVar12) ||
             (uVar1 = *(ushort *)(param_7 + iVar12 * 4), uVar1 == 0xffff)) {
            param_15 = 0;
            uVar5 = 0;
            iVar14 = 0;
          }
          else {
            uVar5 = iVar14 << 0x1d;
            uVar13 = (uint)(uVar1 >> 6);
            param_15 = 0;
          }
        }
        else {
          uVar5 = iVar14 << 0x1d;
          param_15 = 0;
        }
      }
      else {
        if (uVar5 < 0x6d) {
          uVar9 = (uint)(byte)(&DAT_ram_0018c430)[uVar5 * 3 + local_58];
        }
        else {
LAB_ram_000e40f8:
          uVar9 = 0;
        }
        if ((uint)(param_15 << 3) <= uVar5) goto LAB_ram_000e4148;
LAB_ram_000e4138:
        param_15 = 1;
        iVar14 = 0;
        uVar5 = 0;
      }
      if ((param_10 == '\0') || (uVar8 < 8)) {
joined_r0x000e41f4:
        if ((iVar3 == local_68 + -1) && (local_68 < 5)) goto LAB_ram_000e4334;
LAB_ram_000e41f8:
        if (bVar2) goto LAB_ram_000e4334;
      }
      else {
        *param_19 = 1;
        if (uVar8 == 8) {
          uVar10 = uVar10 | 0x80;
          goto joined_r0x000e41f4;
        }
        if (param_22 == '\0') {
          uVar10 = uVar10 | 0x80;
        }
        if ((local_68 + -1 != iVar3) || (4 < local_68)) goto LAB_ram_000e41f8;
LAB_ram_000e4334:
        uVar16 = uVar16 | 0x80000000;
      }
      if (uVar17 != 0 && uVar11 != 0) {
        uVar11 = 0;
      }
      uVar16 = uVar16 | (uVar17 & 1) << 0xf;
      *local_48 = param_15 << 0x1b | uVar8 & 0x7f | uVar10 | uVar11 << 8 | uVar5;
      local_48[1] = (uVar13 & 0x3ff) << 0x10 | uVar16 | (uVar9 & 7) << 0x1c;
      local_48 = local_48 + 2;
      if (bVar2) {
        return puVar6;
      }
      iVar3 = iVar3 + 1;
      local_44 = local_44 + -1;
      local_6c = local_6c + 1;
    } while (local_44 != 0);
  }
  return puVar6;
}


