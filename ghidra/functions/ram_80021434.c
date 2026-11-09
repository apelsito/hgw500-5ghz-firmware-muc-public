/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80021434 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_80021434(undefined4 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined4 *puVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  uint *puVar29;
  bool bVar30;
  bool bVar31;
  byte *local_b0;
  ushort local_ac;
  undefined1 local_aa;
  undefined4 *local_a8;
  int local_a4;
  byte *local_a0;
  int local_9c;
  short local_98 [7];
  ushort local_8a [2];
  undefined1 auStack_86 [14];
  byte *local_78;
  ushort local_74;
  byte local_72 [2];
  ushort local_70 [28];
  
  uVar5 = *(uint *)(param_2 + 0x88);
  local_a0 = (byte *)0x0;
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
  uVar18 = 0;
  if (DAT_ram_8002c908 == '\0') {
    return 0;
  }
  puVar9 = *(undefined4 **)(param_2 + 0x98);
  if ((*(byte *)(puVar9 + 0x116) & 7) == 0) {
    uVar28 = uVar5 >> 0x10;
    iVar14 = **(ushort **)*puVar9 - 2;
    if (**(ushort **)*puVar9 < 2) {
      iVar14 = 0;
    }
    local_aa = (undefined1)(uVar5 >> 2);
    local_a4 = *(int *)(*(int *)(uVar12 + 0xb4) + iVar14 * 4);
    pbVar21 = *(byte **)(param_2 + 0x84);
    local_ac = 0;
    if (DAT_ram_8002c964 != 0) {
      if ((*(ushort *)(local_a4 + 6) & 1) == 0) {
        uVar17 = *(ushort *)(local_a4 + 2);
      }
      else {
        uVar17 = *(ushort *)(local_a4 + 0x10 + (uint)*(byte *)(puVar9 + 0x19f) * 2);
      }
      uVar18 = (uint)uVar17 | (*(ushort *)(local_a4 + 4) & 7) << 0xd;
    }
    puVar29 = *(uint **)(uVar12 + 0xc4);
    uVar12 = DAT_ram_8002c964 & 0xff;
    bVar8 = *pbVar21;
    bVar10 = pbVar21[1];
    bVar7 = bVar10 & 3;
    local_b0 = pbVar21;
    local_a8 = puVar9;
    if (((bVar8 & 0xc) == 8) && (((bVar8 & 0xf0) == 0 || ((bVar8 & 0xf0) == 0x80)))) {
      if ((bVar8 & 0x8c) == 0x88) {
        if (bVar7 == 3) {
          bVar1 = pbVar21[0x1e];
        }
        else {
          bVar1 = pbVar21[0x18];
        }
        bVar4 = bVar1 & 0xf;
        if ((bVar1 & 0x80) == 0) goto LAB_ram_800216b0;
        bVar30 = true;
        if (bVar7 == 3) goto LAB_ram_800216c0;
LAB_ram_800216a0:
        uVar15 = 0x18;
      }
      else {
        bVar4 = 0xfe;
LAB_ram_800216b0:
        bVar30 = false;
        if (bVar7 != 3) goto LAB_ram_800216a0;
        bVar30 = false;
LAB_ram_800216c0:
        uVar15 = 0x1e;
      }
      uVar16 = uVar15;
      if (((bVar8 & 0x8c) == 0x88) && (uVar16 = uVar15 + 2, (bVar10 & 0x80) != 0)) {
        uVar16 = uVar15 + 6;
      }
      if (uVar16 < uVar28) {
        uVar17 = (ushort)uVar18;
        if (bVar30) {
          DAT_ram_800370f0 = DAT_ram_800370f0 + 1;
          pbVar23 = pbVar21 + uVar16;
          if (uVar16 < uVar28) {
            FUN_ram_80025588(pbVar23,0x3e);
            uVar15 = (int)(uint)*(ushort *)(pbVar23 + 0xc) >> 8 |
                     (*(ushort *)(pbVar23 + 0xc) & 0xff) << 8;
            uVar5 = uVar15 + 0xe & 0xffff;
            piVar27 = (int *)0x0;
            if (0xd < uVar5) {
              uVar24 = 0;
              piVar26 = &local_9c;
              piVar27 = (int *)0x0;
              do {
                pbVar19 = pbVar23 + 0xe;
                uVar16 = uVar28 - uVar16;
                iVar14 = uVar5 - uVar16;
                bVar30 = uVar5 == uVar16;
                bVar31 = SBORROW4(uVar5,uVar16);
                if ((int)uVar5 <= (int)uVar16) {
                  iVar14 = uVar5 - 0x1008;
                  bVar30 = uVar5 == 0x1008;
                  bVar31 = SBORROW4(uVar5,0x1008);
                }
                if (!bVar30 && iVar14 < 0 == bVar31) break;
                uVar5 = (uVar5 + 3 & 0xfffffffc) - uVar5;
                pbVar20 = pbVar19 + (uVar5 & 0xffff) + uVar15;
                uVar16 = (int)pbVar20 - (int)pbVar21 & 0xffff;
                bVar8 = pbVar23[0x13];
                puVar13 = (ushort *)((int)piVar26 + 0x12);
                uVar11 = *(ushort *)(pbVar23 + 0x14);
                *(undefined1 *)((int)piVar26 + 0x2b) = 0;
                *(undefined2 *)(piVar26 + 0xb) = 0;
                if (uVar12 == 0) {
                  bVar7 = *pbVar19;
LAB_ram_80021c8c:
                  iVar14 = 0;
                }
                else {
                  local_70[0x1a] = 0;
                  uVar25 = uVar18;
                  if (uVar11 == 0x81) {
                    uVar3 = CONCAT11(pbVar23[0x16],pbVar23[0x17]);
                    if ((uVar3 & 0xfff) == 0) {
                      *(ushort *)(piVar26 + 0xb) = uVar17;
                      iVar14 = 0;
                    }
                    else {
                      *(ushort *)(piVar26 + 0xb) = uVar3;
                      iVar14 = 1;
                      uVar25 = (uint)uVar3;
                    }
                  }
                  else {
                    *(ushort *)(piVar26 + 0xb) = uVar17;
                    iVar14 = 2;
                  }
                  uVar2 = puVar29[(int)(uVar25 & 0xfff) >> 4] >> (uVar25 & 0xf) * 2 & 3;
                  if (uVar2 == 0) {
                    bVar10 = 0;
                  }
                  else {
                    if (uVar2 == 2) {
                      local_70[0x1a] = (ushort)uVar25;
                      iVar14 = iVar14 * 3 + 1;
                    }
                    else if ((*puVar29 & 3) == 2) {
                      iVar14 = iVar14 * 3;
                      local_70[0x1a] = uVar17 & 0xf000;
                    }
                    else {
                      iVar14 = iVar14 * 3 + 2;
                    }
                    bVar10 = *(byte *)(iVar14 + 0x1a61d4);
                  }
                  bVar7 = *pbVar19;
                  if ((bVar10 & 2) == 0) {
                    if ((bVar10 & 1) != 0) {
                      iVar14 = 0;
                      goto joined_r0x80021c9c;
                    }
                    goto LAB_ram_80021c8c;
                  }
                  uVar11 = *(ushort *)(pbVar23 + 0x18);
                  iVar14 = 4;
                  if ((bVar10 & 1) != 0) {
joined_r0x80021c9c:
                    if (uVar11 != 0x8e88) {
                      *puVar13 = 0x81;
                      *(ushort *)(piVar26 + 5) = local_70[0x1a] >> 8 | local_70[0x1a] << 8;
                      puVar13 = (ushort *)((int)piVar26 + 0x16);
                      *(char *)((int)piVar26 + 0x2b) = *(char *)((int)piVar26 + 0x2b) + '\x01';
                    }
                  }
                }
                if (((bVar7 == 0xaa) && (pbVar23[0xf] == 0xaa)) &&
                   ((pbVar23[0x10] == 3 && ((pbVar23[0x11] == 0 && (pbVar23[0x12] == 0)))))) {
                  if (bVar8 != 0xf8) {
                    if ((bVar8 != 0) || (uVar11 == 0xf380 || uVar11 == 0x3781))
                    goto LAB_ram_80021da0;
                    if ((((uVar11 == 0xb788) && (pbVar23[0x16] == 0)) && (pbVar23[0x17] == 0x26)) &&
                       ((pbVar23[0x18] == 0x86 && (*(short *)(pbVar23 + 0x19) == 0x100)))) {
                      if (&stack0x00000000 != (undefined1 *)0xa0) {
                        local_a0 = pbVar23 + 0x1b;
                      }
                      goto LAB_ram_80021e14;
                    }
                  }
                  pbVar6 = pbVar19 + iVar14 + 8;
                  *puVar13 = uVar11;
                  pbVar19 = pbVar6;
                }
                else {
LAB_ram_80021da0:
                  pbVar6 = pbVar23 + 0x16;
                  *puVar13 = (ushort)(uVar15 >> 8) | (ushort)((uVar15 & 0xff) << 8);
                }
                piVar26[9] = (int)pbVar6;
                *(ushort *)(piVar26 + 10) = uVar11;
                iVar14 = (int)pbVar19 - (*(char *)((int)piVar26 + 0x2b) * 4 + 0xeU & 0xffff);
                *piVar26 = iVar14;
                if (iVar14 == 0) goto LAB_ram_80021e14;
                if ((piVar27 != (int *)0x0) &&
                   (iVar22 = FUN_ram_800229a8(piVar27,&local_b0), iVar22 != 0))
                goto LAB_ram_80021fac;
                if (((uint)pbVar23 & 1) == 0) {
                  *(undefined2 *)((int)piVar26 + 6) = *(undefined2 *)pbVar23;
                  *(undefined2 *)(piVar26 + 2) = *(undefined2 *)(pbVar23 + 2);
                  *(undefined2 *)((int)piVar26 + 10) = *(undefined2 *)(pbVar23 + 4);
                }
                else {
                  FUN_ram_0039fe00((int)piVar26 + 6,pbVar23,6);
                }
                if (((uint)(pbVar23 + 6) & 1) == 0) {
                  *(undefined2 *)(piVar26 + 3) = *(undefined2 *)(pbVar23 + 6);
                  *(undefined2 *)((int)piVar26 + 0xe) = *(undefined2 *)(pbVar23 + 8);
                  *(undefined2 *)(piVar26 + 4) = *(undefined2 *)(pbVar23 + 10);
                }
                else {
                  FUN_ram_0039fe00(piVar26 + 3,pbVar23 + 6,6);
                }
                *(short *)(piVar26 + 1) = ((short)pbVar20 - (short)iVar14) - (short)uVar5;
                uVar11 = 1 - (short)piVar27;
                if ((int *)0x1 < piVar27) {
                  uVar11 = 0;
                }
                uVar25 = 1 - uVar24;
                *(byte *)((int)piVar26 + 0x2a) = bVar4;
                if (1 < uVar24) {
                  uVar25 = 0;
                }
                *(ushort *)((int)piVar26 + 0x2e) =
                     *(ushort *)((int)piVar26 + 0x2e) & 0xfff0 | uVar11 | 4;
                piVar27 = piVar26;
                if (uVar28 <= uVar16) break;
                FUN_ram_80025588(pbVar20,0x3e);
                uVar15 = (int)(uint)*(ushort *)(pbVar20 + 0xc) >> 8 |
                         (*(ushort *)(pbVar20 + 0xc) & 0xff) << 8;
                uVar5 = uVar15 + 0xe & 0xffff;
                pbVar23 = pbVar20;
                uVar24 = uVar25;
                piVar26 = &local_9c + uVar25 * 0xc;
              } while (0xd < uVar5);
            }
            if (piVar27 == (int *)0x0) goto LAB_ram_80021fac;
            *(ushort *)((int)piVar27 + 0x2e) = *(ushort *)((int)piVar27 + 0x2e) & 0xfffd | 2;
            iVar14 = FUN_ram_800229a8(piVar27,&local_b0);
            uVar5 = (uint)local_ac;
            if (iVar14 == 0) {
              if (uVar5 == 0) {
                iVar14 = 0;
                goto LAB_ram_80021ea4;
              }
              goto LAB_ram_80021e1c;
            }
          }
          else {
LAB_ram_80021fac:
            uVar5 = (uint)local_ac;
          }
LAB_ram_80021aa0:
          if (uVar5 == 0) {
LAB_ram_80021aa8:
            iVar14 = -5;
            goto LAB_ram_80021ea4;
          }
        }
        else {
          if ((bVar10 & 3) != 0) {
            if (bVar7 == 1) {
              pbVar23 = pbVar21 + 0x10;
              goto LAB_ram_80021764;
            }
            if (bVar7 == 2) {
              pbVar19 = pbVar21 + 0x10;
              pbVar23 = pbVar21 + 4;
              local_70[1] = local_70[1] & 0xfff7 | 8;
              goto LAB_ram_800217a4;
            }
            if (bVar7 == 3) {
              pbVar23 = pbVar21 + 0x10;
              pbVar19 = pbVar21 + 0x18;
              if (((uint)(pbVar21 + 4) & 1) == 0 && ((uint)pbVar23 & 1) == 0) {
                if (((*(short *)(pbVar21 + 0x14) == *(short *)(pbVar21 + 8)) &&
                    (*(short *)(pbVar21 + 0x12) == *(short *)(pbVar21 + 6))) &&
                   (*(short *)(pbVar21 + 0x10) == *(short *)(pbVar21 + 4))) {
LAB_ram_80021750:
                  local_70[1] = local_70[1] & 0xfff7 | 8;
                }
              }
              else {
                uVar15 = FUN_ram_000eeb74(pbVar21 + 4,pbVar23,6);
                iVar14 = 1 - uVar15;
                if (1 < uVar15) {
                  iVar14 = 0;
                }
                if (iVar14 != 0) goto LAB_ram_80021750;
              }
              goto LAB_ram_800217a4;
            }
            goto LAB_ram_80021aa8;
          }
          pbVar23 = pbVar21 + 4;
LAB_ram_80021764:
          pbVar19 = pbVar21 + 10;
LAB_ram_800217a4:
          if (((uint)pbVar23 & 1) == 0) {
            local_98[1] = *(short *)pbVar23;
            local_98[2] = *(short *)(pbVar23 + 2);
            local_98[3] = *(short *)(pbVar23 + 4);
          }
          else {
            FUN_ram_0039fe00(local_98 + 1,pbVar23,6);
          }
          if (((uint)pbVar19 & 1) == 0) {
            local_98[4] = *(short *)pbVar19;
            local_98[5] = *(short *)(pbVar19 + 2);
            local_98[6] = *(short *)(pbVar19 + 4);
          }
          else {
            FUN_ram_0039fe00(local_98 + 4,pbVar19,6);
          }
          pbVar23 = pbVar21 + uVar16;
          puVar13 = (ushort *)(local_98 + 7);
          uVar11 = CONCAT11(pbVar21[uVar16 + 7],pbVar21[uVar16 + 6]);
          local_72[1] = '\0';
          local_70[0] = 0;
          if (uVar12 == 0) {
            bVar10 = *pbVar23;
LAB_ram_8002191c:
            iVar14 = 0;
          }
          else {
            local_70[0x1a] = 0;
            if (uVar11 == 0x81) {
              local_70[0] = CONCAT11(pbVar23[8],pbVar23[9]);
              if ((local_70[0] & 0xfff) == 0) {
                iVar14 = 0;
                local_70[0] = uVar17;
              }
              else {
                iVar14 = 1;
                uVar18 = (uint)local_70[0];
              }
            }
            else {
              iVar14 = 2;
              local_70[0] = uVar17;
            }
            uVar12 = puVar29[(int)(uVar18 & 0xfff) >> 4] >> (uVar18 & 0xf) * 2 & 3;
            if (uVar12 == 0) {
              bVar8 = 0;
            }
            else {
              if (uVar12 == 2) {
                local_70[0x1a] = (ushort)uVar18;
                iVar14 = iVar14 * 3 + 1;
              }
              else if ((*puVar29 & 3) == 2) {
                local_70[0x1a] = uVar17 & 0xf000;
                iVar14 = iVar14 * 3;
              }
              else {
                iVar14 = iVar14 * 3 + 2;
              }
              bVar8 = *(byte *)(iVar14 + 0x1a61d4);
            }
            bVar10 = *pbVar23;
            if ((bVar8 & 2) == 0) {
              if ((bVar8 & 1) != 0) {
                iVar14 = 0;
                goto joined_r0x8002192c;
              }
              goto LAB_ram_8002191c;
            }
            uVar11 = *(ushort *)(pbVar23 + 10);
            iVar14 = 4;
            if ((bVar8 & 1) != 0) {
joined_r0x8002192c:
              if (uVar11 != 0x8e88) {
                local_8a[0] = 0x81;
                local_72[1] = '\x01';
                local_8a[1] = local_70[0x1a] >> 8 | local_70[0x1a] << 8;
                puVar13 = (ushort *)(local_98 + 9);
              }
            }
          }
          if (((bVar10 == 0xaa) && (pbVar23[1] == 0xaa)) &&
             ((pbVar23[2] == 3 && ((pbVar23[3] == 0 && (pbVar23[4] == 0)))))) {
            if (pbVar21[uVar16 + 5] == 0xf8) {
LAB_ram_800219b0:
              pbVar23 = pbVar23 + iVar14 + 8;
              *puVar13 = uVar11;
              local_78 = pbVar23;
              goto LAB_ram_80021a48;
            }
            if ((pbVar21[uVar16 + 5] != 0) || (uVar11 == 0xf380 || uVar11 == 0x3781))
            goto LAB_ram_80021a28;
            if ((((uVar11 != 0xb788) || (pbVar23[8] != 0)) || (pbVar23[9] != 0x26)) ||
               ((pbVar23[10] != 0x86 || (*(short *)(pbVar23 + 0xb) != 0x100))))
            goto LAB_ram_800219b0;
            if (&stack0x00000000 != (undefined1 *)0xa0) {
              local_a0 = pbVar23 + 0xd;
            }
          }
          else {
LAB_ram_80021a28:
            local_78 = pbVar23 + 8;
            *puVar13 = (ushort)(uVar28 - uVar16 >> 8) & 0xff |
                       (ushort)((uVar28 - uVar16 & 0xff) << 8);
LAB_ram_80021a48:
            local_9c = (int)pbVar23 - ((char)local_72[1] * 4 + 0xe);
            local_74 = uVar11;
            if (local_9c != 0) {
              local_98[0] = ((short)pbVar21 + (short)(uVar5 >> 0x10)) - (short)local_9c;
              local_70[1] = local_70[1] & 0xfff8 | 7;
              local_72[0] = bVar4;
              iVar14 = FUN_ram_800229a8(&local_9c,&local_b0);
              uVar5 = (uint)local_ac;
              if (iVar14 != 0) goto LAB_ram_80021aa0;
              if (uVar5 != 0) goto LAB_ram_80021e1c;
              iVar14 = -1;
              goto LAB_ram_80021ea4;
            }
          }
LAB_ram_80021e14:
          uVar5 = (uint)local_ac;
          if (uVar5 == 0) {
            iVar14 = -2;
            goto LAB_ram_80021ea4;
          }
        }
LAB_ram_80021e1c:
        if ((local_b0 < (byte *)0x6ec400) || ((byte *)0x26ec3ff < local_b0)) {
          if ((local_b0 < (byte *)0x26fc400) || ((byte *)0x48fc3ff < local_b0)) {
            iVar14 = 0;
          }
          else {
            iVar14 = ((uint)(local_b0 + -0x26fc400) / 0x4400) * 0x40 + 0x6bc0c0;
          }
        }
        else {
          iVar14 = ((uint)(local_b0 + -0x6ec400) >> 0xc) * 0x40 + 0x63c080;
        }
        *(uint *)(iVar14 + -4) = uVar5;
        DAT_ram_8003703c = DAT_ram_8003703c + 1;
        goto LAB_ram_800220ac;
      }
      iVar14 = -4;
    }
    else {
      iVar14 = -3;
    }
LAB_ram_80021ea4:
    if (iVar14 == -2) {
      FUN_ram_00114470(puVar9,local_a0,uVar28);
    }
    else if ((iVar14 == -1) || (iVar14 == 0)) {
      DAT_ram_80037054 = DAT_ram_80037054 + 1;
    }
    else {
      DAT_ram_80037058 = DAT_ram_80037058 + 1;
    }
    pbVar21 = local_b0;
    uVar5 = STATUS32;
    if ((uVar5 & 2) != 0) {
      STATUS32 = uVar5 & 0xfffffffd;
    }
    if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
      iVar14 = 0;
      bVar30 = false;
      do {
        iVar22 = 0;
        do {
          sync();
          iVar22 = iVar22 + 1;
        } while (iVar22 < 10);
        if ((!bVar30) && (iVar14 = iVar14 + 1, iVar14 == 0x3e9)) {
          FUN_ram_000ee260(s_MuC___s_ram_001c19a4,s___topaz_hbm_wait_timeout_ram_001c1cd0);
          bVar30 = true;
        }
      } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
    }
    sync();
    _DAT_ram_e1020114 = 0xd;
    sync();
    _DAT_ram_e1020144 = pbVar21;
  }
  else {
    pbVar21 = *(byte **)(param_2 + 0x84);
    uVar5 = STATUS32;
    if ((uVar5 & 2) != 0) {
      STATUS32 = uVar5 & 0xfffffffd;
    }
    if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
      iVar14 = 0;
      do {
        iVar22 = 0;
        do {
          sync();
          iVar22 = iVar22 + 1;
        } while (iVar22 < 10);
        if ((uVar18 == 0) && (iVar14 = iVar14 + 1, iVar14 == 0x3e9)) {
          FUN_ram_000ee260(s_MuC___s_ram_001c19a4,s___topaz_hbm_wait_timeout_ram_001c1cd0);
          uVar18 = 1;
        }
      } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
    }
    sync();
    _DAT_ram_e1020114 = 5;
    sync();
    _DAT_ram_e1020144 = pbVar21;
  }
  STATUS32 = uVar5;
LAB_ram_800220ac:
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x98) = 0;
  *(int *)(param_2 + 0x8c) = DAT_ram_8002c96c;
  DAT_ram_80037014 = DAT_ram_80037014 + 1;
  DAT_ram_8002c974 = DAT_ram_8002c974 + 1;
  DAT_ram_8002c96c = param_2;
  return 1;
}


