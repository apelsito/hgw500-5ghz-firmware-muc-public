/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f9a10 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_000f9a10(uint *param_1)

{
  undefined4 extraout_r1;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r7;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  bool bVar13;
  
  uVar7 = *param_1;
  uVar12 = param_1[6];
  puVar11 = param_1 + 0x13;
  uVar9 = param_1[0xc];
  FUN_ram_000ee260(s_dest__02x__02x__02x__02x__02x__0_ram_001bee4c,(char)param_1[9],
                   *(undefined1 *)((int)param_1 + 0x25),*(undefined1 *)((int)param_1 + 0x26),
                   *(undefined1 *)((int)param_1 + 0x27),(char)param_1[10],
                   *(undefined1 *)((int)param_1 + 0x29));
  FUN_ram_000ee260(s_fc1_0x_08x_len__d__d_dmasz__d_ac_ram_001bee74,*param_1,param_1[1] >> 0x16,
                   param_1[1] & 0x3fffff,param_1[5],param_1[6],param_1[7],param_1[0xc],param_1[0xd],
                   param_1[0xe] >> 0xe,param_1[0xe] & 0x3fff);
  uVar5 = uVar7 & 0x200;
  uVar3 = uVar7 & 0x400;
  uVar1 = uVar7 & 0x800;
  uVar6 = extraout_r7;
  if ((uVar7 & 0x100) == 0) {
    if (uVar5 == 0) {
      if (uVar3 == 0) {
        bVar13 = uVar1 == 0;
        if (bVar13) {
          uVar6 = 0;
          uVar1 = 0;
        }
        uVar4 = 0;
        if (!bVar13) {
          uVar4 = 0;
          uVar1 = 0;
          uVar6 = 0;
        }
      }
      else {
        uVar4 = 0;
        if (uVar1 == 0) goto LAB_ram_000f9b38;
LAB_ram_000f9b40:
        uVar1 = 0;
        uVar6 = 1;
      }
    }
    else if (uVar3 == 0) {
      if (uVar1 == 0) {
        uVar4 = 1;
        uVar1 = 0;
        uVar6 = 0;
      }
      else {
        uVar4 = 1;
        uVar1 = 0;
        uVar6 = 0;
      }
    }
    else {
      uVar4 = 1;
      if (uVar1 != 0) goto LAB_ram_000f9b40;
LAB_ram_000f9b38:
      uVar1 = 0;
LAB_ram_000f9bb0:
      uVar6 = 1;
    }
  }
  else if (uVar5 == 0) {
    if (uVar3 == 0) {
      bVar13 = uVar1 == 0;
      if (bVar13) {
        uVar6 = 0;
        uVar1 = 1;
      }
      uVar4 = 0;
      if (!bVar13) {
        uVar5 = 0;
        uVar4 = 0;
LAB_ram_000f9c14:
        uVar1 = 1;
        uVar6 = uVar5;
      }
    }
    else {
      uVar4 = 0;
joined_r0x000f9ba4:
      if (uVar1 == 0) {
        uVar1 = 1;
        goto LAB_ram_000f9bb0;
      }
      uVar1 = 1;
      uVar6 = 1;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar4 = 1;
      goto joined_r0x000f9ba4;
    }
    bVar13 = uVar1 != 0;
    if (bVar13) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      uVar1 = 1;
    }
    uVar4 = 1;
    if (bVar13) goto LAB_ram_000f9c14;
  }
  FUN_ram_000ee260(s_type__d_rtbl__d_ra__d_brst__d_ri_ram_001beed4,(uVar7 & 0xf0) >> 4,uVar1,uVar4,
                   uVar6);
  uVar1 = uVar7 & 0x40000;
  uVar5 = uVar7 & 0x80000;
  uVar4 = extraout_r1;
  if ((uVar7 & 0x10000) == 0) {
    if ((uVar7 & 0x20000) == 0) {
      if (uVar1 == 0) {
        if (uVar5 == 0) {
          uVar4 = 0;
        }
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = 0;
          uVar4 = 0;
        }
        goto LAB_ram_000f9e28;
      }
      uVar2 = 0;
    }
    else {
      if (uVar1 == 0) {
        if (uVar5 == 0) {
          uVar2 = 1;
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          uVar2 = 1;
        }
        goto LAB_ram_000f9e28;
      }
      uVar2 = 1;
    }
    uVar4 = 0;
    goto LAB_ram_000f9e28;
  }
  if ((uVar7 & 0x20000) == 0) {
    if (uVar1 == 0) {
      if (uVar5 == 0) {
        uVar4 = 1;
      }
      uVar2 = 0;
      if (uVar5 == 0) goto LAB_ram_000f9e28;
      uVar2 = 0;
      goto LAB_ram_000f9e94;
    }
    uVar2 = 0;
  }
  else {
    if (uVar1 == 0) {
      if (uVar5 == 0) {
        uVar4 = 1;
      }
      uVar2 = 1;
      if (uVar5 == 0) goto LAB_ram_000f9e28;
LAB_ram_000f9e94:
      uVar4 = 1;
      goto LAB_ram_000f9e28;
    }
    uVar2 = 1;
  }
  if (uVar5 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
  }
LAB_ram_000f9e28:
  FUN_ram_000ee260(s_frg__d_nc__d_prefch__d_txint__d_f_ram_001bef20,uVar4,uVar2);
  FUN_ram_000ee260(s_aifsn__d_ecw__d__d_nidx__d_dmain_ram_001bef70,uVar12 & 0xf,(uVar12 & 0xf0) >> 4
                   ,(uVar12 & 0xf00) >> 8,(uVar12 & 0x7f000) >> 0xc,(uVar12 & 0x80000) >> 0x13,
                   (uVar12 & 0x300000) >> 0x14,(uVar12 & 0x800000) >> 0x17,
                   (uVar12 & 0x1000000) >> 0x18,(uVar12 & 0xe000000) >> 0x19,uVar12 >> 0x1d);
  FUN_ram_000ee260(s_phyctl__txoplim__d_txscale__d_sm_ram_001befc4,uVar9 & 0xff,(uVar9 & 0x700) >> 8
                   ,(uVar9 & 0x80000) >> 0x13,(uVar9 & 0x100000) >> 0x14,(uVar9 & 0x1000000) >> 0x18
                  );
  iVar8 = 0;
  iVar10 = 4;
  do {
    uVar5 = *puVar11;
    iVar10 = iVar10 + -1;
    FUN_ram_000ee260(s_rt_d__idx__d_pream__d_11n__d_bw__ram_001bf000,iVar8,uVar5 & 0x7f,
                     (uVar5 & 0x80) >> 7,(uVar5 & 0x100) >> 8,(uVar5 & 0x600) >> 9,
                     (uVar5 & 0x1800) >> 0xb,(uVar5 & 0x6000) >> 0xd,(uVar5 & 0x8000) >> 0xf,
                     (uVar5 & 0xf0000) >> 0x10,(uVar5 & 0xf00000) >> 0x14,
                     (uVar5 & 0x1000000) >> 0x18,(uVar5 & 0x6000000) >> 0x19,
                     (uVar5 & 0x18000000) >> 0x1b,uVar5 >> 0x1d);
    uVar5 = puVar11[1];
    FUN_ram_000ee260(s_seqp_0x_04x_expp_0x_04x_ldpc__d_l_ram_001bf070,uVar5 & 0x7fff,
                     (uVar5 & 0x3ff0000) >> 0x10,(uVar5 & 0x4000000) >> 0x1a,
                     (uVar5 & 0x8000000) >> 0x1b,(uVar5 & 0x70000000) >> 0x1c,uVar5 >> 0x1f);
    puVar11 = puVar11 + 2;
    iVar8 = iVar8 + 1;
  } while (iVar10 != 0);
  return;
}


