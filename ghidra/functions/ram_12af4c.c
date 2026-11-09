/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012af4c */

undefined4 FUN_ram_0012af4c(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined4 local_c8;
  int *local_bc [7];
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  local_c8 = 0;
  iVar8 = FUN_ram_001030e8(*(undefined4 *)(param_1 + 0x3b20),1);
  if (0 < iVar8) {
    DAT_ram_80037990 = DAT_ram_80037990 + 1;
    return 0;
  }
  uVar12 = (uint)*(ushort *)(param_1 + 0x39e4);
  if (DAT_ram_0018c1a8 == *(ushort *)(param_1 + 0x39e4)) {
    if (DAT_ram_0018c198 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x46a0) == '\0') {
      iVar8 = (DAT_ram_80038ee4 - (DAT_ram_0018c1a0 + (0xfffffc17 < DAT_ram_0018c19c))) -
              (uint)(DAT_ram_80038ee0 < DAT_ram_0018c19c + 1000);
    }
    else {
      iVar8 = (DAT_ram_80038ee4 - (DAT_ram_0018c1a0 + CARRY4(DAT_ram_0018c19c,DAT_ram_0018c198))) -
              (uint)(DAT_ram_80038ee0 < DAT_ram_0018c19c + DAT_ram_0018c198);
    }
    uVar12 = DAT_ram_0018c1a8;
    if (iVar8 < 0) {
      return 0;
    }
  }
  DAT_ram_0018c1a8 = uVar12;
  iVar16 = *(int *)(param_2 + 0x7c);
  iVar8 = *(int *)(param_1 + 0x14);
  uVar12 = ((int)(*(byte *)(iVar16 + 0x10) & 0xfc) >> 2 & 0x1fU) + 1 & 0x1f | 0x10;
  if (iVar8 == 0) {
    DAT_ram_0018c19c = DAT_ram_80038ee0;
    DAT_ram_0018c1a0 = DAT_ram_80038ee4;
  }
  else {
    iVar17 = 0;
    bVar4 = true;
    local_c8 = 0;
LAB_ram_0012b118:
    do {
      local_a0 = DAT_ram_001a6640;
      local_9c = DAT_ram_001a6644;
      local_98 = DAT_ram_001a6648;
      uVar11 = STATUS32;
      if ((uVar11 & 2) != 0) {
        STATUS32 = uVar11 & 0xfffffffd;
      }
      local_68 = DAT_ram_80038ee0;
      local_64 = DAT_ram_80038ee4;
      local_6c = COUNT0;
      uVar10 = AUX_IRQ_PENDING;
      if ((uVar10 & 8) != 0) {
        local_68 = DAT_ram_80038ee0 + 1;
        local_64 = DAT_ram_80038ee4 + (0xfffffffe < DAT_ram_80038ee0);
        local_6c = COUNT0;
      }
      STATUS32 = uVar11;
      local_84 = local_6c;
      local_80 = local_68;
      local_7c = local_64;
      local_74 = DAT_ram_001a6644 + local_68;
      local_70 = DAT_ram_001a6648 + local_64 + (uint)CARRY4(DAT_ram_001a6644,local_68);
      if (local_6c < 0x7a121) {
        uVar11 = 500000 - local_6c;
        local_78 = local_6c;
        if (uVar11 <= DAT_ram_001a6640) goto LAB_ram_0012b214;
      }
      else {
        uVar11 = 0;
LAB_ram_0012b214:
        local_70 = local_70 + (0xfffffffe < local_74);
        local_74 = local_74 + 1;
        local_78 = -uVar11;
      }
      local_78 = local_78 + DAT_ram_001a6640;
      local_94 = local_78;
      local_90 = local_74;
      local_8c = local_70;
      iVar9 = FUN_ram_00102bcc(*(undefined4 *)(param_1 + 0x3b20),*(undefined4 *)(param_2 + 8));
      uVar6 = local_8c;
      uVar10 = local_90;
      uVar11 = local_94;
      while (iVar9 == 0) {
        uVar2 = STATUS32;
        if ((uVar2 & 2) != 0) {
          STATUS32 = uVar2 & 0xfffffffd;
        }
        local_44 = COUNT0;
        uVar3 = AUX_IRQ_PENDING;
        local_40 = DAT_ram_80038ee0;
        local_3c = DAT_ram_80038ee4;
        if ((uVar3 & 8) != 0) {
          local_40 = DAT_ram_80038ee0 + 1;
          local_3c = DAT_ram_80038ee4 + (0xfffffffe < DAT_ram_80038ee0);
          local_44 = COUNT0;
        }
        STATUS32 = uVar2;
        local_5c = local_44;
        local_58 = local_40;
        local_54 = local_3c;
        local_50 = local_44;
        local_4c = local_40;
        local_48 = local_3c;
        bVar18 = local_3c < uVar6;
        if (local_3c == uVar6) {
          bVar18 = local_40 < uVar10;
        }
        if ((!bVar18 && (local_3c != uVar6 || local_40 != uVar10)) ||
           ((local_40 == uVar10 && local_3c == uVar6 && (uVar11 < local_44)))) {
          **(undefined4 **)(param_2 + 8) = 1;
          DAT_ram_800378f4 = DAT_ram_800378f4 + 1;
          return local_c8;
        }
        iVar9 = FUN_ram_00102bcc(*(undefined4 *)(param_1 + 0x3b20),*(undefined4 *)(param_2 + 8));
      }
      *(byte *)(iVar16 + 0x10) = *(byte *)(iVar16 + 0x10) & 3 | (byte)(uVar12 << 2);
      FUN_ram_000eea80(&DAT_ram_0020fce4,0,0x14);
      FUN_ram_000eea80(local_bc,0,0x1c);
      FUN_ram_000e7d50(param_1 + 0x3884);
      piVar13 = *(int **)(param_1 + 0x388c);
      puVar15 = (undefined1 *)(iVar16 + 0x11);
      if (piVar13 != (int *)0x0) {
        uVar11 = 0;
        do {
          iVar9 = *piVar13;
          if (((((iVar9 != 0) && (*(int **)(iVar9 + 0x3c) != piVar13)) &&
               ((*(uint *)((int)piVar13 + 0x3c2) & 0x100000) != 0)) &&
              ((iVar8 == iVar9 && (DAT_ram_8002c918 <= (uint)piVar13[0x1f6])))) &&
             (((int)(DAT_ram_80038ee0 - (piVar13[500] + 10000)) < 0 &&
              ((uVar1 = *(ushort *)(piVar13 + 0xf7),
               ((((uVar1 & 8) != 0 && (uVar1 & 4) != 0) && (uVar1 & 0x20) != 0) &&
               (uVar1 & 0x10) != 0) && (uVar1 & 0x80) != 0 && ((uVar1 & 0x40) != 0)))))) {
            if (((int)piVar13 + 0x96U & 1) == 0) {
              if (((DAT_ram_0018c148 == *(short *)((int)piVar13 + 0x9a)) &&
                  (DAT_ram_0018c146 == (short)piVar13[0x26])) &&
                 (DAT_ram_0018c144 == *(short *)((int)piVar13 + 0x96))) {
                iVar9 = 1;
              }
              else {
                iVar9 = 0;
              }
            }
            else {
              uVar10 = FUN_ram_000eeb74((int)piVar13 + 0x96U,&DAT_ram_0018c144,6);
              iVar9 = 1 - uVar10;
              if (1 < uVar10) {
                iVar9 = 0;
              }
            }
            if ((iVar9 == 0) || ((int)uVar11 < 1)) {
              local_bc[uVar11] = piVar13;
              uVar11 = uVar11 + 1;
            }
            else {
              local_bc[uVar11] = local_bc[0];
              uVar11 = uVar11 + 1;
              local_bc[0] = piVar13;
            }
          }
        } while ((uVar11 < 7) && (piVar13 = (int *)piVar13[0x45], piVar13 != (int *)0x0));
      }
      if (local_bc[0] == (int *)0x0) {
        FUN_ram_000e7da8(param_1 + 0x3884);
        iVar8 = *(int *)(iVar8 + 4);
        if (iVar8 == 0) break;
        goto LAB_ram_0012b118;
      }
      iVar14 = 0;
      iVar9 = 0;
      piVar13 = local_bc[0];
      do {
        while( true ) {
          cVar7 = FUN_ram_0012a9ac(param_1,piVar13);
          iVar5 = piVar13[6];
          *puVar15 = (char)(short)iVar5;
          puVar15[1] = (byte)((ushort)(short)iVar5 >> 8) & 0xf | 0x10 | cVar7 << 5;
          puVar15 = puVar15 + 2;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + 1;
          *(int **)((int)&DAT_ram_0020fce0 + iVar9) = piVar13;
          if (5 < iVar14) goto LAB_ram_0012b568;
          iVar9 = iVar14 * 4;
          piVar13 = local_bc[iVar14];
          if (piVar13 == (int *)0x0) goto LAB_ram_0012b568;
        }
        iVar14 = 1;
        iVar9 = 4;
        piVar13 = local_bc[1];
      } while (local_bc[1] != (int *)0x0);
LAB_ram_0012b568:
      FUN_ram_000e7da8(param_1 + 0x3884);
      if (iVar14 < 2) {
LAB_ram_0012b668:
        iVar8 = *(int *)(iVar8 + 4);
      }
      else {
        uVar11 = iVar16 + 10;
        if (*(short *)(param_1 + 0x5aa4) != 0) {
          FUN_ram_000ee260(s__02x__02x__02x__02x__02x__02x_gr_ram_001c41f4,
                           *(undefined1 *)(iVar8 + 0x18),*(undefined1 *)(iVar8 + 0x19),
                           *(undefined1 *)(iVar8 + 0x1a),*(undefined1 *)(iVar8 + 0x1b),
                           *(undefined1 *)(iVar8 + 0x1c),*(undefined1 *)(iVar8 + 0x1d),
                           DAT_ram_80038ee0,uVar12,iVar14);
        }
        DAT_ram_800378f0 = DAT_ram_800378f0 + 1;
        uVar10 = iVar8 + 0x18;
        if ((uVar11 & 1) == 0) {
          if ((uVar10 & 1) == 0) {
            *(undefined2 *)(iVar16 + 10) = *(undefined2 *)(iVar8 + 0x18);
            *(undefined2 *)(iVar16 + 0xc) = *(undefined2 *)(iVar8 + 0x1a);
            *(undefined2 *)(iVar16 + 0xe) = *(undefined2 *)(iVar8 + 0x1c);
          }
          else {
            FUN_ram_0039fe00(uVar11,uVar10,6);
          }
        }
        else {
          FUN_ram_0039fe00(uVar11,uVar10,6);
        }
        if (DAT_ram_0018c110 == '\x01') {
          *(byte *)(iVar16 + 10) = *(byte *)(iVar16 + 10) | 1;
        }
        iVar17 = FUN_ram_0012ab00(param_1,param_2,iVar14);
        if (iVar17 != 0) {
          local_c8 = 1;
          goto LAB_ram_0012b668;
        }
        bVar4 = false;
        iVar8 = *(int *)(iVar8 + 4);
      }
    } while (iVar8 != 0);
    if (bVar4) {
      DAT_ram_0018c19c = DAT_ram_80038ee0;
      DAT_ram_0018c1a0 = DAT_ram_80038ee4;
    }
    if (iVar17 != 0) {
      FUN_ram_000f7c10(700,0,0,&LAB_ram_00134cdc,2);
    }
  }
  return local_c8;
}


