/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013f26c */

undefined4 FUN_ram_0013f26c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  ushort local_138;
  undefined1 local_136;
  byte local_135;
  byte local_134;
  byte local_133;
  byte local_132;
  uint local_12c;
  int local_128;
  undefined *local_11c;
  undefined1 local_11a;
  byte local_119;
  undefined1 auStack_114 [76];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_a8 [76];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_3c;
  
  uVar9 = *(undefined4 *)(param_1 + 0x3b20);
  uVar14 = 0;
  if (param_2 == 0) {
    return 0;
  }
  piVar13 = *(int **)(param_2 + 0x24e0);
  if (piVar13 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x24f0) == 0) {
    return 0;
  }
  iVar15 = *piVar13;
  if (iVar15 == 0) {
    return 0;
  }
  FUN_ram_000eea80(&local_15c,0,0x24);
  FUN_ram_000eea80(&local_138,0,0x24);
  if (*(char *)(*piVar13 + 0x50) == '\x01') {
    bVar3 = FUN_ram_0013ea84(*(undefined1 *)(*piVar13 + 0x51 + (uint)*(byte *)(param_2 + 0x24dc)),1)
    ;
    local_15c = CONCAT13(bVar3,(undefined3)local_15c);
    local_158._0_2_ = CONCAT11(bVar3,bVar3);
    local_158._0_3_ = CONCAT12(bVar3,(undefined2)local_158);
  }
  else {
    bVar3 = *(byte *)(param_2 + 0x10);
    local_15c = CONCAT13(bVar3,(undefined3)local_15c);
    local_158._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 0x10),*(undefined1 *)(param_2 + 0x10));
    local_158._0_3_ = CONCAT12(*(undefined1 *)(param_2 + 0x10),(undefined2)local_158);
  }
  uVar10 = (uint)(byte)(&DAT_ram_001a9058)[bVar3];
  uVar6 = local_140 >> 0x18;
  if (((&DAT_ram_001a9058)[bVar3] & 0x40) == 0) {
    if ((uVar10 & 0xf) < 10) {
      local_150 = (uint)*(ushort *)
                         ((int)(&DAT_ram_001a972c +
                               uVar6 * 0x140 +
                               (uint)(*(char *)((int)piVar13 + 0x682) != '\0') * 0xa0 +
                               ((int)uVar10 >> 4 & 3U) * 0x14) + (uVar10 & 0xf) * 2);
    }
    else {
      local_150 = (uint)*(ushort *)
                         (&DAT_ram_001a972c +
                         uVar6 * 0x140 + (uint)(*(char *)((int)piVar13 + 0x682) != '\0') * 0xa0 +
                         ((int)uVar10 >> 4 & 3U) * 0x14);
    }
  }
  else {
    uVar12 = (uint)(*(char *)((int)piVar13 + 0x682) != '\0');
    uVar10 = (uVar10 & 0xffffffbf) + 0x21;
    if ((uVar10 < 0x21) || (0x4c < uVar10)) {
      local_150 = (uint)*(ushort *)
                         (&PTR_DAT_ram_00340027_ram_001a9eac + uVar12 * 0x16 + uVar6 * 0x2c);
    }
    else {
      local_150 = (uint)*(ushort *)(uVar6 * 0xb0 + uVar12 * 0x58 + 0x1a9e6a + uVar10 * 2);
    }
  }
  FUN_ram_0013e9ec(&local_15c,0xff,1);
  local_15c._0_3_ = CONCAT12(1,(ushort)local_15c | 0x42);
  local_140 = CONCAT13(*(undefined1 *)((int)piVar13 + 0x683),(undefined3)local_140);
  uVar6 = (int)(uint)local_15c._3_1_ >> 4 & 3;
  uVar10 = local_15c._3_1_ & 0xf;
  iVar7 = uVar6 - 4;
  bVar16 = SBORROW4(uVar6,4);
  if (uVar6 < 4) {
    iVar7 = uVar10 - 10;
    bVar16 = SBORROW4(uVar10,10);
  }
  if (bVar16 == iVar7 < 0) {
    local_14c = 0x1000;
  }
  else {
    local_14c = (uint)*(ushort *)(&DAT_ram_001a89b8 + uVar6 * 0x14 + uVar10 * 2) << 5;
  }
  FUN_ram_0013eb7c(*(undefined4 *)(param_2 + 0x24e0),&local_15c);
  FUN_ram_0013f05c(param_1,param_2,local_15c,local_158,local_154,local_150,local_14c,local_148,
                   local_144,local_140,local_13c);
  uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0x24a0) + (uint)*(byte *)(param_2 + 0x10));
  uVar10 = (uint)(byte)(&DAT_ram_001a91a8)[DAT_ram_0018c200 & 0x7f];
  DAT_ram_0018c200 = (DAT_ram_0018c200 & 0x7f) + 1;
  if (0xb < uVar10) {
    FUN_ram_000ee260(s_randindex__d_exceeding_ADJ_MCS_N_ram_001c4fa4,uVar10);
    FUN_ram_000ee260(&DAT_ram_001c4fd0);
  }
  if (param_4 == 0) {
    uVar12 = (uint)*(byte *)(param_2 + 0x17);
    if (1 < *(ushort *)(param_1 + 0x5aa4)) {
      uVar5 = (uint)*(byte *)(param_2 + 0x24db);
      uVar14 = 0;
      goto LAB_ram_0013f65c;
    }
    iVar7 = *piVar13;
    cVar1 = *(char *)(iVar7 + 0x50);
joined_r0x0013f694:
    if (cVar1 == '\x01') goto LAB_ram_0013f69c;
LAB_ram_0013f648:
    local_132 = (byte)uVar12;
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x24db);
    cVar1 = *(char *)(param_1 + 0x4770 + uVar5 * 0x50 + -0xa0);
    iVar7 = uVar5 * 0x50 + param_1 + 0x4770;
    iVar8 = uVar10 + uVar6 * 0xc;
    if (cVar1 == *(char *)(param_2 + 0x24dc)) {
      uVar12 = (uint)*(byte *)(*(int *)(param_2 + 0x24f0) + 0x3b2 + iVar8);
      if (((&DAT_ram_001a9058)[*(byte *)(param_2 + 0x17)] & 0xf0) ==
          ((&DAT_ram_001a9058)[uVar12] & 0xf0)) goto LAB_ram_0013f5c8;
      uVar14 = 1;
    }
    else {
      uVar12 = (uint)(byte)(&DAT_ram_0018f6b4)[iVar8];
LAB_ram_0013f5c8:
      uVar14 = 0;
    }
    *(char *)(param_2 + 0x17) = (char)uVar12;
    *(char *)(iVar7 + -0xa0) = cVar1 + '\x01';
    if ((byte)(cVar1 + 1U) < 2) {
      if (*(ushort *)(param_1 + 0x5aa4) < 2) {
        iVar7 = *piVar13;
        cVar1 = *(char *)(iVar7 + 0x50);
        goto joined_r0x0013f694;
      }
LAB_ram_0013f65c:
      FUN_ram_000ee260(s_sscl_publish_rate_mu__grp__d_new_ram_001c4fd4,uVar5,
                       (&DAT_ram_001a9058)[uVar12],uVar6,uVar10);
      iVar7 = *piVar13;
      cVar1 = *(char *)(iVar7 + 0x50);
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x5aa4);
      *(undefined1 *)(iVar7 + -0xa0) = 0;
      if (1 < uVar2) goto LAB_ram_0013f65c;
      iVar7 = *piVar13;
      cVar1 = *(char *)(iVar7 + 0x50);
    }
    if (cVar1 != '\x01') goto LAB_ram_0013f648;
LAB_ram_0013f69c:
    local_132 = FUN_ram_0013ea84(*(undefined1 *)(iVar7 + 0x51 + (uint)*(byte *)(param_2 + 0x24dc)),1
                                );
  }
  local_135 = local_132;
  local_134 = local_132;
  local_133 = local_132;
  FUN_ram_0013f08c(param_2,uVar12,*(undefined1 *)((int)piVar13 + 0x683),uVar10);
  uVar10 = (uint)(byte)(&DAT_ram_001a9058)[local_135];
  uVar6 = (uint)local_119;
  if (((&DAT_ram_001a9058)[local_135] & 0x40) == 0) {
    if ((uVar10 & 0xf) < 10) {
      local_12c = (uint)*(ushort *)
                         ((int)(&DAT_ram_001a972c +
                               (uint)(*(char *)((int)piVar13 + 0x682) != '\0') * 0xa0 +
                               uVar6 * 0x140 + ((int)uVar10 >> 4 & 3U) * 0x14) + (uVar10 & 0xf) * 2)
      ;
    }
    else {
      local_12c = (uint)*(ushort *)
                         (&DAT_ram_001a972c +
                         (uint)(*(char *)((int)piVar13 + 0x682) != '\0') * 0xa0 + uVar6 * 0x140 +
                         ((int)uVar10 >> 4 & 3U) * 0x14);
    }
  }
  else {
    uVar12 = (uint)(*(char *)((int)piVar13 + 0x682) != '\0');
    uVar10 = (uVar10 & 0xffffffbf) + 0x21;
    if ((uVar10 < 0x21) || (0x4c < uVar10)) {
      local_12c = (uint)*(ushort *)
                         (&PTR_DAT_ram_00340027_ram_001a9eac + uVar6 * 0x2c + uVar12 * 0x16);
    }
    else {
      local_12c = (uint)*(ushort *)(uVar12 * 0x58 + uVar6 * 0xb0 + 0x1a9e6a + uVar10 * 2);
    }
  }
  FUN_ram_0013e9ec(&local_138,0xff,1);
  local_138 = local_138 | 2;
  local_119 = *(byte *)((int)piVar13 + 0x683);
  uVar6 = (uint)local_119;
  uVar10 = (uint)local_135;
  local_136 = 1;
  uVar12 = (int)uVar10 >> 4 & 3;
  uVar5 = uVar10 & 0xf;
  iVar7 = uVar12 - 4;
  bVar16 = SBORROW4(uVar12,4);
  if (uVar12 < 4) {
    iVar7 = uVar5 - 10;
    bVar16 = SBORROW4(uVar5,10);
  }
  if (iVar7 < 0 == bVar16) {
    local_128 = 0x1000;
  }
  else {
    local_128 = (uint)*(ushort *)(&DAT_ram_001a89b8 + uVar12 * 0x14 + uVar5 * 2) << 5;
  }
  if ((*(char *)(iVar15 + 0x2c) == '\x01') || ((char)piVar13[0x19] != '\0')) {
    if (2 < uVar6) goto LAB_ram_0013f838;
    if ((local_135 & 0x40) == 0) {
      bVar16 = true;
      goto LAB_ram_0013f81c;
    }
LAB_ram_0013f870:
    if (0x2b < (uVar10 & 0xffffffbf)) goto LAB_ram_0013f838;
    local_11a = *(undefined1 *)((uVar10 & 0xffffffbf) + uVar6 * 0x2c + 0x1a8bcc);
  }
  else {
    if (uVar6 < 3) {
      if ((local_135 & 0x40) != 0) goto LAB_ram_0013f870;
      bVar16 = false;
LAB_ram_0013f81c:
      uVar12 = (int)uVar10 >> 4 & 3;
      if (uVar12 == 0) {
        if (bVar16) goto LAB_ram_0013f840;
      }
      else if (uVar12 < 4) {
LAB_ram_0013f840:
        if ((uVar10 & 0xf) < 10) {
          local_11a = *(undefined1 *)((uVar10 & 0xf) + uVar12 * 10 + uVar6 * 0x28 + 0x1a8a58);
          goto LAB_ram_0013f8a0;
        }
      }
    }
LAB_ram_0013f838:
    local_11a = 0;
  }
LAB_ram_0013f8a0:
  local_11c = &UNK_auxregs_0ef7;
  if (DAT_ram_0018c0ec != 0) {
    if ((*(ushort *)(piVar13 + 3) & 0x4000) == 0) {
      if ((*(ushort *)((int)piVar13 + 0x6e) & 1) != 0) goto LAB_ram_0013f8ec;
    }
    else if ((*(uint *)((int)piVar13 + 0x3c2) & 0x10) != 0) {
LAB_ram_0013f8ec:
      uVar11 = 1;
      goto LAB_ram_0013f8f0;
    }
  }
  uVar11 = 0;
LAB_ram_0013f8f0:
  *(char *)((uint)*(byte *)(param_2 + 0x24db) * 0x50 +
           (uint)*(byte *)(param_2 + 0x24dc) + param_1 + 0x46c8) =
       (char)((int)(local_15c >> 0x18) >> 4) + '\x01';
  uStack_3c = 0;
  uVar4 = FUN_ram_0013f100((uint)*(byte *)(param_2 + 0x24db) * 0x50 + param_1 + 0x46a4,&uStack_3c,0)
  ;
  FUN_ram_000e45d0(auStack_114,uVar9,(int)&local_15c + 3,1,1,uVar4,uStack_3c,(char)piVar13[0x102],
                   *(undefined1 *)(param_1 + 0x474),*(undefined1 *)((int)piVar13 + 0x682),uVar11,0,0
                   ,0,8,*(undefined1 *)(param_2 + 0x24dc));
  *(char *)((uint)*(byte *)(param_2 + 0x24db) * 0x50 +
           (uint)*(byte *)(param_2 + 0x24dc) + param_1 + 0x46cc) =
       (char)((int)(uint)local_135 >> 4) + '\x01';
  uStack_3c = 0;
  uVar4 = FUN_ram_0013f100((uint)*(byte *)(param_2 + 0x24db) * 0x50 + param_1 + 0x46a4,&uStack_3c,1)
  ;
  FUN_ram_000e45d0(auStack_a8,uVar9,&local_135,1,1,uVar4,uStack_3c,(char)piVar13[0x102],
                   *(undefined1 *)(param_1 + 0x474),*(undefined1 *)((int)piVar13 + 0x682),uVar11,0,0
                   ,0,8,*(undefined1 *)(param_2 + 0x24dc));
  if ((DAT_ram_8002c8e4 != 0) &&
     ((DAT_ram_8002c8e4 == (*(ushort *)(piVar13 + 6) & 0xffff3fff) || (DAT_ram_8002c8e4 == 0xfe))))
  {
    FUN_ram_000ee260(s_ralg_mu___pM_pos__d__x__x___x__x_ram_001c5028,(int)piVar13 + 0x96,
                     *(undefined1 *)(param_2 + 0x24dc),local_c8,local_c4,local_5c,local_58);
    param_1 = param_1 + 0x47dc;
    iVar15 = (uint)*(byte *)(param_2 + 0x24db) * 0x50;
    FUN_ram_000ee260(s_ralg_mu__matrix_offsets_1_1__x_2_ram_001c5054,
                     *(undefined4 *)(param_1 + iVar15 + -0x108),
                     *(undefined4 *)(param_1 + iVar15 + -0x104),
                     *(undefined4 *)(param_1 + iVar15 + -0x100),
                     *(undefined4 *)(param_1 + iVar15 + -0xfc),
                     *(undefined4 *)(param_1 + iVar15 + -0xf8),
                     *(undefined4 *)(param_1 + iVar15 + -0xf4));
    FUN_ram_000ee260(s_ralg_mu__max_ampdu__d_amsdu__d_a_ram_001c509c,local_14c,local_140 & 0xffff,
                     local_140._2_1_);
  }
  FUN_ram_00159014(piVar13,&local_c8,&local_5c,0,local_15c & 0xffff,
                   *(undefined1 *)(param_2 + 0x24d6),local_14c,local_128,local_14c,0,
                   local_150 & 0xffff,local_140 & 0xffff,local_140 >> 0x10 & 0xff,
                   *(undefined1 *)(param_2 + 0x24db),*(undefined1 *)(param_2 + 0x24dc),local_14c,
                   param_3);
  return uVar14;
}


