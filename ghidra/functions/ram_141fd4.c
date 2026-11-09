/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141fd4 */

void FUN_ram_00141fd4(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 uVar24;
  uint uVar25;
  int local_60;
  int *local_5c;
  undefined4 *local_58;
  undefined2 *puStack_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  uint uStack_44;
  
  uVar7 = param_3[3];
  iVar11 = *(int *)(**(int **)(*param_1 + 0xc) + 0x1c);
  uVar12 = (uint)*(byte *)(param_3 + 0x937);
  if (*(uint *)(&DAT_ram_00192b38 + uVar12 * 4) < 0x10) {
    FUN_ram_000eea80(*(uint *)(&DAT_ram_00192b38 + uVar12 * 4) * 0xe0 + -0x7ffc7f10 + uVar12 * 0x70,
                     0,0x60);
  }
  *(undefined4 *)(&DAT_ram_00192b48 + uVar12 * 4) = 1;
  iVar16 = param_3[0x93c];
  if (iVar16 == 0) {
    FUN_ram_000ee260(s_MU_mcsset_params_is_NULL_ram_001c52ac);
    FUN_ram_000ee260(&DAT_ram_001c4fd0);
  }
  uVar25 = (uint)*(byte *)(param_3 + 4);
  uVar23 = (uint)*(byte *)(param_3[0x928] + uVar25);
  uVar21 = 0x42;
  bVar2 = *(byte *)(param_3[0x928] + (int)(char)(&DAT_ram_0018f6b4)[uVar23 * 0xc]);
  local_60 = iVar16 + 0x84;
  iVar14 = 0;
  iVar22 = -1;
  puVar19 = param_3 + 0x42;
  local_5c = param_3 + 0x923;
  local_58 = param_3 + 0x83e;
  puStack_54 = (undefined2 *)(iVar16 + 0x8c);
  local_50 = 0x43;
  local_4c = 0;
  iVar16 = 0;
  local_48 = 0;
  uStack_44 = 0;
  uVar13 = 0;
  iVar18 = 0;
  uVar12 = uVar23;
  do {
    uVar8 = puVar19[9];
    if (((uVar23 == uVar21) || (bVar2 == uVar21)) || (uVar7 <= uVar8)) {
      uVar13 = puVar19[0x8f];
      uVar15 = 0;
      if (uVar13 + uVar8 < uVar7) {
        bVar5 = false;
        iVar10 = uVar21 * 0x20 + *local_5c * 4;
        iVar16 = param_3[*local_5c + uVar21 * 8 + 0x4b1];
      }
      else {
        if ((uVar8 < uVar7) && (uVar15 = (uint)*(byte *)(param_2 + 0x16), uVar13 < uVar15)) {
          uVar15 = uVar13 & 0xff;
        }
        iVar16 = uVar15 + uVar8;
        uVar8 = (uint)(local_58[0xe5] + 1 >> 2) >> 0x1d;
        iVar14 = puVar19[0x4c];
        iVar18 = (local_58[0xe5] + 1 + uVar8 & 7) - uVar8;
        iVar10 = uVar21 * 0x20 + iVar18 * 4;
        local_58[0xe5] = iVar18;
        param_3[iVar18 + uVar21 * 8 + 0x4b1] = iVar16;
        param_3[iVar18 + uVar21 * 8 + 0x299] = iVar14 + uVar15;
        param_3[iVar18 + uVar21 * 8 + 0x6c9] = uVar13;
        bVar5 = true;
      }
      iVar18 = 0;
      iVar14 = 0;
      iVar9 = uVar21 * 0x20;
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        iVar14 = iVar14 + *(int *)((int)param_3 + iVar9 + 0x12c4);
        iVar18 = iVar18 + *(int *)((int)param_3 + iVar9 + 0xa64);
        iVar9 = iVar9 + 4;
      } while (iVar6 < 8);
      if (iVar16 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_ram_00141b28(*(undefined4 *)((int)param_3 + iVar10 + 0xa64));
      }
      uVar13 = FUN_ram_00141b28(iVar18,iVar14);
      *(short *)((int)param_3 + uVar21 * 0x16 + 0x49c) = (short)uVar13;
      iVar16 = ((uVar13 ^ 0xffff) & 0xffff) * (uint)*(ushort *)(local_60 + 8);
      if (iVar22 < iVar16) {
        uVar25 = (uint)*(byte *)(param_3[0x927] + uVar21);
        if (1 < *(ushort *)(iVar11 + 0x5aa4)) {
          FUN_ram_000ee260(s_qtn_sscl_adapt_mu__gput__u_>_bes_ram_001c5318,iVar16,iVar22,uStack_44,
                           uVar13,uVar21,(&DAT_ram_001a9058)[uVar25],uVar12);
        }
        local_4c = 1;
        FUN_ram_00141c58(*(undefined1 *)(param_3 + 0x937),uVar25,
                         *(undefined1 *)((int)param_1 + 0x683),uVar21,1,puVar19[9],puVar19[0x4c],
                         puVar19[0x8f],puVar19[0xd2],uVar13,0);
        bVar4 = false;
        iVar22 = iVar16;
        uVar12 = uVar21;
        local_48 = iVar10;
        uStack_44 = uVar13;
        if (DAT_ram_8002c8e4 != 0) {
          if ((*(ushort *)(param_1 + 6) & 0xffff3fff) != DAT_ram_8002c8e4) {
LAB_ram_00142424:
            bVar4 = false;
            if (DAT_ram_8002c8e4 != 0xfe) goto LAB_ram_0014242c;
          }
LAB_ram_0014241c:
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
        if (DAT_ram_8002c8e4 != 0) {
          if (DAT_ram_8002c8e4 != (*(ushort *)(param_1 + 6) & 0xffff3fff)) goto LAB_ram_00142424;
          goto LAB_ram_0014241c;
        }
      }
LAB_ram_0014242c:
      if (bVar4) {
        FUN_ram_000ee260(s_ralg_mu___pM_idx__u_mcs__u_pkt___ram_001c5380,(int)param_1 + 0x96,uVar21,
                         *(undefined1 *)(param_3[0x927] + uVar21),puVar19[9],puVar19[0x4c],
                         puVar19[0x8f],iVar14,iVar18,*(undefined2 *)(local_60 + 8),iVar16,iVar10,
                         uVar13);
      }
      if (bVar5) {
        FUN_ram_00141e0c(param_3,uVar21);
      }
    }
    else {
      if ((((DAT_ram_8002c8e4 != 0) &&
           ((DAT_ram_8002c8e4 == (*(ushort *)(param_1 + 6) & 0xffff3fff) ||
            (DAT_ram_8002c8e4 == 0xfe)))) && (uVar7 < puVar19[0x8f] + uVar8)) &&
         (*(char *)((int)param_3 + uVar21 + 0x454) != '\0')) {
        FUN_ram_000ee260(s_ralg_mu__hwr__pM_idx__u_mcs__u_p_ram_001c52c8,(int)param_1 + 0x96,uVar21,
                         *(undefined1 *)(param_3[0x927] + uVar21),uVar8,puVar19[0x4c],puVar19[0x8f],
                         iVar14,iVar18,*puStack_54,iVar16,0xffff,uVar13);
      }
      *(undefined1 *)((int)param_3 + uVar21 + 0x454) = 0;
    }
    puVar19 = puVar19 + -1;
    local_50 = local_50 + -1;
    local_60 = local_60 + -2;
    local_5c = local_5c + -1;
    local_58 = local_58 + -1;
    puStack_54 = puStack_54 + -1;
    uVar21 = uVar21 - 1;
  } while (local_50 != 0);
  bVar2 = *(byte *)(param_3 + 4);
  if ((iVar22 == 0) || (0x3fff < local_48)) {
    local_4c = 2;
    uVar25 = (uint)(byte)(&DAT_ram_0018f6b4)[(uint)*(byte *)(param_3[0x928] + uVar25) * 0xc];
    uVar12 = (uint)*(byte *)(param_3[0x928] + uVar25);
  }
  iVar16 = param_3[uVar12 + 0x8e1];
  FUN_ram_00141c58(*(undefined1 *)(param_3 + 0x937),uVar25,*(undefined1 *)((int)param_1 + 0x683),
                   uVar12,0,param_3[iVar16 + uVar12 * 8 + 0x4b1],
                   param_3[iVar16 + uVar12 * 8 + 0x299],param_3[iVar16 + uVar12 * 8 + 0x6c9],
                   param_3[uVar12 + 0xd2],uVar13,uVar25 != bVar2);
  bVar5 = false;
  if (uVar25 != bVar2) {
    bVar2 = (&DAT_ram_001a9058)[uVar25];
    if (*(ushort *)(iVar11 + 0x5aa4) < 2) {
      if (((&DAT_ram_001a9058)[*(byte *)(param_3 + 4)] & 0xf0) == (bVar2 & 0xf0))
      goto LAB_ram_001425f4;
LAB_ram_001425fc:
      bVar5 = true;
    }
    else {
      FUN_ram_000ee260(s_qtn_sscl_adapt_mu__chg_mcs_0x_02_ram_001c53cc,
                       (&DAT_ram_001a9058)[*(byte *)(param_3 + 4)],bVar2);
      if (((&DAT_ram_001a9058)[*(byte *)(param_3 + 4)] & 0xf0) != (bVar2 & 0xf0))
      goto LAB_ram_001425fc;
LAB_ram_001425f4:
      bVar5 = false;
    }
    uVar24 = (undefined1)uVar25;
    *(undefined1 *)(param_3 + 4) = uVar24;
    *(undefined1 *)((int)param_3 + 0x11) = uVar24;
    *(undefined1 *)((int)param_3 + 0x12) = uVar24;
    *(undefined1 *)((int)param_3 + 0x13) = uVar24;
    *(undefined1 *)(param_3 + 5) = uVar24;
    *(undefined1 *)((int)param_3 + 0x16) = uVar24;
  }
  FUN_ram_00141e30(*(undefined1 *)(param_3 + 0x937),*(undefined2 *)((int)param_3 + 0x24d6),
                   *(undefined1 *)(param_3 + 0x936),*(undefined1 *)((int)param_3 + 0x24d9),*param_3)
  ;
  iVar16 = param_3[param_3[uVar12 + 0x8e1] + uVar12 * 8 + 0x4b1];
  uVar20 = param_3[param_3[uVar12 + 0x8e1] + uVar12 * 8 + 0x299];
  if (iVar16 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_ram_00141b28(uVar20,iVar16);
  }
  iVar22 = FUN_ram_00141ebc(param_1);
  if ((*(uint *)(iVar11 + 0x5aa8) & 0x1ff) == 0) {
    uVar13 = (uint)(byte)(&DAT_ram_001a9058)[uVar25];
    uVar7 = (uint)*(byte *)((int)param_1 + 0x683);
    if (((&DAT_ram_001a9058)[uVar25] & 0x40) == 0) {
      if ((uVar13 & 0xf) < 10) {
        uVar3 = *(ushort *)
                 ((int)(&DAT_ram_001a972c +
                       (uint)(*(char *)((int)param_1 + 0x682) != '\0') * 0xa0 + uVar7 * 0x140 +
                       ((int)uVar13 >> 4 & 3U) * 0x14) + (uVar13 & 0xf) * 2);
      }
      else {
        uVar3 = *(ushort *)
                 (&DAT_ram_001a972c +
                 (uint)(*(char *)((int)param_1 + 0x682) != '\0') * 0xa0 + uVar7 * 0x140 +
                 ((int)uVar13 >> 4 & 3U) * 0x14);
      }
    }
    else {
      uVar21 = (uint)(*(char *)((int)param_1 + 0x682) != '\0');
      uVar13 = (uVar13 & 0xffffffbf) + 0x21;
      if (uVar13 < 0x21) {
        uVar3 = *(ushort *)(&PTR_DAT_ram_00340027_ram_001a9eac + uVar7 * 0x2c + uVar21 * 0x16);
      }
      else if (uVar13 < 0x4d) {
        uVar3 = *(ushort *)(uVar21 * 0x58 + uVar7 * 0xb0 + 0x1a9e6a + uVar13 * 2);
      }
      else {
        uVar3 = *(ushort *)(&PTR_DAT_ram_00340027_ram_001a9eac + uVar7 * 0x2c + uVar21 * 0x16);
      }
    }
    if ((uint)(iVar22 >> 1) <= (uint)uVar3) goto LAB_ram_001427a8;
    *(undefined2 *)((int)param_3 + 0x24d6) = 2;
    bVar4 = false;
    if (DAT_ram_8002c8e4 == 0) goto LAB_ram_001427e0;
    if ((*(ushort *)(param_1 + 6) & 0xffff3fff) != DAT_ram_8002c8e4) goto LAB_ram_001427d8;
  }
  else {
LAB_ram_001427a8:
    *(undefined2 *)((int)param_3 + 0x24d6) = 7;
    bVar4 = false;
    if (DAT_ram_8002c8e4 == 0) goto LAB_ram_001427e0;
    if ((*(ushort *)(param_1 + 6) & 0xffff3fff) != DAT_ram_8002c8e4) {
LAB_ram_001427d8:
      bVar4 = false;
      if (DAT_ram_8002c8e4 != 0xfe) goto LAB_ram_001427e0;
    }
  }
  bVar4 = true;
LAB_ram_001427e0:
  if (bVar4) {
    FUN_ram_000ee260(s_ralg_mu___pM_best_rate__u_pkt_lo_ram_001c53fc,(int)param_1 + 0x96,
                     *(undefined1 *)(param_3[0x927] + uVar12),uVar17,iVar16,uVar20,local_4c);
  }
  iVar16 = FUN_ram_0013f26c(iVar11,param_3,uVar17,1);
  if (bVar5 || iVar16 != 0) {
    iVar16 = 1 - (uint)*(byte *)(param_3 + 0x937);
    if (1 < *(byte *)(param_3 + 0x937)) {
      iVar16 = 0;
    }
    FUN_ram_0013f26c(iVar11,*(undefined4 *)
                             ((uint)*(byte *)((int)param_3 + 0x24db) * 0x50 + iVar11 + 0x46b8 +
                             iVar16 * 4),0,0);
  }
  cVar1 = *(char *)(param_3 + 0x937);
  *(uint *)param_1[0x132] = *(uint *)param_1[0x132] | 0x20;
  if ((cVar1 == '\x01') && (DAT_ram_8002c8e4 == 0xfe)) {
    DAT_ram_8002c8e4 = 0;
  }
  return;
}


