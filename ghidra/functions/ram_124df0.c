/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00124df0 */

/* WARNING: Removing unreachable block (ram,0x001253f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00124df0(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined *local_40 [2];
  
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  piVar5 = (int *)FUN_ram_000e2000(*(undefined4 *)(iVar4 + 100));
  do {
    bVar3 = false;
    iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    iVar4 = *(int *)(iVar4 + 0xac);
    uVar20 = STATUS32;
    if ((uVar20 & 6) != 0) {
      STATUS32 = uVar20 & 0xfffffff9;
    }
    iVar9 = *(int *)(iVar4 + 0x14) * 0x20 + 0x180 + iVar4;
    *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar4 + 4);
    uVar8 = DAT_ram_80038ee4;
    *(undefined4 *)(iVar9 + 0x34) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar9 + 0x38) = uVar8;
    *(undefined4 *)(iVar9 + 0x3c) = 0;
    *(char **)(iVar9 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
    *(undefined4 *)(iVar9 + 0x48) = 0x9c;
    *(undefined4 *)(iVar9 + 0x44) = param_3;
    *(undefined4 *)(iVar9 + 0x4c) = param_4;
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 4) % 0xc;
    STATUS32 = uVar20;
    if (param_1 == 1) {
      puVar14 = (uint *)&DAT_ram_e000009c;
      puVar18 = (uint *)&DAT_ram_e0000094;
    }
    else if (param_1 == 2) {
      puVar14 = (uint *)&DAT_ram_e00000a4;
      puVar18 = (uint *)&DAT_ram_e0000098;
    }
    else if (param_1 == 4) {
      puVar14 = (uint *)&DAT_ram_e00000a8;
      puVar18 = (uint *)&DAT_ram_e00000a0;
    }
    else {
      puVar18 = (uint *)0x0;
      puVar14 = (uint *)0x0;
    }
    uVar20 = STATUS32;
    if ((uVar20 & 6) != 0) {
      STATUS32 = uVar20 & 0xfffffff9;
    }
    *param_2 = uVar20;
    if (puVar14 != (uint *)0x0) {
      *puVar14 = *puVar14 | 0x80000000;
      sync();
      if ((*puVar14 & 0x80000000) == 0) goto LAB_ram_00125068;
    }
    if (puVar18 != (uint *)0x0) {
      *puVar18 = *puVar18 | 0x80000000;
      sync();
      if ((*puVar18 & 0x80000000) == 0) {
        if (puVar14 != (uint *)0x0) {
          *puVar14 = *puVar14 & 0x7fffffff;
          sync();
        }
LAB_ram_00125068:
        STATUS32 = *param_2;
        uVar1 = (param_1 + 1) * 10;
        uVar21 = 0;
        uVar20 = 10000;
        bVar2 = false;
        bVar3 = false;
        do {
          if (uVar1 == 0) {
            iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
            if (*(int *)(iVar4 + 0xd8) == 0) goto LAB_ram_001250c0;
LAB_ram_001250f0:
            iVar4 = 2;
          }
          else {
            uVar19 = 0;
            do {
              sync();
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar1);
            iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
            if (*(int *)(iVar4 + 0xd8) != 0) goto LAB_ram_001250f0;
LAB_ram_001250c0:
            iVar4 = 0;
          }
          if (0 < 10 << (iVar4 + param_1 & 0x1fU)) {
            LP_END = 0x125128;
            LP_START = 0x125120;
            sync();
          }
          if ((iVar4 == 0) && (uVar21 = uVar21 + 1, uVar20 <= uVar21)) {
            uVar20 = uVar20 << 1;
            uVar21 = 0;
            if (uVar20 == 0) {
              FUN_ram_000ee260(s_MuC___s_ram_001c2988,
                               s_qtn_mproc_sync__waiting_for_sema_ram_001c295c);
              uVar20 = 1;
            }
            else {
              FUN_ram_000ee260(s_MuC___s_ram_001c2988,
                               s_qtn_mproc_sync__waiting_for_sema_ram_001c295c);
              if ((319999 < uVar20) && (!bVar2)) {
                iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
                puVar22 = *(undefined4 **)(iVar4 + 0xac);
                FUN_ram_000ee260(s_Dump_semaphore_trace_log_at_jiff_ram_001c2994,DAT_ram_80038ee0);
                iVar9 = 4;
                iVar4 = 0;
                puVar16 = puVar22;
                do {
                  if (iVar4 == 2) {
                    FUN_ram_000ee260(s_CPU__d_semaphore_trace_log_is_no_ram_001c29bc,2);
                  }
                  else {
                    FUN_ram_000ee260(s_CPU__d_semaphore_trace_log__pos__ram_001c29f8,iVar4,*puVar16,
                                     puVar16[8]);
                    iVar15 = 0;
                    iVar17 = iVar4 * 0x180;
                    iVar23 = 0xc;
                    do {
                      puVar13 = (undefined4 *)((int)puVar22 + iVar17 + 0x30);
                      iVar7 = 0;
                      iVar17 = iVar17 + 0x20;
                      do {
                        iVar6 = puVar13[iVar7 + 4];
                        local_40[iVar7] = (undefined *)0x0;
                        if ((iVar6 != 0) &&
                           (local_40[iVar7] = (undefined *)puVar13[iVar7 + 4], iVar4 != 1)) {
                          local_40[iVar7] = (undefined *)0x0;
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < 2);
                      if (local_40[0] == (undefined *)0x0) {
                        uVar11 = puVar13[6];
                        puVar12 = &DAT_ram_001c2a30;
                        uVar8 = puVar13[5];
                        puVar10 = &DAT_ram_001c2a30;
                        if (local_40[1] != (undefined *)0x0) goto LAB_ram_001252bc;
                      }
                      else {
                        uVar11 = puVar13[6];
                        uVar8 = puVar13[5];
                        puVar10 = local_40[0];
                        if (local_40[1] == (undefined *)0x0) {
                          puVar12 = &DAT_ram_001c2a30;
                        }
                        else {
LAB_ram_001252bc:
                          puVar12 = local_40[1];
                        }
                      }
                      FUN_ram_000ee260(s__d_pos__u__jiffies__u__u__state__ram_001c2a34,iVar15,
                                       *puVar13,puVar13[2],puVar13[1],puVar13[3],puVar13[4],puVar10,
                                       uVar11,uVar8,puVar12,puVar13[7]);
                      iVar23 = iVar23 + -1;
                      iVar15 = iVar15 + 1;
                    } while (iVar23 != 0);
                    puVar16[8] = *puVar16;
                  }
                  puVar16 = puVar16 + 1;
                  iVar9 = iVar9 + -1;
                  iVar4 = iVar4 + 1;
                } while (iVar9 != 0);
                FUN_ram_000ee260(s_Dump_semaphore_registers__ram_001c2a80);
                iVar4 = 6;
                puVar16 = (undefined4 *)&DAT_ram_e0000094;
                do {
                  FUN_ram_000ee260(s_reg_0x_08x_0x_08x_ram_001c2a9c,puVar16,*puVar16);
                  iVar4 = iVar4 + -1;
                  puVar16 = puVar16 + 1;
                } while (iVar4 != 0);
                bVar2 = true;
              }
            }
            bVar3 = true;
          }
          if (param_1 == 1) {
            puVar14 = (uint *)&DAT_ram_e000009c;
            puVar18 = (uint *)&DAT_ram_e0000094;
          }
          else if (param_1 == 2) {
            puVar14 = (uint *)&DAT_ram_e00000a4;
            puVar18 = (uint *)&DAT_ram_e0000098;
          }
          else if (param_1 == 4) {
            puVar14 = (uint *)&DAT_ram_e00000a8;
            puVar18 = (uint *)&DAT_ram_e00000a0;
          }
          else {
            puVar18 = (uint *)0x0;
            puVar14 = (uint *)0x0;
          }
          uVar19 = STATUS32;
          if ((uVar19 & 6) != 0) {
            STATUS32 = uVar19 & 0xfffffff9;
          }
          *param_2 = uVar19;
          if (puVar14 == (uint *)0x0) {
LAB_ram_001253fc:
            if (puVar18 == (uint *)0x0) break;
            *puVar18 = *puVar18 | 0x80000000;
            sync();
            if ((*puVar18 & 0x80000000) != 0) break;
            if (puVar14 != (uint *)0x0) {
              *puVar14 = *puVar14 & 0x7fffffff;
              sync();
            }
          }
          else {
            *puVar14 = *puVar14 | 0x80000000;
            sync();
            if ((*puVar14 & 0x80000000) != 0) goto LAB_ram_001253fc;
          }
          STATUS32 = *param_2;
        } while( true );
      }
    }
    iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    iVar4 = *(int *)(iVar4 + 0xac);
    uVar20 = STATUS32;
    if ((uVar20 & 6) != 0) {
      STATUS32 = uVar20 & 0xfffffff9;
    }
    iVar9 = *(int *)(iVar4 + 0x14) * 0x20 + 0x180 + iVar4;
    *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar4 + 4);
    uVar8 = DAT_ram_80038ee4;
    *(undefined4 *)(iVar9 + 0x34) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar9 + 0x38) = uVar8;
    *(undefined4 *)(iVar9 + 0x3c) = 1;
    *(char **)(iVar9 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
    *(undefined4 *)(iVar9 + 0x48) = 0x9c;
    *(undefined4 *)(iVar9 + 0x44) = param_3;
    *(undefined4 *)(iVar9 + 0x4c) = param_4;
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 4) % 0xc;
    STATUS32 = uVar20;
    if (bVar3) {
      FUN_ram_000ee260(s_MuC___s_ram_001c2988,s_qtn_mproc_sync__wait_succeeded_ram_001c2ab0);
      iVar4 = *piVar5;
    }
    else {
      iVar4 = *piVar5;
    }
    if (iVar4 == 0) {
      return;
    }
    if (param_1 == 1) {
      puVar14 = (uint *)&DAT_ram_e0000094;
LAB_ram_00125564:
      *puVar14 = *puVar14 & 0x7fffffff;
      sync();
    }
    else {
      if (param_1 == 2) {
        puVar14 = (uint *)&DAT_ram_e0000098;
        goto LAB_ram_00125564;
      }
      if (param_1 == 4) {
        puVar14 = (uint *)&DAT_ram_e00000a0;
        goto LAB_ram_00125564;
      }
    }
    if (param_1 == 1) {
      puVar14 = (uint *)&DAT_ram_e000009c;
LAB_ram_00124e5c:
      *puVar14 = *puVar14 & 0x7fffffff;
      sync();
    }
    else {
      if (param_1 == 2) {
        puVar14 = (uint *)&DAT_ram_e00000a4;
        goto LAB_ram_00124e5c;
      }
      if (param_1 == 4) {
        puVar14 = (uint *)&DAT_ram_e00000a8;
        goto LAB_ram_00124e5c;
      }
    }
    iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    iVar4 = *(int *)(iVar4 + 0xac);
    uVar20 = STATUS32;
    if ((uVar20 & 6) != 0) {
      STATUS32 = uVar20 & 0xfffffff9;
    }
    iVar9 = *(int *)(iVar4 + 0x14) * 0x20 + 0x180 + iVar4;
    *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar4 + 4);
    uVar8 = DAT_ram_80038ee4;
    *(undefined4 *)(iVar9 + 0x34) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar9 + 0x38) = uVar8;
    *(undefined4 *)(iVar9 + 0x3c) = 2;
    *(char **)(iVar9 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
    *(undefined4 *)(iVar9 + 0x48) = 0xa0;
    *(undefined4 *)(iVar9 + 0x44) = param_3;
    *(undefined4 *)(iVar9 + 0x4c) = param_4;
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 4) % 0xc;
    STATUS32 = uVar20;
    STATUS32 = *param_2;
  } while( true );
}


