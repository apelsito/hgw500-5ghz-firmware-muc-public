/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001432f4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_001432f4(int *param_1,int param_2,uint *param_3)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  int iVar26;
  undefined2 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined *puVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  int local_cc;
  int local_b8;
  uint local_a0;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_60;
  int local_5c;
  uint local_54;
  uint local_50;
  
  iVar10 = DAT_ram_001a9240;
  local_50 = DAT_ram_001a9234;
  local_cc = 0;
  iVar26 = *param_1;
  uVar5 = *(ushort *)(param_1 + 3) >> 0xe;
  uVar13 = uVar5 & 1;
  if (((int)(((uint)*(ushort *)(param_2 + 10) + param_3[7]) - DAT_ram_80038ee0) < 0) ||
     ((*(ushort *)(param_2 + 0xc) & 1) != 0)) {
    iVar22 = 1;
    if ((uVar5 & 1) != 0) {
      local_b8 = 0;
      goto LAB_ram_0014340c;
    }
    if (((int)(uint)*(ushort *)(param_2 + 0xc) >> 5 & 1U) != 0) goto LAB_ram_00143484;
    if (DAT_ram_0018c104 != 0) {
      local_b8 = 0;
      goto LAB_ram_00143460;
    }
    local_b8 = 0;
    local_cc = iVar22;
LAB_ram_00143498:
    bVar7 = true;
  }
  else {
    local_b8 = (int)(char)param_3[8] >> 2;
    if ((uVar5 & 1) == 0) {
      if (((int)(uint)*(ushort *)(param_2 + 0xc) >> 5 & 1U) != 0) {
        bVar7 = false;
        goto LAB_ram_0014349c;
      }
      if (DAT_ram_0018c104 == 0) goto LAB_ram_00143498;
      iVar22 = 0;
LAB_ram_00143460:
      local_cc = iVar22;
      if ((uint)param_1[0x102] < DAT_ram_0018c108) goto LAB_ram_00143498;
      local_cc = local_b8;
    }
    else {
      iVar22 = 0;
LAB_ram_0014340c:
      if (((int)(uint)*(ushort *)(param_2 + 0xc) >> 6 & 1U) == 0) {
        local_cc = iVar22;
        if (DAT_ram_0018c104 == 0) goto LAB_ram_00143498;
        goto LAB_ram_00143460;
      }
      local_cc = local_b8;
    }
LAB_ram_00143484:
    bVar7 = false;
    local_b8 = local_cc;
    local_cc = iVar22;
  }
LAB_ram_0014349c:
  cVar4 = *(char *)(param_3[0x92d] + (uint)(byte)param_3[4]);
  if (DAT_ram_0018c20c < 0x10) {
    FUN_ram_000eea80(&DAT_ram_800379f0 + DAT_ram_0018c20c * 0x38,0,0x60);
  }
  DAT_ram_80037894 = *param_3;
  DAT_ram_0018c210 = 1;
  iVar22 = param_1[0x131];
  iVar14 = iVar22 + 0x8e;
  iVar15 = iVar22 + 8;
  if (iVar15 == 8) {
    DAT_ram_0018c210 = 1;
    return;
  }
  local_a0 = (uint)(byte)param_3[4];
  uVar33 = (uint)*(byte *)(param_3[0x928] + local_a0);
  uVar23 = (uint)*(ushort *)(iVar15 + uVar33 * 2);
  if ((DAT_ram_8002c8e4 == 0) ||
     ((DAT_ram_8002c8e4 != (*(ushort *)(param_1 + 6) & 0xffff3fff) && (DAT_ram_8002c8e4 != 0xff))))
  {
    bVar34 = false;
  }
  else {
    bVar34 = true;
  }
  if (bVar34) {
    FUN_ram_000ee260(s_ralg___pM_idx__u_mcs__u_wt__u_pe_ram_001c5508,(int)param_1 + 0x96,uVar33,
                     local_a0,uVar23,param_3[0x126],*(undefined1 *)((int)param_1 + 0x683));
    local_a0 = (uint)(byte)param_3[4];
  }
  local_90 = (uint)*(byte *)((int)param_3 + 0x11);
  local_88 = (uint)*(byte *)((int)param_1 + 0x683);
  uVar30 = 0x42;
  local_80 = 0;
  local_7c = 0xffffffff;
  local_78 = 0x43;
  puVar31 = &UNK_auxregs_03e8;
  uVar32 = 0;
  local_6c = 0xffffffff;
  local_70 = local_a0;
  local_68 = 0;
  local_8c = local_90;
  do {
    uVar8 = param_3[3];
    uVar28 = 0;
    uVar29 = uVar8;
    if (((0x2e < (int)uVar30) || (*(char *)(param_3[0x92d] + (uint)(byte)param_3[4]) != '\0')) &&
       (5 < uVar8)) {
      uVar29 = 6;
    }
    iVar11 = iVar22 + uVar30 * 2;
    uVar24 = (uint)*(ushort *)(iVar11 + 8);
    if (uVar24 != 0) {
      uVar2 = *(ushort *)(param_1 + 3);
      bVar12 = *(byte *)(param_3[0x927] + uVar30);
      uVar16 = (uint)bVar12;
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 0x4000) != 0) {
          iVar18 = param_1[0x132];
          goto LAB_ram_001436a4;
        }
        if (7 < uVar16) goto LAB_ram_00143fb4;
LAB_ram_001436ec:
        uVar20 = param_3[uVar30 + 0x8f];
        uVar19 = param_3[uVar30 + 9];
        if (uVar20 + uVar19 == 0) {
          if (uVar30 == uVar33) goto joined_r0x0014375c;
        }
        else {
          if (uVar30 == uVar33) {
joined_r0x0014375c:
            if ((uVar19 < uVar29 * 2) && ((*param_3 >> 5 & 1) != 0)) {
              *param_3 = *param_3 & 0xffffffdf | 1;
            }
          }
          if ((uVar23 < uVar24) && (uVar19 < uVar29)) {
            if ((DAT_ram_8002c8e4 == 0) ||
               ((DAT_ram_8002c8e4 != (*(ushort *)(param_1 + 6) & 0xffff3fff) &&
                (DAT_ram_8002c8e4 != 0xff)))) {
              if (*(char *)((int)param_3 + uVar30 + 0x454) != '\0') goto LAB_ram_001438bc;
            }
            else {
              FUN_ram_000ee260(s_ralg___u_idx__u_mcs__u_pkt__u__u_ram_001c5534,1,uVar30,uVar16,
                               uVar19,param_3[uVar30 + 0x4c]);
              if (*(char *)((int)param_3 + uVar30 + 0x454) != '\0') {
                uVar19 = param_3[uVar30 + 9];
LAB_ram_001438bc:
                if ((uVar19 == 0) && (param_3[uVar30 + 0x8f] != 0)) {
                  FUN_ram_00142b84(*(undefined1 *)(param_3[0x927] + uVar30),
                                   (uint)*(byte *)(param_3[0x92c] + uVar30) +
                                   (uint)*(byte *)((int)param_1 + 0x683) + -1,uVar30,1,uVar13,uVar32
                                   ,param_3[uVar30 + 0x4c] + uVar32,param_3[uVar30 + 0x8f],
                                   param_3[uVar30 + 0xd2],0,uVar30 == uVar33);
                  *(undefined1 *)((int)param_3 + uVar30 + 0x454) = 0;
                }
              }
            }
          }
          else {
            if (uVar20 + uVar19 < uVar29) {
              uVar16 = param_3[uVar30 * 8 + 0x4b1] + param_3[uVar30 * 8 + 0x4b2] +
                       param_3[uVar30 * 8 + 0x4b3] + param_3[uVar30 * 8 + 0x4b4] +
                       param_3[uVar30 * 8 + 0x4b5] + param_3[uVar30 * 8 + 0x4b6] +
                       param_3[uVar30 * 8 + 0x4b7] + param_3[uVar30 * 8 + 0x4b8];
              if (uVar16 == 0) goto LAB_ram_00143fb4;
              puVar9 = (ushort *)((int)param_3 + uVar30 * 0x16 + 0x49c);
              if (local_cc == 0) {
                puVar9 = (ushort *)FUN_ram_00141938(puVar9,local_b8,0);
                uVar24 = (uint)*(ushort *)(iVar11 + 8);
              }
              uVar29 = (uint)*puVar9;
              local_60 = 2;
              uVar24 = (uVar29 ^ 0xffff) * uVar24;
              local_5c = (int)param_3 + uVar30 + 0x3f8;
              if ((uVar30 == uVar33) || (bVar34 = false, *(char *)(local_5c + 0x5c) != '\0')) {
                bVar34 = false;
                local_54 = 0;
                goto LAB_ram_00143bb4;
              }
              local_54 = 0;
LAB_ram_00143cf4:
              uVar8 = local_68;
            }
            else {
              if (uVar19 < uVar8) {
                uVar32 = (uint)*(byte *)(param_2 + 0x16);
                if (uVar20 < *(byte *)(param_2 + 0x16)) {
                  uVar32 = uVar20;
                }
              }
              else if (((*(char *)((int)param_1 + 0x65) == '\x02') && (bVar7)) && (cVar4 != '\0')) {
                uVar32 = uVar20;
                if (0xf < uVar20) {
                  uVar32 = 0x10;
                }
              }
              else {
                uVar32 = 0;
              }
              iVar18 = uVar30 * 0x20;
              uVar16 = (uint)((int)(param_3[uVar30 + 0x8e1] + 1) >> 2) >> 0x1d;
              uVar16 = (param_3[uVar30 + 0x8e1] + 1 + uVar16 & 7) - uVar16;
              param_3[uVar30 + 0x8e1] = uVar16;
              param_3[uVar16 + uVar30 * 8 + 0x4b1] = uVar19 + uVar32;
              uVar8 = param_3[uVar30 + 0x4c];
              param_3[uVar16 + uVar30 * 8 + 0x299] = uVar8 + uVar32;
              if (uVar30 == uVar33) {
                param_3[uVar16 + uVar30 * 8 + 0x6c9] = uVar20;
              }
              else {
                param_3[uVar16 + uVar30 * 8 + 0x6c9] = 0;
              }
              iVar21 = 0;
              uVar16 = 0;
              uVar17 = 0;
              uVar20 = 0;
              do {
                uVar16 = uVar16 + *(int *)((int)param_3 + iVar18 + 0x12c4);
                uVar17 = uVar17 + *(int *)((int)param_3 + iVar18 + 0x1b24);
                iVar21 = iVar21 + 1;
                uVar20 = uVar20 + *(int *)((int)param_3 + iVar18 + 0xa64);
                iVar18 = iVar18 + 4;
              } while (iVar21 < 8);
              if ((uVar16 < uVar29) && (uVar16 != uVar20)) {
                puVar9 = (ushort *)((int)param_3 + uVar30 * 0x16 + 0x49c);
                if (local_cc == 0) {
                  puVar9 = (ushort *)FUN_ram_00141938(puVar9,local_b8,0);
                  uVar24 = (uint)*(ushort *)(iVar11 + 8);
                }
                uVar29 = (uint)*puVar9;
                uVar24 = (uVar29 ^ 0xffff) * uVar24;
                FUN_ram_00141e0c(param_3,uVar30);
                local_60 = 3;
                local_54 = uVar28;
                if (uVar30 != uVar33) {
                  cVar1 = *(char *)((int)param_3 + uVar30 + 0x454);
                  uVar28 = uVar20;
                  goto joined_r0x00143ac0;
                }
              }
              else {
                if ((uVar30 == uVar33) && (((int)(uint)*(ushort *)(iVar22 + 2) >> 1 & 1U) != 0)) {
                  uVar28 = uVar32;
                  if (uVar32 <= uVar17 >> 3) {
                    uVar28 = uVar17 >> 3;
                  }
                  uVar20 = uVar20 + uVar28;
                  uVar16 = uVar16 + uVar28;
                }
                local_60 = 4;
                local_54 = FUN_ram_00141b28(uVar8 + uVar32,uVar19 + uVar32);
                puVar27 = (undefined2 *)((int)param_3 + uVar30 * 0x16 + 0x49c);
                if (local_cc == 0) {
                  puVar27 = (undefined2 *)FUN_ram_00141938(puVar27,local_b8,local_54);
                }
                uVar29 = FUN_ram_00141b28(uVar20,uVar16);
                *puVar27 = (short)uVar29;
                iVar18 = FUN_ram_00142f54(param_1,param_2,param_3,iVar22,uVar30,uVar29,local_54,
                                          uVar23);
                if (iVar18 != 0) {
                  FUN_ram_00142b84(*(undefined1 *)(param_3[0x927] + uVar30),
                                   (uint)*(byte *)(param_3[0x92c] + uVar30) +
                                   (uint)*(byte *)((int)param_1 + 0x683) + -1,uVar30,5,uVar13,
                                   param_3[uVar30 + 9] + uVar32,param_3[uVar30 + 0x4c] + uVar32,
                                   param_3[uVar30 + 0x8f],param_3[uVar30 + 0xd2],0,uVar30 == uVar33)
                  ;
                  FUN_ram_001430ec(*(undefined2 *)((int)param_3 + 0x24d6),(char)param_3[0x936],
                                   *(undefined1 *)((int)param_3 + 0x24d9),
                                   *(undefined1 *)((int)param_3 + 0x24da),*param_3);
                  return;
                }
                uVar28 = uVar20;
                if ((uVar30 == uVar33) || ((int)local_54 < 0x7fff)) {
                  uVar24 = ((uVar29 ^ 0xffff) & 0xffff) * (uint)*(ushort *)(iVar11 + 8);
                  if (uVar30 == uVar33) goto LAB_ram_00143bac;
                  cVar1 = *(char *)((int)param_3 + uVar30 + 0x454);
                }
                else {
                  cVar1 = *(char *)((int)param_3 + uVar30 + 0x454);
                  uVar24 = ((local_54 ^ 0xffff) & 0xffff) * (uint)*(ushort *)(iVar11 + 8);
                }
joined_r0x00143ac0:
                uVar20 = uVar28;
                if (cVar1 == '\0') {
                  bVar34 = true;
                  goto LAB_ram_00143cf4;
                }
              }
LAB_ram_00143bac:
              uVar28 = uVar20;
              local_5c = (int)param_3 + uVar30 + 0x3f8;
              bVar34 = true;
LAB_ram_00143bb4:
              FUN_ram_00142b84(*(undefined1 *)(param_3[0x927] + uVar30),
                               (uint)*(byte *)((int)param_1 + 0x683) +
                               (uint)*(byte *)(param_3[0x92c] + uVar30) + -1,uVar30,local_60,uVar13,
                               param_3[uVar30 + 9] + uVar32,param_3[uVar30 + 0x4c] + uVar32,
                               param_3[uVar30 + 0x8f],param_3[uVar30 + 0xd2],uVar29,uVar30 == uVar33
                              );
              *(undefined1 *)(local_5c + 0x5c) = 0;
              uVar8 = uVar24;
              if (uVar30 != uVar33) goto LAB_ram_00143cf4;
            }
            local_68 = uVar8;
            if (((DAT_ram_0018c218 != 2) || ((uVar30 & 1) == 0)) &&
               ((DAT_ram_0018c218 != 1 || ((uVar30 & 1) != 0)))) {
              uVar8 = param_3[0x928];
              uVar19 = (uint)*(byte *)(param_3[0x927] + uVar30);
              uVar20 = param_1[0x102];
              bVar12 = *(byte *)((int)param_1 + 0x683);
              if (uVar19 == (int)*(char *)(iVar22 + 0x99 +
                                          (uint)*(byte *)(uVar8 + (byte)param_3[4]) * 0xc)) {
                param_3[0x925] = uVar24;
              }
              if ((bVar12 < uVar20) && (*(char *)(param_3[0x92d] + uVar19) == '\0')) {
                if ((int)local_6c < (int)uVar24) {
                  local_6c = uVar24;
                }
              }
              else {
                uVar20 = (uint)*(byte *)(param_3[0x92c] + uVar30);
                if ((bVar7) && (cVar4 != '\0')) {
                  if (uVar20 == 1) {
LAB_ram_00143dd0:
                    if (1 < uVar20) {
                      cVar1 = *(char *)((int)param_3 + 0x24ca);
joined_r0x00143ddc:
                      if (cVar1 == '\0') goto LAB_ram_00143dc0;
                    }
                  }
                  else {
                    if (param_3[0x298] != 0) goto LAB_ram_00143dc0;
                    if (1 < uVar20) {
                      cVar1 = *(char *)((int)param_3 + 0x24ca);
                      goto joined_r0x00143ddc;
                    }
                  }
                  uVar17 = local_8c;
                  if (uVar20 == 1) {
                    if ((int)local_50 < (int)uVar24) {
                      puVar3 = *(undefined **)(iVar11 + 8);
                      uVar8 = uVar24;
                    }
                    else {
                      if (local_50 == 0) {
                        uVar8 = 0;
                      }
                      if ((local_50 != 0 || uVar24 != 0) ||
                         (puVar3 = *(undefined **)(iVar11 + 8), puVar31 <= puVar3)) {
                        if ((((int)(uint)*(ushort *)(param_2 + 0xc) >> 1 & 1U) == 0) &&
                           (iVar10 < (int)uVar24)) {
                          local_90 = uVar19;
                        }
joined_r0x00143f20:
                        uVar17 = local_8c;
                        goto joined_r0x00143f38;
                      }
                    }
                    local_70 = uVar19;
                    local_50 = uVar8;
                    local_90 = uVar19;
                    local_80 = uVar29;
                    puVar31 = puVar3;
                    if (uVar19 != 0) {
                      local_90 = (uint)*(byte *)(iVar14 + uVar30 * 0xc);
                    }
                  }
                  else {
                    if ((int)local_7c < (int)uVar24) {
                      puVar3 = *(undefined **)(iVar11 + 8);
                    }
                    else if ((local_7c != 0 || uVar24 != 0) ||
                            (puVar3 = *(undefined **)(iVar11 + 8), puVar31 <= puVar3)) {
                      if ((((int)(uint)*(ushort *)(param_2 + 0xc) >> 1 & 1U) != 0) ||
                         (uVar17 = uVar19, (int)uVar24 <= iVar10)) goto joined_r0x00143f20;
                      goto joined_r0x00143f38;
                    }
                    local_88 = (bVar12 + uVar20) - 1 & 0xff;
                    uVar17 = (uint)*(byte *)(iVar14 + (uint)*(byte *)(uVar8 + uVar19) * 0xc);
                    local_a0 = uVar19;
                    local_80 = uVar29;
                    local_7c = uVar24;
                    puVar31 = puVar3;
                  }
joined_r0x00143f38:
                  local_8c = uVar17;
                  bVar6 = false;
                  if ((DAT_ram_8002c8e4 != 0) &&
                     ((bVar6 = false, DAT_ram_8002c8e4 == (*(ushort *)(param_1 + 6) & 0xffff3fff) ||
                      (DAT_ram_8002c8e4 == 0xff)))) {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    FUN_ram_000ee260(s_ralg___u_idx__u_mcs__u_pkt__u__u_ram_001c5560,local_60,uVar30
                                     ,uVar19,param_3[uVar30 + 9],param_3[uVar30 + 0x4c],
                                     param_3[uVar30 + 0x8f],uVar16,uVar28,
                                     *(undefined2 *)(iVar11 + 8),uVar24,local_54,uVar29);
                  }
                  if (!bVar34) goto LAB_ram_00143fb4;
                }
                else if (uVar20 == 1) goto LAB_ram_00143dd0;
              }
LAB_ram_00143dc0:
              FUN_ram_00141e0c(param_3,uVar30);
            }
          }
        }
      }
      else {
        iVar18 = param_1[0x132];
        if ((uVar2 & 0x4000) == 0) {
          if (uVar16 < 0x4d) {
            uVar19 = 1 << (uVar16 & 7) & 0xff;
            if (((*(byte *)((int)param_1 + (bVar12 >> 3) + 0x78) & uVar19) != 0) &&
               (((byte)(&DAT_ram_0018d420)[bVar12 >> 3] & uVar19) == 0)) goto LAB_ram_001436ec;
          }
        }
        else {
LAB_ram_001436a4:
          uVar19 = 1 << (uVar16 & 7) & 0xff;
          if (((*(byte *)(iVar18 + 0x24cb + (uint)(bVar12 >> 3)) & uVar19) == 0) &&
             (((byte)(&DAT_ram_00192b58)
                     [(uint)(bVar12 >> 3) + (uint)*(byte *)((int)param_1 + 0x683) * 10] & uVar19) !=
              0)) goto LAB_ram_001436ec;
        }
      }
    }
LAB_ram_00143fb4:
    uVar30 = uVar30 - 1;
    local_78 = local_78 + -1;
  } while (local_78 != 0);
  bVar34 = true;
  if (bVar7) {
    if (param_3[0x298] != 0) {
      param_3[0x298] = param_3[0x298] - 1;
      goto LAB_ram_001441b4;
    }
    if ((int)local_7c <= (int)local_50) goto LAB_ram_001441b4;
    bVar12 = *(byte *)((int)param_1 + 0x683);
    param_3[0x298] = (uint)*(byte *)(param_2 + 0x17);
    uVar32 = DAT_ram_80038ee4;
    if (local_88 == bVar12 - 1) {
      bVar12 = (byte)param_3[0x932];
      param_3[(uint)bVar12 * 2 + 0x92e] = DAT_ram_80038ee0;
      *(byte *)(param_3 + 0x932) = bVar12 + 1;
      uVar30 = param_3[0x932];
      param_3[(uint)bVar12 * 2 + 0x92f] = uVar32;
      *(undefined1 *)((int)param_3 + 0x24c9) = 0;
      if ((char)uVar30 != '\0') {
        if ((int)(DAT_ram_80038ee0 - (param_3[0x92e] + 30000)) < 0) {
          *(undefined1 *)((int)param_3 + 0x24ca) = 1;
          if ((DAT_ram_8002c8e4 != 0) &&
             ((DAT_ram_8002c8e4 == (*(ushort *)(param_1 + 6) & 0xffff3fff) ||
              (DAT_ram_8002c8e4 == 0xff)))) {
            FUN_ram_000ee260(s__adapt__Changing_bw_from__d_to___ram_001c55a8,
                             *(undefined1 *)((int)param_1 + 0x683),local_88);
          }
          bVar34 = false;
        }
        *(undefined1 *)(param_3 + 0x932) = 0;
      }
    }
    else if (local_88 == bVar12 + 1) {
      uVar30 = (uint)*(byte *)((int)param_3 + 0x24c9);
      param_3[uVar30 * 2 + 0x930] = DAT_ram_80038ee0;
      param_3[uVar30 * 2 + 0x931] = uVar32;
      *(char *)((int)param_3 + 0x24c9) = (char)(uVar30 + 1);
      *(undefined1 *)(param_3 + 0x932) = 0;
      if ((DAT_ram_8002c8e4 == 0) ||
         ((DAT_ram_8002c8e4 != (*(ushort *)(param_1 + 6) & 0xffff3fff) && (DAT_ram_8002c8e4 != 0xff)
          ))) {
        if ((uVar30 + 1 & 0xff) != 0) goto LAB_ram_00144168;
      }
      else {
        FUN_ram_000ee260(s__adapt__Changing_bw_from__d_to___ram_001c55a8,
                         *(undefined1 *)((int)param_1 + 0x683),local_88);
        if (*(char *)((int)param_3 + 0x24c9) != '\0') {
LAB_ram_00144168:
          bVar34 = -1 < (int)(DAT_ram_80038ee0 - (param_3[0x930] + 30000));
          *(undefined1 *)((int)param_3 + 0x24c9) = 0;
        }
      }
    }
    DAT_ram_0018c220 = DAT_ram_0018c220 + 1;
    if (bVar34) goto LAB_ram_001441b4;
    if (local_88 == 0) {
      uVar23 = 0;
      *(undefined1 *)((int)param_1 + 0x683) = 0;
      if (DAT_ram_8002c8e4 != 0) goto LAB_ram_001442fc;
      bVar7 = false;
    }
    else {
      uVar32 = param_1[0x102];
      if (local_88 == 1) {
        if (uVar32 < 2) {
          uVar23 = uVar32 & 0xff;
          *(char *)((int)param_1 + 0x683) = (char)uVar32;
        }
        else {
          uVar23 = 1;
          *(undefined1 *)((int)param_1 + 0x683) = 1;
        }
      }
      else if (uVar32 < 3) {
        uVar23 = uVar32 & 0xff;
        *(char *)((int)param_1 + 0x683) = (char)uVar32;
      }
      else {
        uVar23 = 2;
        *(undefined1 *)((int)param_1 + 0x683) = 2;
      }
      bVar7 = false;
      if (DAT_ram_8002c8e4 != 0) {
LAB_ram_001442fc:
        bVar7 = false;
        if ((DAT_ram_8002c8e4 == (*(ushort *)(param_1 + 6) & 0xffff3fff)) ||
           (DAT_ram_8002c8e4 == 0xff)) {
          bVar7 = true;
        }
      }
    }
    if (bVar7) {
      FUN_ram_000ee260(s_ralg_bw__new_bw__d_rates_0__x_1___ram_001c55cc,uVar23,local_a0,local_8c);
    }
    FUN_ram_0014316c(param_1,param_3);
    uVar32 = *param_3;
  }
  else {
LAB_ram_001441b4:
    uVar32 = *param_3;
    uVar30 = local_68;
    if ((uVar23 == *(ushort *)(iVar15 + (uint)*(byte *)(param_3[0x928] + local_70) * 2)) &&
       ((*(ushort *)(iVar22 + 2) & 1) != 0)) {
      uVar30 = ((int)local_68 >> 5) + local_68;
    }
    if (uVar30 < local_50) {
      local_7c = local_50;
      local_a0 = local_70;
      local_8c = local_90;
    }
    else {
      local_a0 = (uint)(byte)param_3[4];
      local_8c = (uint)*(byte *)((int)param_3 + 0x11);
      local_7c = local_68;
    }
  }
  FUN_ram_001430ec(*(undefined2 *)((int)param_3 + 0x24d6),(char)param_3[0x936],
                   *(undefined1 *)((int)param_3 + 0x24d9),*(undefined1 *)((int)param_3 + 0x24da),
                   uVar32);
  if (local_7c == 0) {
    uVar23 = param_3[0x928];
    local_a0 = (uint)*(byte *)(iVar14 + (uint)*(byte *)(uVar23 + local_a0) * 0xc);
    local_8c = (uint)*(byte *)(iVar14 + (uint)*(byte *)(uVar23 + local_8c) * 0xc);
    if (*(char *)(iVar26 + 0x40) != '\x01') goto LAB_ram_001443e4;
    bVar12 = *(byte *)(iVar26 + 0x41);
joined_r0x001443ca:
    if ((((uVar5 & 1) != 0) && ((bVar12 & 0x80) != 0)) || ((uVar5 & 1) == 0 && (bVar12 & 0x80) == 0)
       ) goto LAB_ram_001443e0;
    *(char *)(param_3 + 4) = (char)(bVar12 & 0xffffff7f);
    *(byte *)((int)param_3 + 0x11) = *(byte *)(iVar26 + 0x42) & 0x7f;
    bVar25 = *(byte *)(iVar26 + 0x43) & 0x7f;
    *(byte *)((int)param_3 + 0x12) = bVar25;
    *(byte *)((int)param_3 + 0x13) = *(byte *)(iVar26 + 0x44) & 0x7f;
    if (0x9f < puVar31) {
      uVar23 = param_3[0x928];
      uVar32 = bVar12 & 0xffffff7f;
      goto LAB_ram_0014447c;
    }
    *(byte *)((int)param_3 + 0x16) = bVar25;
  }
  else {
    if (*(char *)(iVar26 + 0x40) == '\x01') {
      bVar12 = *(byte *)(iVar26 + 0x41);
      goto joined_r0x001443ca;
    }
LAB_ram_001443e0:
    uVar23 = param_3[0x928];
LAB_ram_001443e4:
    *(char *)(param_3 + 4) = (char)local_a0;
    *(char *)((int)param_3 + 0x11) = (char)local_8c;
    bVar12 = *(byte *)(iVar14 + (uint)*(byte *)(uVar23 + local_8c) * 0xc);
    *(byte *)((int)param_3 + 0x12) = bVar12;
    *(undefined1 *)((int)param_3 + 0x13) =
         *(undefined1 *)(iVar14 + (uint)*(byte *)(uVar23 + bVar12) * 0xc);
    uVar32 = local_a0;
    if (puVar31 < 0xa0) {
      *(byte *)((int)param_3 + 0x16) = bVar12;
    }
    else {
LAB_ram_0014447c:
      *(undefined1 *)((int)param_3 + 0x16) =
           *(undefined1 *)(iVar14 + (uint)*(byte *)(uVar23 + uVar32) * 0xc);
    }
  }
  param_3[0x924] = local_7c;
  param_3[0x926] = local_6c;
  if ((int)param_3[0x924] < (int)local_6c) {
    *(undefined1 *)((int)param_3 + 0x24ca) = 1;
  }
  *(char *)((int)param_3 + 0x15) = (char)local_a0;
  FUN_ram_00137600(param_1[1],param_1,local_a0,*(undefined1 *)((int)param_1 + 0x683),
                   *(undefined1 *)((int)param_1 + 0x682),param_3[0x126]);
  if (((DAT_ram_8002c8e4 != 0) &&
      ((DAT_ram_8002c8e4 == (*(ushort *)(param_1 + 6) & 0xffff3fff) || (DAT_ram_8002c8e4 == 0xff))))
     && (*(byte *)(param_3[0x928] + local_a0) != uVar33)) {
    FUN_ram_000ee260(s_ralg__new_rate_mcs__u_per__u_bw__ram_001c55f0,(char)param_3[4],param_3[0x126]
                     ,*(undefined1 *)((int)param_1 + 0x683));
  }
  param_3[0x126] = local_80;
  uVar5 = *(ushort *)(param_2 + 0xe);
  if ((uint)uVar5 <= (uint)(ushort)param_3[6]) {
    if ((uint)*(ushort *)(param_2 + 0x10) < (uint)(ushort)param_3[6]) {
      *(char *)(param_3 + 5) = (char)param_3[4];
    }
    goto LAB_ram_001445ac;
  }
  bVar12 = (byte)param_3[4];
  iVar10 = (byte)param_3[5] - 1;
  bVar25 = *(byte *)((int)param_3 + 0x13);
  if (iVar10 < (int)(uint)bVar12) {
    if ((int)(uint)bVar25 < iVar10) {
      bVar12 = (byte)iVar10;
    }
    else {
LAB_ram_00144578:
      bVar12 = bVar25;
    }
  }
  else if ((uint)bVar12 <= (uint)bVar25) goto LAB_ram_00144578;
  *(byte *)(param_3 + 5) = bVar12;
  *(short *)(param_3 + 6) = (short)((int)((uint)uVar5 + (uint)*(ushort *)(param_2 + 0x10)) >> 1);
LAB_ram_001445ac:
  DAT_ram_0018c224 = local_7c;
  FUN_ram_0013d37c(param_1);
  if (DAT_ram_8002c8e4 == 0xff) {
    DAT_ram_8002c8e4 = 0;
  }
  return;
}


