/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800229a8 */

/* WARNING: Removing unreachable block (ram,0x80022d78) */
/* WARNING: Removing unreachable block (ram,0x80022efc) */
/* WARNING: Removing unreachable block (ram,0x80022d94) */
/* WARNING: Removing unreachable block (ram,0x80022dc0) */
/* WARNING: Removing unreachable block (ram,0x80022de4) */
/* WARNING: Removing unreachable block (ram,0x80022dec) */
/* WARNING: Removing unreachable block (ram,0x80022dfc) */
/* WARNING: Removing unreachable block (ram,0x80022e0c) */
/* WARNING: Removing unreachable block (ram,0x80022e1c) */
/* WARNING: Removing unreachable block (ram,0x80022e4c) */
/* WARNING: Removing unreachable block (ram,0x80022e5e) */
/* WARNING: Removing unreachable block (ram,0x80022e62) */
/* WARNING: Removing unreachable block (ram,0x80022e24) */
/* WARNING: Removing unreachable block (ram,0x80022e30) */
/* WARNING: Removing unreachable block (ram,0x80022e3c) */
/* WARNING: Removing unreachable block (ram,0x80022e48) */
/* WARNING: Removing unreachable block (ram,0x80022e68) */
/* WARNING: Removing unreachable block (ram,0x80022e90) */
/* WARNING: Removing unreachable block (ram,0x80022ed0) */
/* WARNING: Removing unreachable block (ram,0x80022eec) */
/* WARNING: Removing unreachable block (ram,0x80022f20) */
/* WARNING: Removing unreachable block (ram,0x80022ef4) */
/* WARNING: Removing unreachable block (ram,0x80022f10) */
/* WARNING: Removing unreachable block (ram,0x80022f18) */
/* WARNING: Removing unreachable block (ram,0x80022f28) */
/* WARNING: Removing unreachable block (ram,0x80022f2c) */
/* WARNING: Removing unreachable block (ram,0x80022f6c) */
/* WARNING: Removing unreachable block (ram,0x80022fac) */
/* WARNING: Removing unreachable block (ram,0x80022f40) */
/* WARNING: Removing unreachable block (ram,0x80022fc4) */
/* WARNING: Removing unreachable block (ram,0x80023008) */
/* WARNING: Removing unreachable block (ram,0x80023048) */
/* WARNING: Removing unreachable block (ram,0x80022ffc) */
/* WARNING: Removing unreachable block (ram,0x80023004) */
/* WARNING: Removing unreachable block (ram,0x80023050) */
/* WARNING: Removing unreachable block (ram,0x80023054) */
/* WARNING: Removing unreachable block (ram,0x80023058) */
/* WARNING: Removing unreachable block (ram,0x80023060) */
/* WARNING: Removing unreachable block (ram,0x800230e4) */
/* WARNING: Removing unreachable block (ram,0x800230fc) */
/* WARNING: Removing unreachable block (ram,0x80023110) */
/* WARNING: Removing unreachable block (ram,0x80023068) */
/* WARNING: Removing unreachable block (ram,0x80023074) */
/* WARNING: Removing unreachable block (ram,0x8002307c) */
/* WARNING: Removing unreachable block (ram,0x80023080) */
/* WARNING: Removing unreachable block (ram,0x80023084) */
/* WARNING: Removing unreachable block (ram,0x80023090) */
/* WARNING: Removing unreachable block (ram,0x80023094) */
/* WARNING: Removing unreachable block (ram,0x800230a8) */
/* WARNING: Removing unreachable block (ram,0x800230b8) */
/* WARNING: Removing unreachable block (ram,0x800230c4) */
/* WARNING: Removing unreachable block (ram,0x800230dc) */
/* WARNING: Removing unreachable block (ram,0x80023018) */
/* WARNING: Removing unreachable block (ram,0x80023024) */
/* WARNING: Removing unreachable block (ram,0x80023114) */
/* WARNING: Removing unreachable block (ram,0x8002302a) */
/* WARNING: Removing unreachable block (ram,0x80022f74) */
/* WARNING: Removing unreachable block (ram,0x80022f7e) */
/* WARNING: Removing unreachable block (ram,0x80022f54) */
/* WARNING: Removing unreachable block (ram,0x80022f68) */
/* WARNING: Removing unreachable block (ram,0x80023144) */
/* WARNING: Removing unreachable block (ram,0x80023158) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_800229a8(int *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort uVar7;
  short sVar8;
  byte bVar9;
  ushort uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  char cVar18;
  ushort uVar19;
  undefined2 local_5c;
  undefined1 local_5a;
  int local_58;
  byte local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_5a = 0;
  local_58 = 0;
  local_5c = 0;
  piVar16 = (int *)param_2[2];
  if (piVar16 == (int *)0x0) {
    return 0;
  }
  sVar8 = (short)param_1[10];
  iVar15 = *(int *)(*(int *)piVar16[1] + 0x1c);
  if (sVar8 == 0x81) {
    sVar8 = *(short *)(param_1[9] + 2);
    param_1[9] = param_1[9] + 4;
    piVar16 = (int *)param_2[2];
    *(short *)(param_1 + 10) = sVar8;
  }
  iVar12 = *piVar16;
  if ((*(byte *)(*param_2 + 1) & 0x40) == 0) {
    if (sVar8 == -0x7178) {
      if ((*(char *)((int)piVar16 + 0x67e) != '\x06') && ((*(uint *)(iVar12 + 0x24) & 0x800) != 0))
      {
        uVar4 = *(uint *)(iVar12 + 0x20);
        goto joined_r0x80022a94;
      }
    }
    else {
      uVar4 = *(uint *)(iVar12 + 0x20);
      if ((uVar4 & 0x10) != 0) {
joined_r0x80022a94:
        if ((uVar4 & 0x2000000) != 0) {
          return 0;
        }
      }
    }
  }
  else if ((sVar8 != -0x7178) && ((*(uint *)(iVar12 + 0x20) & 0x10) == 0)) {
    return 0;
  }
  if ((*(char *)(*piVar16 + 0x2c) == '\x01') &&
     ((*(byte *)(piVar16 + 0x19) == 0 || ((*(byte *)(piVar16 + 0x19) & 1) == 0)))) {
    sVar8 = 1;
  }
  else {
    sVar8 = 0;
  }
  *(ushort *)((int)param_1 + 0x2e) = *(ushort *)((int)param_1 + 0x2e) & 0xfff7 | sVar8 << 3;
  if (sVar8 != 0) {
    FUN_ram_00117f14(param_1);
  }
  uVar17 = *(char *)((int)param_1 + 0x2b) * 4 + 0xeU & 0xffff;
  FUN_ram_0039fe00(*param_1,(int)param_1 + 6,uVar17);
  uVar4 = param_2[3];
  if (DAT_ram_8002c964 != 0) {
    local_58 = 4;
    iVar12 = *param_1;
    uVar7 = *(ushort *)(param_1 + 0xb);
    if (*(short *)(iVar12 + 0xc) == 0x81) {
      uVar19 = *(ushort *)(iVar12 + 0xe);
      uVar5 = (uint)uVar19 << 8;
      uVar14 = uVar5 & 0xf00 | (int)(uint)uVar19 >> 8;
      if (uVar14 == 0) {
        uVar11 = 2;
        goto LAB_ram_80022ba8;
      }
      uVar11 = 1;
      uVar7 = (ushort)uVar5 | uVar19 >> 8;
LAB_ram_80022bbc:
      if ((*(ushort *)(uVar4 + 6) & 1) == 0) {
        if ((*(uint *)(uVar4 + 0x10 + (uVar14 >> 5) * 4) & 1 << (uVar14 & 0x1f)) == 0)
        goto LAB_ram_80022c60;
      }
      else if (uVar14 != *(ushort *)(uVar4 + 0x10 + (uint)*(byte *)(param_2[2] + 0x67c) * 2)) {
LAB_ram_80022c60:
        *(int *)(uVar4 + 0x41c) = *(int *)(uVar4 + 0x41c) + 1;
        return 0;
      }
      *(undefined1 *)(iVar12 + -4) = 0xf8;
      *(undefined1 *)(iVar12 + -3) = uVar11;
      *(ushort *)(iVar12 + -2) = uVar7;
    }
    else {
      uVar11 = 0;
LAB_ram_80022ba8:
      uVar14 = uVar7 & 0xfff;
      if ((uVar7 & 0xfff) != 0) goto LAB_ram_80022bbc;
      uVar19 = *(ushort *)(uVar4 + 2);
      *(undefined1 *)(iVar12 + -3) = uVar11;
      *(undefined1 *)(iVar12 + -4) = 0xf8;
      *(ushort *)(iVar12 + -2) = uVar7 | uVar19;
    }
    *(int *)(uVar4 + 0x414) = *(int *)(uVar4 + 0x414) + 1;
  }
  sVar8 = (short)param_1[10];
  if (DAT_ram_8002c92c == 0) {
    iVar13 = *param_1;
LAB_ram_80022c90:
    if (sVar8 == 8) {
      if ((*(char *)(param_1[9] + 9) != '\x11') && (*(char *)(param_1[9] + 9) != '\x06'))
      goto LAB_ram_80022cc4;
    }
    else if ((sVar8 != -0x227a) ||
            ((cVar18 = *(char *)(param_1[9] + 6), cVar18 != '\x11' && cVar18 != '\x06' &&
             (cVar18 != ',')))) goto LAB_ram_80022cc4;
    bVar2 = true;
  }
  else {
    iVar12 = FUN_ram_00117f6c(sVar8,param_1);
    iVar13 = *param_1;
    if (iVar12 == 0) goto LAB_ram_80022c90;
    local_5a = 1;
LAB_ram_80022cc4:
    bVar2 = false;
  }
  FUN_ram_800255f4(iVar13 - local_58,local_58 + uVar17);
  if (bVar2) {
    cVar18 = '\x01';
    do {
      uVar4 = 0;
      _DAT_ram_e100a024 =
           CONCAT13((char)param_1[2],
                    CONCAT12(*(undefined1 *)((int)param_1 + 9),
                             CONCAT11(*(undefined1 *)((int)param_1 + 10),
                                      *(undefined1 *)((int)param_1 + 0xb))));
      _DAT_ram_e100a028 =
           (uint)CONCAT11(*(undefined1 *)((int)param_1 + 6),*(undefined1 *)((int)param_1 + 7));
      _DAT_ram_e100a020 = 1;
      do {
        sync();
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x3ea);
    } while (((DAT_ram_001a61ac & 0x80000000) == 0) && (cVar18 = cVar18 + -1, cVar18 != -1));
    DAT_ram_80037044 = DAT_ram_80037044 + 1;
  }
  local_5c = 0;
  FUN_ram_0018bad8(&local_5c,4);
  DAT_ram_80037050 = DAT_ram_80037050 + 1;
  if (((local_5c >> 4 & 0xf) == 2) && (*(byte *)((int)param_2 + 6) == local_5c._1_1_ >> 1)) {
    return 0;
  }
  uVar7 = local_5c >> 4;
  uVar4 = uVar7 & 0xf;
  local_54 = local_5c._1_1_ >> 1;
  uVar19 = 0;
  if (uVar4 == 2) {
    piVar16 = *(int **)(iVar15 + 0x3b54 + (uint)local_54 * 4);
    iVar12 = *(int *)param_2[2];
    if (piVar16 != (int *)0x0) {
      iVar13 = *piVar16;
      if (iVar13 == iVar12) {
        if (*(char *)(iVar15 + 0x39e9) == '\0') {
          uVar17 = *(uint *)(iVar12 + 0x6c) & 1;
joined_r0x8002321c:
          if (uVar17 == 0) goto LAB_ram_80023220;
        }
      }
      else if ((*(uint *)(iVar12 + 0x6c) & 2) == 0) {
        uVar17 = *(uint *)(iVar13 + 0x6c) & 2;
        goto joined_r0x8002321c;
      }
    }
  }
  else {
LAB_ram_80023220:
    if ((((DAT_ram_8002c934 != '\0') || (*(char *)(*(int *)param_2[2] + 0x2c) != '\x01')) ||
        (*(char *)((int)param_2[2] + 0x40e) == '\0')) || (uVar4 != 2)) {
      if (DAT_ram_8002c964 != 0) {
        iVar12 = *param_1;
        if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
          if (_DAT_ram_e00000bc < 0x8000000) {
            uVar17 = _DAT_ram_e00000bc + 0x40000000;
          }
          else {
            uVar17 = _DAT_ram_e00000bc;
            if (_DAT_ram_e00000bc < 0xc0000000) {
              uVar17 = 0;
            }
          }
        }
        else {
          uVar17 = _DAT_ram_e00000bc + 0xe0000000;
        }
        if ((uVar4 < 2 || uVar4 == 3) || uVar4 == 6) {
          iVar13 = *(int *)(*(int *)(uVar17 + 0xbc) + uVar4 * 4);
        }
        else {
          if (uVar4 != 2) goto LAB_ram_800233ac;
          puVar6 = *(undefined4 **)(iVar15 + 0x3b54 + (uint)local_54 * 4);
          if (puVar6 == (undefined4 *)0x0) goto LAB_ram_80023704;
          uVar14 = (uint)**(ushort **)*puVar6;
          iVar13 = uVar14 - 2;
          if (uVar14 < 2) {
            iVar13 = 0;
          }
          iVar13 = *(int *)(*(int *)(uVar17 + 0xb4) + iVar13 * 4);
        }
        if (*(char *)(iVar12 + -4) == -8) {
          if ((*(byte *)(iVar12 + -3) & 4) == 0) {
            uVar17 = *(ushort *)(iVar12 + -2) & 0xfff;
            if ((*(ushort *)(iVar13 + 6) & 1) == 0) {
              if ((*(uint *)(iVar13 + 0x10 + (uVar17 >> 5) * 4) &
                  1 << (*(ushort *)(iVar12 + -2) & 0x1f)) == 0) goto LAB_ram_800234cc;
            }
            else if (uVar17 != *(ushort *)(iVar13 + 0x10)) {
LAB_ram_800234cc:
              *(int *)(iVar13 + 0x42c) = *(int *)(iVar13 + 0x42c) + 1;
              goto LAB_ram_80023704;
            }
          }
        }
        else {
          *(int *)(iVar13 + 0x434) = *(int *)(iVar13 + 0x434) + 1;
        }
        *(int *)(iVar13 + 0x424) = *(int *)(iVar13 + 0x424) + 1;
        if (*(char *)(iVar13 + 1) == '\x02') {
          uVar17 = *(uint *)(iVar13 + 0x210) & 1;
          bVar9 = *(byte *)(iVar12 + -3);
          if ((*(uint *)(iVar13 + 0x210 + ((*(ushort *)(iVar12 + -2) & 0xfff) >> 5) * 4) &
              1 << (*(ushort *)(iVar12 + -2) & 0x1f)) == 0) {
            uVar14 = uVar17;
            if ((bVar9 & 2) != 0) {
              uVar14 = uVar17 | 4;
            }
          }
          else {
            uVar14 = uVar17 | 2;
            if ((bVar9 & 2) != 0) {
              uVar14 = uVar17 | 6;
            }
          }
          if ((bVar9 & 1) != 0) {
            uVar14 = uVar14 | 8;
          }
          bVar1 = (&DAT_ram_001a61c4)[uVar14];
          if (bVar1 == 0xff) {
            FUN_ram_000ee260(s_VLAN_action_invalid_ram_001c20c8);
            FUN_ram_000ee260(&DAT_ram_001c1d78);
            bVar9 = *(byte *)(iVar12 + -3);
          }
          *(byte *)(iVar12 + -3) = bVar1 | bVar9;
        }
        FUN_ram_000ed0a0((char *)(iVar12 + -4),4);
      }
LAB_ram_800233ac:
      sVar8 = (short)param_2[1] + 1;
      if (uVar4 == 4) {
        uVar19 = *(byte *)((int)param_2 + 6) & 0x7f |
                 (*(ushort *)((int)param_1 + 0x2e) >> 3 & 1) << 7;
      }
      *(short *)(param_2 + 1) = sVar8;
      if (sVar8 == 1) {
        uVar17 = *param_2;
        if ((uVar17 < 0x6ec400) || (0x26ec3ff < uVar17)) {
          if ((uVar17 < 0x26fc400) || (0x48fc3ff < uVar17)) {
            iVar12 = 0;
          }
          else {
            iVar12 = ((uVar17 + 0xfd903c00) / 0x4400) * 0x40 + 0x6bc0c0;
          }
        }
        else {
          iVar12 = (uVar17 - 0x6ec400 >> 0xc) * 0x40 + 0x63c080;
        }
        *(undefined4 *)(iVar12 + -4) = 0;
      }
      local_4c = *param_1;
      local_50 = 0;
      uVar17 = 0;
      if (&stack0x00000000 != (undefined1 *)0x54) {
        uVar17 = (uint)local_54;
      }
      local_48 = (uVar17 & 0x7f) << 4 | (int)*(char *)((int)param_1 + 0x2a) & 0xfU | uVar4 << 0xb |
                 (local_5c >> 3 & 1) << 0xf;
      local_44 = 0;
      local_3c = CONCAT22(uVar19,(short)param_1[1]);
      uVar19 = (ushort)*param_1;
      if (*param_2 == 0) {
        uVar10 = (ushort)((*param_1 + 0xfd903c00U) % 0x4400);
        uVar3 = uVar19;
      }
      else {
        uVar3 = (ushort)*param_2;
        uVar10 = uVar3 & 0x3ff;
      }
      local_40 = CONCAT22(0x7800,((uVar3 - uVar10) + 0x40) - uVar19);
      if ((uVar7 & 0xf) == 0) {
        _DAT_ram_ed000328 = 1;
        uVar17 = _DAT_ram_ed000330;
LAB_ram_8002360c:
        uVar14 = uVar17 & 0x1ff;
        uVar17 = uVar17 >> 0xd & 0x1ff;
        if (uVar17 < uVar14) {
          uVar17 = (uVar14 - uVar17) - 1;
        }
        else {
          uVar17 = 0x200 - (uVar17 - uVar14);
        }
        if ((uVar17 < 8) || ((&DAT_ram_8002c98c)[uVar4 * 3] != 0)) {
          iVar12 = 1 - (int)DAT_ram_8002c988;
          if ((undefined4 *)0x1 < DAT_ram_8002c988) {
            iVar12 = 0;
          }
          if (iVar12 != 0) {
            DAT_ram_80037298 = DAT_ram_80037298 + 1;
            FUN_ram_800239d8(uVar4,1);
          }
          puVar6 = DAT_ram_8002c988;
          if (DAT_ram_8002c988 != (undefined4 *)0x0) {
            DAT_ram_8002c988 = (undefined4 *)*DAT_ram_8002c988;
            FUN_ram_000efab8(puVar6,&local_50,0x18);
            *puVar6 = 0;
            iVar12 = uVar4 * 0xc;
            if ((&DAT_ram_8002c98c)[uVar4 * 3] == 0) {
              (&DAT_ram_8002c98c)[uVar4 * 3] = puVar6;
              *(undefined4 **)(&DAT_ram_8002c990 + iVar12) = puVar6;
              DAT_ram_8003729c = DAT_ram_8003729c + 1;
            }
            else {
              **(undefined4 **)(&DAT_ram_8002c990 + iVar12) = puVar6;
              *(undefined4 **)(&DAT_ram_8002c990 + iVar12) = puVar6;
              DAT_ram_800372a0 = DAT_ram_800372a0 + 1;
            }
            goto LAB_ram_80023704;
          }
          DAT_ram_800372a4 = DAT_ram_800372a4 + 1;
        }
      }
      else {
        if (uVar4 == 1) {
          _DAT_ram_e8000328 = 1;
          uVar17 = _DAT_ram_e8000330;
          goto LAB_ram_8002360c;
        }
        if ((uVar4 == 2) && (iVar12 = FUN_ram_001172ac(&local_50), iVar12 != 0))
        goto LAB_ram_80023704;
      }
      if ((_DAT_ram_e1035038 & 1) != 0) {
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          if (((uVar4 & 0xffff0000) != 0) && ((uVar4 & 0xffff) == 0)) {
            FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c1d08);
          }
        } while ((_DAT_ram_e1035038 & 1) != 0);
      }
      FUN_ram_80025dec(s_topaz_rx_fwt_send_tqe_unicast_ram_001c20f8,0x4c4);
      _DAT_ram_e1035020 = local_50;
      _DAT_ram_e1035024 = local_4c;
      _DAT_ram_e1035028 = local_48;
      _DAT_ram_e103502c = local_44;
      _DAT_ram_e1035030 = local_40;
      _DAT_ram_e1035034 = local_3c;
      sync();
      _DAT_ram_e1035038 = 1;
      FUN_ram_80025e74(local_3c);
    }
  }
LAB_ram_80023704:
  uVar17 = param_2[2];
  uVar7 = *(ushort *)(param_1 + 1);
  *(int *)(uVar17 + 0x228) = *(int *)(uVar17 + 0x228) + 1;
  uVar4 = *(uint *)(uVar17 + 0x22c);
  *(uint *)(uVar17 + 0x22c) = uVar4 + uVar7;
  *(uint *)(uVar17 + 0x230) = *(int *)(uVar17 + 0x230) + (uint)CARRY4(uVar4,(uint)uVar7);
  if ((short)param_1[10] == 0x81) {
    *(int *)(uVar17 + 0x240) = *(int *)(uVar17 + 0x240) + 1;
    bVar9 = *(byte *)((int)param_1 + 6);
    *(int *)(iVar15 + 0x3a10) = *(int *)(iVar15 + 0x3a10) + 1;
    if ((bVar9 & 1) == 0) {
LAB_ram_8002387c:
      *(int *)(uVar17 + 0x234) = *(int *)(uVar17 + 0x234) + 1;
      goto LAB_ram_800238dc;
    }
    sVar8 = *(short *)((int)param_1 + 6);
  }
  else {
    bVar9 = *(byte *)((int)param_1 + 6);
    *(int *)(iVar15 + 0x3a10) = *(int *)(iVar15 + 0x3a10) + 1;
    if ((bVar9 & 1) == 0) goto LAB_ram_8002387c;
    sVar8 = *(short *)((int)param_1 + 6);
  }
  if (((sVar8 == -1) && ((short)param_1[2] == -1)) && (*(short *)((int)param_1 + 10) == -1)) {
    *(int *)(uVar17 + 0x238) = *(int *)(uVar17 + 0x238) + 1;
  }
  else {
    *(int *)(uVar17 + 0x23c) = *(int *)(uVar17 + 0x23c) + 1;
  }
LAB_ram_800238dc:
  DAT_ram_80037040 = DAT_ram_80037040 + 1;
  return 0;
}


