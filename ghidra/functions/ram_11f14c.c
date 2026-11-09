/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011f14c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0011f14c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  bool bVar22;
  
  iVar19 = *(int *)(param_1 + 0x1c);
  piVar16 = *(int **)(iVar19 + 0xc);
  iVar17 = *piVar16;
  iVar21 = *(int *)(iVar19 + 0x38);
  iVar14 = *(int *)(iVar17 + 0x1c);
  uVar18 = *(undefined4 *)(iVar14 + 0x3b20);
  puVar20 = *(undefined4 **)(param_2 + 0x10);
  if (puVar20 == (undefined4 *)0x0) {
    FUN_ram_000f2ccc(s_qtn_ioctl_set_param__No_argument_ram_001c305c);
    return;
  }
  FUN_ram_000f2ccc(s_qtn_ioctl_set_param__param__d_va_ram_001c3080,*puVar20,puVar20[1]);
  iVar2 = DAT_ram_0018c100;
  switch(*puVar20) {
  case 2:
  case 0x18d:
    FUN_ram_00107214(piVar16,puVar20[1]);
    break;
  case 0xd:
    if (puVar20[1] == 0) {
      *(uint *)(iVar19 + 0x20) = *(uint *)(iVar19 + 0x20) & 0xffffffef;
    }
    else {
      *(uint *)(iVar19 + 0x20) = *(uint *)(iVar19 + 0x20) | 0x10;
    }
    break;
  case 0xf:
    if (puVar20[1] == 0) {
      *(uint *)(iVar19 + 0x20) = *(uint *)(iVar19 + 0x20) & 0xfdffffff;
    }
    else {
      *(uint *)(iVar19 + 0x20) = *(uint *)(iVar19 + 0x20) | 0x2000000;
    }
    break;
  case 0x26:
    if (puVar20[1] == 0) {
      piVar16[0xb] = piVar16[0xb] & 0xfffbffff;
    }
    else {
      FUN_ram_000e6c98(2);
      piVar16[0xb] = piVar16[0xb] | 0x40000;
    }
    break;
  case 0x3c:
    if (puVar20[1] == 0) {
      *(uint *)(iVar19 + 0x24) = *(uint *)(iVar19 + 0x24) & 0xfffff7ff;
    }
    else {
      *(uint *)(iVar19 + 0x24) = *(uint *)(iVar19 + 0x24) | 0x800;
    }
    break;
  case 0x3d:
    if (puVar20[1] == 0) {
      piVar16[0xc] = piVar16[0xc] & 0xfffff7ff;
      piVar16[10] = piVar16[10] & 0xfffbffffU | 0x200000;
    }
    else {
      piVar16[0xc] = piVar16[0xc] | 0x800;
      piVar16[10] = piVar16[10] & 0xffdfffffU | 0x40000;
    }
    break;
  case 0x3e:
    for (iVar14 = *(int *)(iVar14 + 0x14); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
      FUN_ram_0013d2a8(iVar14,puVar20[1]);
    }
    break;
  case 0x3f:
    switch(puVar20[1]) {
    case 1:
      DAT_ram_0018c100 = 0;
      DAT_ram_8002c8d0 = 0;
      break;
    case 2:
      DAT_ram_0018c100 = 1;
      goto LAB_ram_0011fab0;
    case 3:
      DAT_ram_0018c100 = 3;
      DAT_ram_8002c8d0 = 1;
      FUN_ram_0011e220(3);
      break;
    case 4:
      DAT_ram_0018c100 = 3;
LAB_ram_0011fab0:
      DAT_ram_8002c8d0 = 1;
      break;
    default:
      goto switchD_ram_0011f1e6_caseD_3;
    }
    FUN_ram_000f1d2c(puVar20[1]);
    if (iVar2 != DAT_ram_0018c100) {
LAB_ram_0011facc:
      FUN_ram_00119800(iVar19,DAT_ram_0018c110);
    }
    break;
  case 0x40:
    DAT_ram_8002c8b5 = (undefined1)puVar20[1];
    break;
  case 0x41:
    DAT_ram_0018c0fc = puVar20[1];
    break;
  case 0x44:
    DAT_ram_0018c114 = puVar20[1] & 0xf;
    break;
  case 0x46:
    DAT_ram_0018c11c = puVar20[1];
    break;
  case 0x47:
  case 0x1a0:
    iVar14 = puVar20[1];
    if ((iVar14 == 0x14 || iVar14 == 0x28) || iVar14 == 0x50) {
      if (iVar14 == 0x14) {
        if (*(byte *)(piVar16[0xe1f] + 8) < 0xf) {
          if (*(char *)((int)piVar16 + 0x1d) == '\b') {
            DAT_ram_0018c118 = iVar14;
            return;
          }
          uVar18 = 8;
        }
        else if (DAT_ram_0018c0f8 == 0) {
          if (*(char *)((int)piVar16 + 0x1d) == '\a') {
            DAT_ram_0018c118 = iVar14;
            return;
          }
          uVar18 = 7;
        }
        else {
          if (*(char *)((int)piVar16 + 0x1d) == '\v') {
            DAT_ram_0018c118 = iVar14;
            return;
          }
          uVar18 = 0xb;
        }
      }
      else if (iVar14 == 0x28) {
        if (*(byte *)(piVar16[0xe1f] + 8) < 0xf) {
          if (*(char *)((int)piVar16 + 0x1d) == '\t') {
            DAT_ram_0018c118 = iVar14;
            return;
          }
          uVar18 = 9;
        }
        else if (DAT_ram_0018c0f8 == 0) {
          if (*(char *)((int)piVar16 + 0x1d) == '\n') {
            DAT_ram_0018c118 = iVar14;
            return;
          }
          uVar18 = 10;
        }
        else {
          if (*(char *)((int)piVar16 + 0x1d) == '\f') {
            DAT_ram_0018c118 = iVar14;
            return;
          }
          uVar18 = 0xc;
        }
      }
      else {
        if (*(char *)((int)piVar16 + 0x1d) == '\r') {
          DAT_ram_0018c118 = iVar14;
          return;
        }
        uVar18 = 0xd;
      }
      DAT_ram_0018c118 = iVar14;
      FUN_ram_00107214(piVar16,uVar18);
    }
    break;
  case 0x48:
    DAT_ram_8002c8c0 = puVar20[1];
    break;
  case 0x49:
    DAT_ram_0018c120 = puVar20[1];
    FUN_ram_00103bd0(*(undefined4 *)(iVar14 + 0x3b20),DAT_ram_0018c120 & 0x10);
    DAT_ram_0018c120 = DAT_ram_0018c120 & 0xf;
    break;
  case 0x4a:
    DAT_ram_0018c128 = puVar20[1];
    FUN_ram_001591b8(iVar14);
    break;
  case 0x4e:
    DAT_ram_0018c180 = puVar20[1];
    break;
  case 0x4f:
    FUN_ram_00136684(iVar17,puVar20 + 3);
    goto LAB_ram_0011fcb0;
  case 0x57:
    DAT_ram_0018c1d8 = puVar20[1];
    break;
  case 0x59:
    FUN_ram_00166404(puVar20[1]);
    break;
  case 0x5d:
    DAT_ram_0018c0f4 = puVar20[1] & 1;
    break;
  case 0x61:
    DAT_ram_0018c1f0 = (uint)*(byte *)(puVar20 + 1) + DAT_ram_0018c1f0;
    break;
  case 0x62:
    DAT_ram_0018c1f4 = puVar20[1];
    break;
  case 0x69:
    DAT_ram_0018c0f0 = puVar20[1] & 1;
    break;
  case 0x6d:
    (**(code **)(*(int *)(iVar21 + 0x4c0) + 0x10))(puVar20[1]);
    break;
  case 0x6e:
    DAT_ram_0018c0ec = puVar20[1] & 1;
    if (DAT_ram_0018c0ec == 0) {
      FUN_ram_0018a948();
      FUN_ram_0010560c(uVar18);
    }
    else {
      FUN_ram_0018a920();
      FUN_ram_001055d8(uVar18);
    }
    break;
  case 0x70:
    DAT_ram_0018c12c = puVar20[1] & 1;
    break;
  case 0x71:
    DAT_ram_0018c078 = puVar20[1] & 7;
    break;
  case 0x74:
    DAT_ram_0018c41c = puVar20[1];
    break;
  case 0x75:
    DAT_ram_8002c97c = puVar20[1];
    break;
  case 0x76:
    if (puVar20[1] == 0) {
      FUN_ram_0012d170(iVar14,1);
    }
    else {
      FUN_ram_0012d170(iVar14,0);
    }
    break;
  case 0x77:
    if ((puVar20[1] & 0xfffffff0) == 0xaaaaaaa0) {
      FUN_ram_0018b084(iVar14,puVar20[1] + 0x55555556);
      return;
    }
    goto LAB_ram_0011fe84;
  case 0x78:
    if (puVar20[1] == 0xbadfc5) {
      FUN_ram_0012a864(iVar14);
      return;
    }
LAB_ram_0011fe84:
    FUN_ram_000ee260(s_bad_param_ram_001c30a8);
    break;
  case 0x79:
    DAT_ram_0018c18c = puVar20[1];
    break;
  case 0x7a:
    piVar16[0x110] = puVar20[1];
    break;
  case 0x7b:
    thunk_FUN_ram_0013fed0(puVar20[1]);
    break;
  case 0x7d:
    DAT_ram_0018c218 = puVar20[1];
    break;
  case 0x81:
    DAT_ram_8002c8ec = puVar20[1];
    break;
  case 0x82:
    DAT_ram_0018c420 = puVar20[1];
    break;
  case 0x83:
    DAT_ram_0018c150 = puVar20[1];
    FUN_ram_00137d10();
    break;
  case 0x84:
    DAT_ram_0018c190 = puVar20[1] * 1000;
    break;
  case 0x89:
    uVar9 = puVar20[1] & 0x3fffffff;
    iVar17 = ((uint)puVar20[1] >> 0x1e) * 0xc;
    *(uint *)(&DAT_ram_0020fcb4 + iVar17) = (uVar9 % 1000) * 500;
    *(uint *)(&DAT_ram_0020fcb8 + iVar17) = uVar9 / 1000;
    *(undefined4 *)(&DAT_ram_0020fcbc + iVar17) = 0;
    goto LAB_ram_0011fdec;
  case 0x8a:
    DAT_ram_8002c218 = puVar20[1];
    break;
  case 0x8c:
    FUN_ram_00146c38(iVar17,puVar20[1]);
    break;
  case 0x8d:
    uVar9 = puVar20[1];
    if ((uVar9 & 1) == 0) {
      if ((uVar9 & 2) == 0) {
        if ((uVar9 & 4) == 0) {
          if ((uVar9 & 8) != 0) {
            FUN_ram_000f7c10(1000,0,0,&DAT_ram_00126aa8,2);
          }
        }
        else {
          FUN_ram_000f7a3c();
        }
      }
      else {
        FUN_ram_000f9534();
      }
    }
    else {
      FUN_ram_000fa178(1);
    }
    break;
  case 0x8e:
    FUN_ram_000fa2bc(puVar20[1]);
    break;
  case 0x8f:
    FUN_ram_000fd6dc(uVar18,puVar20[1]);
    break;
  case 0x90:
    DAT_ram_8002c220 = puVar20[1];
    break;
  case 0x91:
    DAT_ram_8002c21c = puVar20[1];
    break;
  case 0x92:
    *(uint *)(iVar14 + 0x3b3c) = *(uint *)(iVar14 + 0x3b3c) | 0x400;
    FUN_ram_000f8be8(*(undefined4 *)(iVar14 + 0x3b20));
    break;
  case 0x93:
    FUN_ram_0011a63c(iVar14,puVar20[1]);
    break;
  case 0x96:
    DAT_ram_8002c228 = (undefined1)puVar20[1];
    break;
  case 0x99:
    uVar10 = puVar20[1];
    cVar6 = *(char *)(iVar14 + 0x4660);
    uVar9 = uVar10 & 0x80;
    if (cVar6 == '\0') {
      if (uVar9 != 0) goto LAB_ram_00120170;
LAB_ram_0012017c:
      bVar22 = true;
    }
    else {
      if (uVar9 != 0) goto LAB_ram_0012017c;
LAB_ram_00120170:
      bVar22 = false;
    }
    iVar19 = 0;
    iVar17 = 4;
    while( true ) {
      bVar11 = (byte)((int)uVar10 >> (iVar19 << 3 & 0x1fU)) & 0x7f;
      if (uVar9 == 0) {
        (&DAT_ram_0018c004)[iVar19] = bVar11;
      }
      else {
        (&DAT_ram_0018c008)[iVar19] = bVar11;
      }
      if (bVar22) {
        (&DAT_ram_0018c000)[iVar19] = (byte)((int)puVar20[1] >> (iVar19 << 3 & 0x1fU)) & 0x7f;
      }
      iVar17 = iVar17 + -1;
      iVar19 = iVar19 + 1;
      if (iVar17 == 0) break;
      uVar10 = puVar20[1];
    }
    uVar18 = *(undefined4 *)(iVar14 + 0x3b20);
    if (cVar6 == '\0') {
      FUN_ram_001004dc(uVar18,DAT_ram_0018c000 < 8);
      uVar18 = *(undefined4 *)(iVar14 + 0x3b20);
    }
    FUN_ram_00103ad0(uVar18,0xe);
    break;
  case 0x9e:
    uVar9 = puVar20[1];
    if ((uVar9 & 0x10) == 0) {
      DAT_ram_8002c229 = (undefined1)uVar9;
    }
    else {
      uVar9 = uVar9 & 0xf;
      DAT_ram_0018c168 = (undefined1)uVar9;
      if ((7 < uVar9) && (uVar9 != 0xf)) {
        DAT_ram_0018c168 = 0xf;
      }
    }
    break;
  case 0xa0:
    DAT_ram_0018c0e8 = puVar20[1] & 1;
    break;
  case 0xa1:
    DAT_ram_0018c10c = puVar20[1] & 1;
    break;
  case 0xa5:
    FUN_ram_000ee260(s_Original_agg_timeout__d_ram_001c3144,DAT_ram_8002c22c);
    DAT_ram_8002c22c = (char *)(puVar20[1] * 1000);
    FUN_ram_0010a098(iVar14);
    pcVar3 = s_New_agg_timeout__d_ram_001c3160;
    pcVar15 = DAT_ram_8002c22c;
    goto LAB_ram_00120f98;
  case 0xa9:
    DAT_ram_0018c154 = puVar20[1];
    FUN_ram_00105680(uVar18,DAT_ram_0018c154 & 0xff);
    break;
  case 0xab:
    DAT_ram_8002c230 = puVar20[1];
    FUN_ram_000ee260(s_MuC_flags_0x_08x_ram_001c3174);
    if ((DAT_ram_8002c230 & 1) == 0) {
      puVar5 = &DAT_ram_001c31b4;
    }
    else {
      puVar5 = &DAT_ram_001c31b0;
    }
    FUN_ram_000ee260(s_RTS_CTS_for_ACTION_BF_frames__sa_ram_001c3188,puVar5);
    if ((DAT_ram_8002c230 & 2) == 0) {
      puVar5 = &DAT_ram_001c31b0;
    }
    else {
      puVar5 = &DAT_ram_001c31b4;
    }
    FUN_ram_000ee260(s_LDPC_for_ACTION_BF_frames__sable_ram_001c31b8,puVar5);
    if ((DAT_ram_8002c230 & 4) == 0) {
      puVar5 = &DAT_ram_001c31b0;
    }
    else {
      puVar5 = &DAT_ram_001c31b4;
    }
    FUN_ram_000ee260(s_UEQM_MCS_rates__sabled_ram_001c31e0,puVar5);
    if ((DAT_ram_8002c230 & 0x10) == 0) {
      puVar5 = &DAT_ram_001c31b4;
    }
    else {
      puVar5 = &DAT_ram_001c31b0;
    }
    FUN_ram_000ee260(s_11n_Bandwidth_Switching__sabled_ram_001c3208,puVar5);
    pcVar3 = s_11ac_Bandwidth_Switching__sabled_ram_001c3230;
    if ((DAT_ram_8002c230 & 0x20) == 0) {
      pcVar15 = &DAT_ram_001c31b4;
    }
    else {
      pcVar15 = &DAT_ram_001c31b0;
    }
    goto LAB_ram_00120f98;
  case 0xac:
    pcVar15 = (char *)puVar20[1];
    if ((int)pcVar15 < 5) {
      DAT_ram_8002c22a = (char)pcVar15;
      return;
    }
    goto LAB_ram_0011fee0;
  case 0xaf:
    if (puVar20[1] == 0) {
      if (DAT_ram_0018c010 == 3) {
        (*DAT_ram_002017e8)(1,3);
      }
      else {
        FUN_ram_0016ffd8(1,3);
      }
    }
    else if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017e8)(7,0);
    }
    else {
      FUN_ram_0016ffd8(7,0);
    }
    break;
  case 0xb0:
    if (puVar20[1] == 0) {
      if (DAT_ram_800261cc != 0) {
        FUN_ram_000f7d60(DAT_ram_800261cc);
        DAT_ram_800261cc = 0;
        DAT_ram_800261c0 = DAT_ram_800261c0 & 0xfe;
        FUN_ram_000f2ccc(s_Disabling_auto_gain_adjust_ram_001c3128);
      }
    }
    else if (DAT_ram_800261cc == 0) {
      FUN_ram_000f2ccc(s_Enabling_auto_gain_adjust_ram_001c310c);
      DAT_ram_800261c0 = DAT_ram_800261c0 | 1;
      DAT_ram_800261cc = FUN_ram_000f7c10(DAT_ram_800261d8,iVar14,param_1,&LAB_ram_00126aac,3);
    }
    else {
      FUN_ram_000f2ccc(s_Auto_gain_adjust_is_already_enab_ram_001c30e8);
    }
    break;
  case 0xb3:
    DAT_ram_8002c224 = puVar20[1];
    puVar13 = (uint *)(*(int *)(*(int *)(iVar14 + 0x3b20) + 0xc) + 0x2000);
    if ((DAT_ram_8002c224 & 1) == 0) {
      *puVar13 = *puVar13 & 0xdfffffff;
    }
    else {
      *puVar13 = *puVar13 | 0x20000000;
    }
    break;
  case 0xb6:
    DAT_ram_0018c15c = puVar20[1];
    break;
  case 0xb7:
    DAT_ram_0018c158 = puVar20[1];
    break;
  case 0xb8:
    if (puVar20[1] == 0) {
      *(undefined1 *)(iVar14 + 0x39e9) = 0;
    }
    else {
      *(undefined1 *)(iVar14 + 0x39e9) = 1;
    }
    break;
  case 0xb9:
    DAT_ram_8002c8b8 = puVar20[1];
    FUN_ram_00158a54(iVar14);
    goto LAB_ram_00120d6c;
  case 0xba:
    DAT_ram_8002c8b1 = (undefined1)puVar20[1];
    break;
  case 0xbb:
    DAT_ram_8002c8b2 = (undefined1)puVar20[1];
    break;
  case 0xbe:
    switch(puVar20[1]) {
    case 0:
      DAT_ram_8002c86c = DAT_ram_8002c86c & 0xfffffff1;
      break;
    case 1:
      DAT_ram_8002c86c = DAT_ram_8002c86c | 2;
      break;
    case 2:
      DAT_ram_8002c86c = DAT_ram_8002c86c | 4;
      break;
    case 3:
      DAT_ram_8002c86c = DAT_ram_8002c86c | 8;
      break;
    default:
      FUN_ram_000ee260(s_Invalid_value_ram_001c3258);
    }
    break;
  case 0xbf:
    uVar4 = *(undefined1 *)(iVar14 + 0x3b35);
    uVar7 = puVar20[1];
    uVar18 = 1;
    goto LAB_ram_0012065c;
  case 0xc0:
    uVar7 = puVar20[1];
    uVar18 = 2;
    goto LAB_ram_00120670;
  case 0xc1:
    DAT_ram_8002c8d8 = (undefined1)puVar20[1];
    break;
  case 0xc3:
    FUN_ram_0014d610(puVar20[1]);
    break;
  case 0xc4:
    if (DAT_ram_8002c934 == '\0') {
      FUN_ram_00152098(iVar14,puVar20[1] & 0xff,(int)puVar20[1] >> 8);
    }
    break;
  case 0xc5:
    DAT_ram_8002c8c4 = (uint)*(ushort *)(puVar20 + 1);
    FUN_ram_0010ca0c(iVar14,DAT_ram_8002c8c4,puVar20[1]);
    break;
  case 200:
    DAT_ram_8002c8dc = puVar20[1];
    FUN_ram_0010526c(*(undefined4 *)(iVar14 + 0x3b20),DAT_ram_8002c8dc & 0xff);
    break;
  case 0xca:
    pcVar15 = (char *)puVar20[1];
    if ((pcVar15 == (char *)0x0) || (pcVar15 == (char *)0xff)) {
      FUN_ram_000ee260(s_qtn_ioctl_set_tx_amsdu__0x_x_ram_001c3268,pcVar15);
    }
    else if (pcVar15 != (char *)0x1) {
      pcVar3 = s_qtn_ioctl_set_tx_amsdu__invalid_v_ram_001c3288;
      goto LAB_ram_00120f98;
    }
    DAT_ram_8002c8e0 = SUB41(pcVar15,0);
    goto LAB_ram_00120d6c;
  case 0xcd:
    DAT_ram_8002c8e4 = puVar20[1];
    break;
  case 0xce:
    DAT_ram_8002c8e8 = (undefined1)puVar20[1];
    uVar9 = puVar20[1] & 0xff;
    FUN_ram_0018ade0(uVar9);
    FUN_ram_00158388((&DAT_ram_0018c16c)[uVar9]);
    break;
  case 0xd1:
    *(short *)(iVar14 + 0x40b0) = (short)puVar20[1];
    break;
  case 0xd3:
    DAT_ram_8002c8ea = (undefined1)puVar20[1];
    break;
  case 0xd7:
    DAT_ram_8002c8eb = (undefined1)puVar20[1];
    break;
  case 0xdd:
    DAT_ram_8002c8fc = (char *)puVar20[1];
    FUN_ram_001583e0(piVar16);
    pcVar3 = s_qtn_ioctl_set_param__set_rts_thr_ram_001c32b4;
    pcVar15 = DAT_ram_8002c8fc;
    goto LAB_ram_00120f98;
  case 0xdf:
    DAT_ram_8002c900 = (undefined1)puVar20[1];
    break;
  case 0xe0:
    if (puVar20[1] != 0) {
      FUN_ram_00128c30(iVar17,1);
      return;
    }
LAB_ram_0011fcb0:
    FUN_ram_00128c30(iVar17,0);
    break;
  case 0xe1:
    DAT_ram_8002c901 = (undefined1)puVar20[1];
    if ((puVar20[1] & 0xff) == 0) {
      FUN_ram_0018aa8c(0);
    }
    else {
      FUN_ram_0018aa8c(1);
    }
    break;
  case 0xe3:
    DAT_ram_0018c0f8 = puVar20[1];
    break;
  case 0xe4:
    if (DAT_ram_0018c0f8 == 0) {
      FUN_ram_000ee260(s_can_t_set_to_11ac_rate_when_11ac_ram_001c32e4);
    }
    else {
      for (iVar14 = *(int *)(iVar14 + 0x14); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
        FUN_ram_0013d170(iVar14,1,puVar20[1],1);
      }
    }
    break;
  case 0xe6:
    if (puVar20[1] == 0) {
      DAT_ram_8002c224 = DAT_ram_8002c224 & 0xffffffef;
    }
    else {
      DAT_ram_8002c224 = DAT_ram_8002c224 | 0x10;
    }
    FUN_ram_0011e59c(iVar14,puVar20[1] != 0,DAT_ram_0018c118);
    break;
  case 0xe8:
  case 0x177:
    FUN_ram_0011ab8c(iVar14,puVar20[1]);
    break;
  case 0xe9:
    if (puVar20[1] != 0) {
      DAT_ram_0020fcf8 = puVar20[1];
    }
    break;
  case 0xee:
    FUN_ram_00146e40(iVar17,puVar20[1]);
    break;
  case 0xef:
    DAT_ram_8002c904 = puVar20[1];
    FUN_ram_000e6d28();
    break;
  case 0xf0:
    DAT_ram_8002c8b3 = (undefined1)puVar20[1];
    break;
  case 0xf3:
    FUN_ram_0015ceb8(*(undefined4 *)(iVar14 + 0x3b20),puVar20[1]);
    break;
  case 0xf4:
    DAT_ram_8002c908 = (undefined1)puVar20[1];
    if (puVar20[1] != 0) {
      DAT_ram_8002c908 = 1;
    }
    break;
  case 0xf5:
    DAT_ram_8002c909 = (undefined1)puVar20[1];
    if (puVar20[1] != 0) {
      DAT_ram_8002c909 = 1;
    }
    break;
  case 0xf6:
    *(char *)(iVar19 + 0x81) = (char)puVar20[1];
LAB_ram_00120d6c:
    FUN_ram_00158104(iVar14);
    break;
  case 0xfc:
    FUN_ram_00158a0c(puVar20[1]);
    break;
  case 0xfd:
    DAT_ram_8002c90a = (undefined1)puVar20[1];
    FUN_ram_00158a1c(iVar14);
    break;
  case 0xfe:
    FUN_ram_0011e4a8(iVar17,puVar20 + 3,puVar20[1]);
    break;
  case 0xff:
    FUN_ram_00158210(puVar20[1]);
    break;
  case 0x100:
    uVar18 = puVar20[1];
    FUN_ram_000e6c98(0x16);
    *(char *)(iVar19 + 0x7d) = (char)uVar18;
    FUN_ram_00158320(iVar14);
    break;
  case 0x101:
    FUN_ram_00158af8(puVar20[1]);
    break;
  case 0x102:
    pcVar3 = s_set_g_qtn_params_g_txbf_iot_to___ram_001c33c0;
    DAT_ram_8002c90b = (undefined1)puVar20[1];
    pcVar15 = (char *)(puVar20[1] & 0xff);
    goto LAB_ram_00120f98;
  case 0x105:
    DAT_ram_8002c90c = (undefined1)puVar20[1];
    break;
  case 0x106:
    DAT_ram_8002c90d = (undefined1)puVar20[1];
    break;
  case 0x109:
    FUN_ram_0011eb70(piVar16);
    break;
  case 0x10a:
    if ((puVar20[1] != 0) != (bool)DAT_ram_8002c8d7) {
      DAT_ram_8002c8d7 = puVar20[1] != 0;
      FUN_ram_0010c3f0(piVar16,*(undefined4 *)(iVar14 + 0x4674),*(undefined4 *)(iVar14 + 0x4678),1);
    }
    break;
  case 0x10b:
    FUN_ram_0011e888(piVar16,puVar20[1]);
    break;
  case 0x10d:
    pcVar15 = (char *)puVar20[1];
    if ((int)pcVar15 < 5) {
      DAT_ram_8002c22b = (char)pcVar15;
      return;
    }
LAB_ram_0011fee0:
    pcVar3 = s_QTN__invalid_NSS_cap__d_ram_001c30b4;
    goto LAB_ram_00120f98;
  case 0x10e:
    FUN_ram_0011e35c(iVar14,puVar20[1]);
    break;
  case 0x10f:
    FUN_ram_0014bb1c(iVar14,puVar20[1]);
    break;
  case 0x111:
    FUN_ram_001804a8();
    break;
  case 0x112:
    *(char *)(iVar19 + 0x7e) = (char)puVar20[1];
    break;
  case 0x113:
    if (puVar20[1] == 0) {
      FUN_ram_0015b2a4(0,s_Disable_auto_cca_ram_001c3408);
      DAT_ram_8002c91c = DAT_ram_8002c91c & 0xfffffffe;
      FUN_ram_000ee260(s_AutoCCA__disabled_ram_001c341c);
    }
    else {
      DAT_ram_8002c91c = DAT_ram_8002c91c | 1;
      FUN_ram_000ee260(s_AutoCCA__enabled_ram_001c33e4);
      FUN_ram_0015b2a4(0,s_Enable_auto_cca_ram_001c33f8);
    }
    break;
  case 0x114:
    pcVar15 = (char *)puVar20[1];
    uVar9 = (int)pcVar15 >> 0x18 & 0xff;
    if (uVar9 == 0xa5) {
      DAT_ram_8002c920 = (uint)pcVar15 & 0xffffff;
    }
    else if (uVar9 == 0xa6) {
      DAT_ram_8002c924 = (uint)pcVar15 & 0xffffff;
    }
    else {
      if (uVar9 != 0xa7) {
        pcVar3 = s_AutoCCA__Invalid_command__0x_08x_ram_001c3430;
        goto LAB_ram_00120f98;
      }
      DAT_ram_8002c928 = (uint)pcVar15 & 0xffffff;
    }
    FUN_ram_000ee260(s_AutoCCA__New_parameters___0x_08x_ram_001c3454,puVar20[1]);
    FUN_ram_0015b2a4(0,s_Params_change_ram_001c3478);
    break;
  case 0x115:
    uVar9 = puVar20[1];
    if ((uVar9 & 0x80000000) == 0) {
      DAT_ram_8002c91c = DAT_ram_8002c91c & ~uVar9;
    }
    else {
      DAT_ram_8002c91c = DAT_ram_8002c91c | uVar9;
    }
    FUN_ram_000ee260(s_AutoCCA__change_dbg_flag___0x_08_ram_001c3488);
    FUN_ram_0015b2a4(0,s_Dbg_change_ram_001c34ac);
    break;
  case 0x116:
    if (puVar20[1] == 0) {
      *(uint *)(iVar19 + 0x6c) = *(uint *)(iVar19 + 0x6c) & 0xfffffffe;
    }
    else {
      *(uint *)(iVar19 + 0x6c) = *(uint *)(iVar19 + 0x6c) | 1;
    }
    break;
  case 0x117:
    if (puVar20[1] == 0) {
      *(uint *)(iVar19 + 0x6c) = *(uint *)(iVar19 + 0x6c) & 0xfffffffd;
    }
    else {
      *(uint *)(iVar19 + 0x6c) = *(uint *)(iVar19 + 0x6c) | 2;
    }
    break;
  case 0x119:
    FUN_ram_0011acd0(iVar14,puVar20[1]);
    break;
  case 0x11b:
    FUN_ram_000e6c98(0xe);
    break;
  case 0x120:
    DAT_ram_8002c935 = (undefined1)puVar20[1];
    FUN_ram_00158af8(puVar20[1] & 0xfffffff | 0x10000000);
    break;
  case 0x124:
    FUN_ram_0012c6a4(puVar20[1] & 0xf);
LAB_ram_0011fdec:
    FUN_ram_00158954(iVar14);
    break;
  case 0x12a:
    FUN_ram_0014c068(iVar14,*(undefined1 *)(puVar20 + 1));
    break;
  case 300:
    FUN_ram_00156560(puVar20[1]);
    break;
  case 0x12e:
    *(char *)(iVar19 + 0x7f) = (char)puVar20[1];
    break;
  case 0x130:
    DAT_ram_8002c910 = puVar20[1];
    break;
  case 0x131:
    pcVar15 = (char *)puVar20[1];
    pcVar3 = s_Change_TxBF_sounding_pkt_cnt_thr_ram_001c34fc;
    DAT_ram_8002c914 = pcVar15;
    goto LAB_ram_00120f98;
  case 0x132:
    DAT_ram_0018c124 = puVar20[1];
    break;
  case 0x133:
    FUN_ram_001594bc(puVar20[1]);
    break;
  case 0x135:
    FUN_ram_0018ae7c(puVar20[1]);
    iVar14 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    uVar18 = FUN_ram_0018ae6c();
    *(undefined4 *)(iVar14 + 0x174) = uVar18;
    break;
  case 0x149:
    FUN_ram_000e6d00(puVar20[1]);
    break;
  case 0x14b:
    DAT_ram_8002c936 = (undefined1)puVar20[1];
    break;
  case 0x14c:
    uVar7 = puVar20[1];
    uVar18 = 3;
LAB_ram_00120670:
    uVar4 = 0;
LAB_ram_0012065c:
    FUN_ram_0018abac(uVar18,uVar4,uVar7);
    break;
  case 0x14d:
    FUN_ram_0018abac(4,*(undefined1 *)(iVar14 + 0x3b35),puVar20[1]);
    iVar14 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    uVar18 = FUN_ram_0018ae6c();
    *(undefined4 *)(iVar14 + 0x174) = uVar18;
    break;
  case 0x151:
    FUN_ram_0011e904();
    break;
  case 0x156:
    FUN_ram_0011e9c0(iVar14,puVar20[1]);
    break;
  case 0x157:
    iVar17 = puVar20[1];
    if ((iVar17 == 0) || (iVar17 == 1)) {
      DAT_ram_8002c942 = (undefined1)iVar17;
    }
    else if (iVar17 == 2) {
      FUN_ram_00113d00(iVar14,0);
    }
    else if (iVar17 == 3) {
      FUN_ram_00113d00(iVar14,1);
    }
    break;
  case 0x158:
    DAT_ram_8002c937 = (undefined1)puVar20[1];
    break;
  case 0x15a:
    FUN_ram_0011e680(puVar20,iVar14,iVar19);
    break;
  case 0x15b:
    if (DAT_ram_0018c0f8 == 0) {
      FUN_ram_000ee260(s_Can_t_set_to_11ac_MU_rate_when_1_ram_001c3318);
      return;
    }
    uVar9 = puVar20[1];
    if ((uVar9 & 0xffff) == 0x3939) {
      *(undefined1 *)(iVar19 + 0x50) = 0;
      FUN_ram_000ee260(s_MU_MIMO__change_to_rate_adapter_m_ram_001c334c);
      return;
    }
    *(undefined1 *)(iVar19 + 0x50) = 1;
    *(byte *)(iVar19 + 0x51) = ((byte)uVar9 & 0xf0) + ((byte)uVar9 & 0xf);
    bVar11 = (byte)(uVar9 >> 8);
    cVar6 = (bVar11 & 0xf0) + (bVar11 & 0xf);
    *(char *)(iVar19 + 0x54) = cVar6;
    *(char *)(iVar19 + 0x53) = cVar6;
    *(char *)(iVar19 + 0x52) = cVar6;
    uVar9 = (uint)*(byte *)(iVar19 + 0x130);
    uVar10 = (uint)*(byte *)(iVar19 + 0x51);
    *(uint *)(iVar19 + 0x5c) = *(uint *)(iVar19 + 0x5c) | 1;
    if (uVar9 < 3) {
      if ((*(byte *)(iVar19 + 0x51) & 0x40) == 0) {
        uVar12 = (int)uVar10 >> 4 & 3;
        uVar10 = uVar10 & 0xf;
        iVar17 = uVar12 - 4;
        bVar22 = SBORROW4(uVar12,4);
        if (uVar12 < 4) {
          iVar17 = uVar10 - 10;
          bVar22 = SBORROW4(uVar10,10);
        }
        if (iVar17 < 0 == bVar22) goto LAB_ram_00120958;
        uVar8 = (uint)*(byte *)(iVar19 + 0x52);
        iVar17 = (uint)*(ushort *)(&DAT_ram_001a87c0 + uVar12 * 0x14 + uVar9 * 0x50 + uVar10 * 2) <<
                 5;
      }
      else {
        if (0x2b < (uVar10 & 0xffffffbf)) goto LAB_ram_00120958;
        uVar8 = (uint)*(byte *)(iVar19 + 0x52);
        iVar17 = (uint)*(ushort *)(&DAT_ram_001a88b0 + uVar9 * 0x58 + (uVar10 & 0xffffffbf) * 2) <<
                 5;
      }
LAB_ram_00120968:
      if ((uVar8 & 0x40) == 0) {
        uVar12 = uVar8 & 0xf;
        uVar10 = (int)uVar8 >> 4 & 3;
        iVar21 = uVar10 - 4;
        bVar22 = SBORROW4(uVar10,4);
        if (uVar10 < 4) {
          iVar21 = uVar12 - 10;
          bVar22 = SBORROW4(uVar12,10);
        }
        if (iVar21 < 0 == bVar22) goto LAB_ram_001209d4;
        uVar1 = *(ushort *)(&DAT_ram_001a87c0 + uVar9 * 0x50 + uVar10 * 0x14 + uVar12 * 2);
      }
      else {
        if (0x2b < (uVar8 & 0xffffffbf)) goto LAB_ram_001209d4;
        uVar1 = *(ushort *)(&DAT_ram_001a88b0 + uVar9 * 0x58 + (uVar8 & 0xffffffbf) * 2);
      }
      iVar21 = (uint)uVar1 << 5;
    }
    else {
LAB_ram_00120958:
      uVar8 = (uint)*(byte *)(iVar19 + 0x52);
      iVar17 = 0x1000;
      if (uVar9 < 3) goto LAB_ram_00120968;
LAB_ram_001209d4:
      iVar21 = 0x1000;
    }
    FUN_ram_000ee260(s_Set_11ac_MU_rate0___0x_02x__rate_ram_001c3374,*(undefined1 *)(iVar19 + 0x51),
                     uVar8,iVar17,iVar21);
    FUN_ram_0011e424(iVar14);
    break;
  case 0x15c:
    pcVar3 = s_Debug_level_set_to__d_ram_001c3560;
    pcVar15 = (char *)(puVar20[1] & 0xffff);
    *(short *)(iVar14 + 0x5aa4) = (short)puVar20[1];
    goto LAB_ram_00120f98;
  case 0x15d:
    uVar9 = puVar20[1];
    FUN_ram_000e6c98(0x11);
    DAT_ram_8002c93c = uVar9;
    if (uVar9 == 0) {
      uVar18 = 0xa0000000;
    }
    else {
      FUN_ram_00156c34(iVar14,0x20000000);
      if (*(char *)(*(int *)(iVar19 + 0xc) + 0x39e8) == '\0') {
        pcVar3 = s_MU__s_ram_001c3578;
        uVar9 = DAT_ram_8002c93c;
        goto joined_r0x00121228;
      }
      uVar18 = 0x80080000;
    }
    FUN_ram_00156c34(iVar14,uVar18);
    pcVar3 = s_MU__s_ram_001c3578;
    if (DAT_ram_8002c93c == 0) goto LAB_ram_00120f88;
LAB_ram_00120f90:
    pcVar15 = s_enabled_ram_001c358c;
    goto LAB_ram_00120f98;
  case 0x15e:
    uVar4 = *(undefined1 *)(puVar20 + 1);
    uVar18 = 2;
    goto LAB_ram_00120fe4;
  case 0x15f:
    FUN_ram_0010a780(piVar16,*(undefined1 *)(puVar20 + 1),0,*(undefined1 *)(puVar20 + 3));
    break;
  case 0x161:
    uVar4 = *(undefined1 *)(puVar20 + 1);
    uVar18 = 1;
    goto LAB_ram_00120fe4;
  case 0x162:
    FUN_ram_00156c34(iVar14,puVar20[1]);
    break;
  case 0x165:
    uVar9 = puVar20[1];
    FUN_ram_000f7d60(DAT_ram_0018c164);
    if (uVar9 != 0) {
      DAT_ram_0018c164 = FUN_ram_000f7c10(5000,uVar18,0,&LAB_ram_00126d58,2);
    }
    FUN_ram_00104f60(uVar18,uVar9 & 0xff);
    break;
  case 0x166:
    if (puVar20[1] == 0) {
      pcVar3 = &DAT_ram_001c35b4;
    }
    else {
      pcVar3 = s_reset_ram_001c35ac;
    }
    FUN_ram_000ee260(s_MU_switch_user_pos__s_ram_001c3594,pcVar3);
    DAT_ram_0018c160 = 1 - puVar20[1];
    if (1 < (uint)puVar20[1]) {
      DAT_ram_0018c160 = 0;
    }
    FUN_ram_0010ac20(*(undefined4 *)(iVar19 + 0x3c),puVar20[1]);
    break;
  case 0x167:
    pcVar15 = (char *)puVar20[1];
    pcVar3 = s_Set_Group_Select_Sounding_period_ram_001c35b8;
    DAT_ram_0018c198 = pcVar15;
    goto LAB_ram_00120f98;
  case 0x168:
    pcVar15 = (char *)puVar20[1];
    DAT_ram_0018c1a4 = pcVar15;
    iVar14 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    iVar14 = FUN_ram_000e2000(*(undefined4 *)(iVar14 + 0x54));
    pcVar3 = s_Set_Precoding_Sounding_period_to_ram_001c35e4;
    *(uint *)(iVar14 + 0x119c) = (uint)((int)pcVar15 * 9) / 10;
    pcVar15 = DAT_ram_0018c1a4;
    goto LAB_ram_00120f98;
  case 0x169:
    pcVar3 = s_set_g_inst_1ss_def_mat_en__u_ram_001c34b8;
    DAT_ram_8002c938 = puVar20[1] != 0;
    pcVar15 = (char *)(uint)(byte)DAT_ram_8002c938;
    goto LAB_ram_00120f98;
  case 0x16a:
    pcVar3 = s_set_g_inst_1ss_def_mat_thresh__u_ram_001c34d8;
    DAT_ram_8002c939 = (undefined1)puVar20[1];
    pcVar15 = (char *)(puVar20[1] & 0xff);
    goto LAB_ram_00120f98;
  case 0x16f:
    uVar4 = *(undefined1 *)(puVar20 + 1);
    uVar18 = 4;
LAB_ram_00120fe4:
    FUN_ram_0010a780(piVar16,uVar4,uVar18,0);
    break;
  case 0x171:
    FUN_ram_000e49a0(puVar20[1]);
    break;
  case 0x173:
    DAT_ram_8002c940 = (undefined1)puVar20[1];
    if (puVar20[1] != 0) {
      DAT_ram_8002c940 = 1;
    }
    break;
  case 0x174:
    DAT_ram_8002c941 = (undefined1)puVar20[1];
    break;
  case 0x175:
    FUN_ram_0015916c(iVar14,puVar20[1]);
    break;
  case 0x176:
    FUN_ram_0011eaac(iVar14,puVar20[1]);
    break;
  case 0x17a:
    DAT_ram_8002c943 = (undefined1)puVar20[1];
    FUN_ram_0015cc94(iVar14,0);
    break;
  case 0x17c:
    pcVar3 = s_mrc__s_ram_001c362c;
    DAT_ram_8002c944 = (undefined1)puVar20[1];
    uVar9 = puVar20[1] & 0xff;
joined_r0x00121228:
    if (uVar9 != 0) goto LAB_ram_00120f90;
LAB_ram_00120f88:
    pcVar15 = s_disabled_ram_001c3580;
    goto LAB_ram_00120f98;
  case 0x183:
    DAT_ram_8002c948 = (uint)(puVar20[1] != 0);
    FUN_ram_00163f48(iVar14,puVar20[1]);
    break;
  case 0x184:
    FUN_ram_00163ff0(puVar20[1]);
    break;
  case 0x18c:
    if (puVar20[1] == 0) {
      piVar16[0xb] = piVar16[0xb] & 0xbfffffff;
    }
    else {
      piVar16[0xb] = piVar16[0xb] | 0x40000000;
    }
    break;
  case 0x18e:
    iVar14 = FUN_ram_001289dc(iVar14,puVar20[1] != 0);
    if (iVar14 < 0) {
      *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 2;
    }
    break;
  case 0x191:
    FUN_ram_000ee260(s_QTN__ANTENNA_USAGE__d_ram_001c30d0,puVar20[1]);
    FUN_ram_0011e220(puVar20[1]);
    break;
  case 0x192:
    FUN_ram_00159724(iVar14,*(undefined1 *)(iVar21 + 0x67c),7,puVar20[1]);
    break;
  case 0x198:
    if (puVar20[1] == 0) {
      uVar9 = piVar16[0xc] & 0xfffffbff;
    }
    else {
      uVar9 = piVar16[0xc] | 0x400;
    }
    piVar16[0xc] = uVar9;
    FUN_ram_001070c8(piVar16);
    break;
  case 0x199:
    FUN_ram_0011ecd4(iVar14,iVar19,puVar20[1]);
    break;
  case 0x19a:
    FUN_ram_0011ef40(iVar14,puVar20[1]);
    break;
  case 0x19d:
    if (puVar20[2] == 6) {
      if (((uint)(puVar20 + 3) & 1) == 0) {
        DAT_ram_0018c144 = *(undefined2 *)(puVar20 + 3);
        DAT_ram_0018c146 = *(undefined2 *)((int)puVar20 + 0xe);
        DAT_ram_0018c148 = *(undefined2 *)(puVar20 + 4);
      }
      else {
        FUN_ram_0039fe00(&DAT_ram_0018c144,puVar20 + 3,6);
      }
    }
    break;
  case 0x19e:
    if (puVar20[1] == (uint)DAT_ram_0018c110) {
      return;
    }
    DAT_ram_0018c110 = (byte)puVar20[1];
    goto LAB_ram_0011facc;
  case 0x1a2:
    uVar18 = puVar20[1];
    iVar14 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    iVar14 = FUN_ram_000e2000(*(undefined4 *)(iVar14 + 0x54));
    *(undefined4 *)(iVar14 + 0x11a0) = uVar18;
    pcVar3 = s_MU_rank_tolerance_set_to__u_ram_001c360c;
    pcVar15 = (char *)puVar20[1];
    goto LAB_ram_00120f98;
  case 0x1a4:
    DAT_ram_0018c111 = (undefined1)puVar20[1];
    break;
  case 0x1ab:
    DAT_ram_8002c950 = puVar20[1];
    FUN_ram_0011be2c(iVar14);
    break;
  case 0x1b3:
    DAT_ram_8002c954 = puVar20[1];
    break;
  case 0x1b5:
    FUN_ram_00158398(puVar20[1]);
    break;
  case 0x1be:
    DAT_ram_8002c918 = (char *)puVar20[1];
    pcVar3 = s_Change_MU_TxBF_sounding_pkt_cnt_t_ram_001c352c;
    pcVar15 = DAT_ram_8002c918;
LAB_ram_00120f98:
    FUN_ram_000ee260(pcVar3,pcVar15);
    break;
  case 0x1c9:
    FUN_ram_0016548c(iVar14,puVar20[1]);
    break;
  case 0x1cf:
    FUN_ram_0011f01c(iVar14,iVar19,puVar20[1]);
    break;
  case 0x1df:
    piVar16[0x112] = puVar20[1];
    break;
  case 0x1e0:
    DAT_ram_8002c958 = puVar20[1];
    break;
  case 0x1e2:
    if (puVar20[1] == 0) {
      *(undefined1 *)(piVar16 + 0xe7a) = 1;
    }
    else {
      *(undefined1 *)(piVar16 + 0xe7a) = 0;
    }
    break;
  case 0x1e3:
    if (puVar20[1] == 0) {
      DAT_ram_0018c030 = 0;
    }
    else {
      DAT_ram_0018c030 = 1;
    }
    break;
  case 0x1e4:
    *(char *)(iVar19 + 0x80) = (char)puVar20[1];
    break;
  case 0x1f2:
    FUN_ram_0011ee48(iVar14,iVar19,puVar20[1]);
  }
switchD_ram_0011f1e6_caseD_3:
  return;
}


