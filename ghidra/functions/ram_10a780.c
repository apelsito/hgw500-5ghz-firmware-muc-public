/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010a780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_ram_0010a780(int *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint local_48;
  uint local_40;
  
  iVar14 = *(int *)(*param_1 + 0x1c);
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  puVar5 = (uint *)FUN_ram_000e2000(*(undefined4 *)(iVar4 + 0x54));
  puVar6 = (uint *)FUN_ram_000e6c28(0x11);
  if (puVar6 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (param_2 == 0) {
    puVar6 = (uint *)0x3;
    local_48 = 3;
    bVar3 = false;
    uVar15 = 0;
  }
  else {
    uVar15 = param_2 - 1 & 0xff;
    if ((int)param_2 <= (int)uVar15) goto joined_r0x0010ab34;
    bVar3 = true;
    local_48 = param_2;
  }
  do {
    local_40 = 0;
    if (bVar3) {
LAB_ram_0010a868:
      iVar4 = param_2 * 0x50;
      iVar13 = iVar14 + 0x4770 + iVar4;
      if (param_2 == *(byte *)(iVar14 + 0x4770 + iVar4 + -0xcc)) {
        cVar1 = *(char *)(iVar13 + -0xcb);
        if (param_3 == 0) {
          param_3 = 0;
          if (cVar1 == '\x02' || cVar1 == '\x03') goto LAB_ram_0010aac8;
          if (*(short *)(iVar14 + 0x5aa4) != 0) {
            puVar6 = (uint *)FUN_ram_000ee260(s_qtn_update_mu_grp_qmat__grp_id___ram_001c07a4,
                                              param_2);
          }
          *(undefined1 *)(iVar13 + -0xcb) = 0;
        }
        else {
          if (param_3 == 1) {
            param_3 = 1;
            if (*(short *)(iVar14 + 0x5aa4) != 0) {
LAB_ram_0010aa34:
              puVar6 = (uint *)FUN_ram_000ee260(s_qtn_update_mu_grp_qmat__grp_id___ram_001c0778,
                                                param_2);
            }
          }
          else {
            if (param_3 != 2) {
              if (param_3 == 3) {
                param_3 = 3;
                uVar11 = 2;
                if (*(short *)(iVar14 + 0x5aa4) != 0) {
                  pcVar7 = s_qtn_update_mu_grp_qmat__grp_id___ram_001c07cc;
                  uVar11 = 2;
LAB_ram_0010ab18:
                  puVar6 = (uint *)FUN_ram_000ee260(pcVar7,param_2);
                }
              }
              else {
                if (param_3 != 4) goto LAB_ram_0010aabc;
                param_3 = 4;
                uVar11 = 3;
                if (*(short *)(iVar14 + 0x5aa4) != 0) {
                  pcVar7 = s_qtn_update_mu_grp_qmat__grp_id___ram_001c07f8;
                  uVar11 = 3;
                  goto LAB_ram_0010ab18;
                }
              }
              *(undefined1 *)(iVar13 + -0xcb) = uVar11;
              goto LAB_ram_0010aabc;
            }
            param_3 = 2;
            if (cVar1 == '\x02' || cVar1 == '\x03') goto LAB_ram_0010aac8;
            iVar12 = iVar14 + 0x47dc + iVar4;
            *(int *)(iVar12 + -0xf0) = *(int *)(iVar14 + 0x47dc + iVar4 + -0xf0) + 1;
            sVar2 = *(short *)(iVar14 + 0x5aa4);
            puVar6 = (uint *)(iVar14 + 0x5ba4);
            *(uint *)(iVar12 + -0xec) = puVar5[param_2 * 10 + 0x37f];
            if (sVar2 != 0) {
              puVar6 = (uint *)FUN_ram_000ee260(s_qtn_update_mu_grp_qmat__grp_id___ram_001c073c,
                                                param_2);
            }
            uVar10 = puVar5[param_2 * 10 + 0x381];
            *(uint *)(iVar12 + -0x108) = puVar5[param_2 * 10 + 0x380] + 0x7ff90000 >> 6;
            uVar8 = puVar5[param_2 * 10 + 0x382];
            *(uint *)(iVar12 + -0x104) = uVar10 + 0x7ff90000 >> 6;
            uVar10 = puVar5[param_2 * 10 + 899];
            *(uint *)(iVar12 + -0x100) = uVar8 + 0x7ff90000 >> 6;
            uVar8 = puVar5[param_2 * 10 + 900];
            *(uint *)(iVar12 + -0xfc) = uVar10 + 0x7ff90000 >> 6;
            uVar9 = puVar5[param_2 * 10 + 0x385];
            *(uint *)(iVar12 + -0xf8) = uVar8 + 0x7ff90000 >> 6;
            uVar10 = puVar5[uVar15 * 10 + 0x390];
            *(uint *)(iVar12 + -0xf4) = uVar9 + 0x7ff90000 >> 6;
            if (local_40 == uVar10) {
              sVar2 = *(short *)(iVar14 + 0x5aa4);
            }
            else {
              puVar6 = (uint *)FUN_ram_000ee260(s_QM_update___d__d__ram_001c0764,local_40,
                                                puVar5[uVar15 * 10 + 0x390]);
              sVar2 = *(short *)(iVar14 + 0x5aa4);
            }
            if (sVar2 != 0) {
              param_3 = 2;
              goto LAB_ram_0010aa34;
            }
          }
          *(undefined1 *)(iVar13 + -0xcb) = 1;
        }
LAB_ram_0010aabc:
        *(undefined1 *)(puVar5 + param_2 * 10 + 0x37d) = 0;
      }
    }
    else if ((char)puVar5[uVar15 * 10 + 0x387] != '\0') {
      local_40 = puVar5[uVar15 * 10 + 0x390];
      param_2 = (uint)*(byte *)((int)puVar5 + uVar15 * 0x28 + 0xe1d);
      goto LAB_ram_0010a868;
    }
LAB_ram_0010aac8:
    uVar15 = uVar15 + 1 & 0xff;
  } while ((int)uVar15 < (int)local_48);
joined_r0x0010ab34:
  if (param_4 != 0) {
    uVar15 = 0;
    do {
      uVar10 = (*puVar5 + uVar15) % 0x16;
      puVar6 = (uint *)(uVar10 * 0xa0);
      if ((puVar5 + uVar10 * 0x28)[0x13] == 0) {
        *puVar5 = uVar10;
        (puVar5 + uVar10 * 0x28)[0x13] = 1;
        puVar6 = (uint *)((int)puVar6 + (int)(puVar5 + 0x12));
        if (puVar6 == (uint *)0x0) {
          return (uint *)0x0;
        }
        *puVar6 = 6;
        if (puVar5[0xf] == 0xffffffff) {
          puVar5[0xf] = *puVar5;
          sync();
          sync();
          _DAT_ram_e0000024 = 0x10001;
          return (uint *)0x10001;
        }
        puVar6[1] = 0;
        return puVar6;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x16);
  }
  return puVar6;
}


