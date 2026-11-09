/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001255a4 */

/* WARNING: Removing unreachable block (ram,0x00125b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_001255a4(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined *local_40 [2];
  
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  piVar5 = (int *)FUN_ram_000e2000(*(undefined4 *)(iVar4 + 100));
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  iVar4 = *(int *)(iVar4 + 0xac);
  uVar23 = STATUS32;
  if ((uVar23 & 6) != 0) {
    STATUS32 = uVar23 & 0xfffffff9;
  }
  iVar8 = *(int *)(iVar4 + 0x14) * 0x20 + 0x180 + iVar4;
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar4 + 4);
  uVar10 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar8 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar8 + 0x38) = uVar10;
  *(undefined4 *)(iVar8 + 0x3c) = 0;
  *(char **)(iVar8 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
  *(undefined4 *)(iVar8 + 0x48) = 0xb3;
  *(undefined4 *)(iVar8 + 0x44) = param_3;
  *(undefined4 *)(iVar8 + 0x4c) = param_4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 4) % 0xc;
  STATUS32 = uVar23;
  if (param_1 == 1) {
    puVar14 = (uint *)&DAT_ram_e000009c;
    puVar17 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar14 = (uint *)&DAT_ram_e00000a4;
    puVar17 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar14 = (uint *)&DAT_ram_e00000a8;
    puVar17 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar17 = (uint *)0x0;
    puVar14 = (uint *)0x0;
  }
  uVar23 = STATUS32;
  if ((uVar23 & 6) != 0) {
    STATUS32 = uVar23 & 0xfffffff9;
  }
  *param_2 = uVar23;
  if (puVar14 != (uint *)0x0) {
    *puVar14 = *puVar14 | 0x80000000;
    sync();
    if ((*puVar14 & 0x80000000) == 0) goto LAB_ram_0012577c;
  }
  if (puVar17 != (uint *)0x0) {
    *puVar17 = *puVar17 | 0x80000000;
    sync();
    if ((*puVar17 & 0x80000000) == 0) {
      if (puVar14 != (uint *)0x0) {
        *puVar14 = *puVar14 & 0x7fffffff;
        sync();
      }
LAB_ram_0012577c:
      STATUS32 = *param_2;
      bVar2 = false;
      uVar23 = 10000;
      bVar3 = false;
      uVar1 = (param_1 + 1) * 10;
      uVar22 = 0;
      do {
        if (uVar1 == 0) {
          iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
          if (*(int *)(iVar4 + 0xd8) != 0) goto LAB_ram_001257fc;
LAB_ram_001257d8:
          iVar4 = 0;
        }
        else {
          uVar18 = 0;
          do {
            sync();
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar1);
          iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
          if (*(int *)(iVar4 + 0xd8) == 0) goto LAB_ram_001257d8;
LAB_ram_001257fc:
          iVar4 = 2;
        }
        if (0 < 10 << (param_1 + iVar4 & 0x1fU)) {
          LP_END = 0x125838;
          LP_START = 0x125830;
          sync();
        }
        if ((iVar4 == 0) && (uVar22 = uVar22 + 1, uVar23 <= uVar22)) {
          uVar23 = uVar23 << 1;
          uVar22 = 0;
          if (uVar23 == 0) {
            FUN_ram_000ee260(s_MuC___s_ram_001c2988,s_qtn_mproc_sync__waiting_for_sema_ram_001c295c)
            ;
            uVar23 = 1;
          }
          else {
            FUN_ram_000ee260(s_MuC___s_ram_001c2988,s_qtn_mproc_sync__waiting_for_sema_ram_001c295c)
            ;
            if ((319999 < uVar23) && (!bVar2)) {
              iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
              puVar21 = *(undefined4 **)(iVar4 + 0xac);
              FUN_ram_000ee260(s_Dump_semaphore_trace_log_at_jiff_ram_001c2994,DAT_ram_80038ee0);
              iVar8 = 4;
              iVar4 = 0;
              puVar16 = puVar21;
              do {
                if (iVar4 == 2) {
                  FUN_ram_000ee260(s_CPU__d_semaphore_trace_log_is_no_ram_001c29bc,2);
                }
                else {
                  FUN_ram_000ee260(s_CPU__d_semaphore_trace_log__pos__ram_001c29f8,iVar4,*puVar16,
                                   puVar16[8]);
                  iVar20 = 0;
                  iVar15 = iVar4 * 0x180;
                  iVar19 = 0xc;
                  do {
                    puVar13 = (undefined4 *)((int)puVar21 + iVar15 + 0x30);
                    iVar7 = 0;
                    iVar15 = iVar15 + 0x20;
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
                      uVar12 = puVar13[6];
                      puVar11 = &DAT_ram_001c2a30;
                      uVar10 = puVar13[5];
                      puVar9 = &DAT_ram_001c2a30;
                      if (local_40[1] != (undefined *)0x0) goto LAB_ram_001259cc;
                    }
                    else {
                      uVar12 = puVar13[6];
                      uVar10 = puVar13[5];
                      puVar9 = local_40[0];
                      if (local_40[1] == (undefined *)0x0) {
                        puVar11 = &DAT_ram_001c2a30;
                      }
                      else {
LAB_ram_001259cc:
                        puVar11 = local_40[1];
                      }
                    }
                    FUN_ram_000ee260(s__d_pos__u__jiffies__u__u__state__ram_001c2a34,iVar20,*puVar13
                                     ,puVar13[2],puVar13[1],puVar13[3],puVar13[4],puVar9,uVar12,
                                     uVar10,puVar11,puVar13[7]);
                    iVar19 = iVar19 + -1;
                    iVar20 = iVar20 + 1;
                  } while (iVar19 != 0);
                  puVar16[8] = *puVar16;
                }
                puVar16 = puVar16 + 1;
                iVar8 = iVar8 + -1;
                iVar4 = iVar4 + 1;
              } while (iVar8 != 0);
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
          puVar17 = (uint *)&DAT_ram_e000009c;
          puVar14 = (uint *)&DAT_ram_e0000094;
        }
        else if (param_1 == 2) {
          puVar17 = (uint *)&DAT_ram_e00000a4;
          puVar14 = (uint *)&DAT_ram_e0000098;
        }
        else if (param_1 == 4) {
          puVar17 = (uint *)&DAT_ram_e00000a8;
          puVar14 = (uint *)&DAT_ram_e00000a0;
        }
        else {
          puVar14 = (uint *)0x0;
          puVar17 = (uint *)0x0;
        }
        uVar18 = STATUS32;
        if ((uVar18 & 6) != 0) {
          STATUS32 = uVar18 & 0xfffffff9;
        }
        *param_2 = uVar18;
        if (puVar17 == (uint *)0x0) {
LAB_ram_00125aa0:
          if (puVar14 == (uint *)0x0) goto LAB_ram_00125b18;
          *puVar14 = *puVar14 | 0x80000000;
          sync();
          if ((*puVar14 & 0x80000000) != 0) goto LAB_ram_00125b18;
          if (puVar17 != (uint *)0x0) {
            *puVar17 = *puVar17 & 0x7fffffff;
            sync();
          }
        }
        else {
          *puVar17 = *puVar17 | 0x80000000;
          sync();
          if ((*puVar17 & 0x80000000) != 0) goto LAB_ram_00125aa0;
        }
        STATUS32 = *param_2;
      } while( true );
    }
  }
  bVar3 = false;
LAB_ram_00125b18:
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  iVar4 = *(int *)(iVar4 + 0xac);
  uVar23 = STATUS32;
  if ((uVar23 & 6) != 0) {
    STATUS32 = uVar23 & 0xfffffff9;
  }
  iVar8 = *(int *)(iVar4 + 0x14) * 0x20 + 0x180 + iVar4;
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar4 + 4);
  uVar10 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar8 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar8 + 0x38) = uVar10;
  *(undefined4 *)(iVar8 + 0x3c) = 1;
  *(char **)(iVar8 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
  *(undefined4 *)(iVar8 + 0x48) = 0xb3;
  *(undefined4 *)(iVar8 + 0x44) = param_3;
  *(undefined4 *)(iVar8 + 0x4c) = param_4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 4) % 0xc;
  STATUS32 = uVar23;
  if (bVar3) {
    FUN_ram_000ee260(s_MuC___s_ram_001c2988,s_qtn_mproc_sync__wait_succeeded_ram_001c2ab0);
    if (*piVar5 == 0) {
      return 1;
    }
    if (param_1 == 1) {
LAB_ram_00125c10:
      puVar14 = (uint *)&DAT_ram_e0000094;
    }
    else if (param_1 == 2) {
LAB_ram_00125c2c:
      puVar14 = (uint *)&DAT_ram_e0000098;
    }
    else {
      if (param_1 != 4) goto LAB_ram_00125c64;
LAB_ram_00125c48:
      puVar14 = (uint *)&DAT_ram_e00000a0;
    }
    *puVar14 = *puVar14 & 0x7fffffff;
    sync();
  }
  else {
    if (*piVar5 == 0) {
      return 1;
    }
    if (param_1 == 1) goto LAB_ram_00125c10;
    if (param_1 == 2) goto LAB_ram_00125c2c;
    if (param_1 == 4) goto LAB_ram_00125c48;
  }
LAB_ram_00125c64:
  if (param_1 == 1) {
    puVar14 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar14 = (uint *)&DAT_ram_e00000a4;
  }
  else {
    if (param_1 != 4) goto LAB_ram_00125cac;
    puVar14 = (uint *)&DAT_ram_e00000a8;
  }
  *puVar14 = *puVar14 & 0x7fffffff;
  sync();
LAB_ram_00125cac:
  iVar4 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  iVar4 = *(int *)(iVar4 + 0xac);
  uVar23 = STATUS32;
  if ((uVar23 & 6) != 0) {
    STATUS32 = uVar23 & 0xfffffff9;
  }
  iVar8 = *(int *)(iVar4 + 0x14) * 0x20 + 0x180 + iVar4;
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar4 + 4);
  uVar10 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar8 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar8 + 0x38) = uVar10;
  *(undefined4 *)(iVar8 + 0x3c) = 2;
  *(char **)(iVar8 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
  *(undefined4 *)(iVar8 + 0x48) = 0xb7;
  *(undefined4 *)(iVar8 + 0x44) = param_3;
  *(undefined4 *)(iVar8 + 0x4c) = param_4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 4) % 0xc;
  STATUS32 = uVar23;
  STATUS32 = *param_2;
  return 0;
}


