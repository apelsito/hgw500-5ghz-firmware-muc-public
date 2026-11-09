/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00151098 */

/* WARNING: Removing unreachable block (ram,0x00151734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00151098(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint local_48;
  undefined *local_40 [2];
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar6 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar6 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = _DAT_ram_e00000bc + 0xe0000000;
  }
  bVar3 = false;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar8 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar8 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar8 = 0;
      }
    }
  }
  else {
    uVar8 = _DAT_ram_e00000bc + 0xe0000000;
  }
  iVar14 = *(int *)(uVar8 + 0xac);
  uVar8 = STATUS32;
  if ((uVar8 & 6) != 0) {
    STATUS32 = uVar8 & 0xfffffff9;
  }
  iVar10 = *(int *)(iVar14 + 0x14) * 0x20 + 0x180 + iVar14;
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar14 + 4);
  uVar12 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar10 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar10 + 0x38) = uVar12;
  *(undefined4 *)(iVar10 + 0x3c) = 0;
  *(char **)(iVar10 + 0x40) = s______common_ruby_pm_mproc_h_ram_001c6f88;
  *(undefined4 *)(iVar10 + 0x48) = 0x43;
  *(undefined4 *)(iVar10 + 0x44) = param_2;
  *(undefined4 *)(iVar10 + 0x4c) = param_3;
  *(int *)(iVar14 + 4) = *(int *)(iVar14 + 4) + 1;
  *(uint *)(iVar14 + 0x14) = *(uint *)(iVar14 + 4) % 0xc;
  STATUS32 = uVar8;
  if (param_1 == 1) {
    puVar15 = (uint *)&DAT_ram_e000009c;
    puVar17 = (uint *)&DAT_ram_e0000094;
  }
  else if (param_1 == 2) {
    puVar15 = (uint *)&DAT_ram_e00000a4;
    puVar17 = (uint *)&DAT_ram_e0000098;
  }
  else if (param_1 == 4) {
    puVar15 = (uint *)&DAT_ram_e00000a8;
    puVar17 = (uint *)&DAT_ram_e00000a0;
  }
  else {
    puVar17 = (uint *)0x0;
    puVar15 = (uint *)0x0;
  }
  local_48 = STATUS32;
  if ((local_48 & 6) != 0) {
    STATUS32 = local_48 & 0xfffffff9;
  }
  if (puVar15 != (uint *)0x0) {
    *puVar15 = *puVar15 | 0x80000000;
    sync();
    if ((*puVar15 & 0x80000000) == 0) goto LAB_ram_001512c4;
  }
  if (puVar17 != (uint *)0x0) {
    *puVar17 = *puVar17 | 0x80000000;
    sync();
    if ((*puVar17 & 0x80000000) == 0) {
      if (puVar15 != (uint *)0x0) {
        *puVar15 = *puVar15 & 0x7fffffff;
        sync();
      }
LAB_ram_001512c4:
      STATUS32 = local_48;
      uVar23 = 0;
      uVar8 = 10000;
      bVar2 = false;
      uVar1 = (param_1 + 1) * 10;
      bVar3 = false;
      do {
        uVar18 = 0;
        if (uVar1 == 0) {
          if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
LAB_ram_00151360:
            if (_DAT_ram_e00000bc < 0x8000000) {
              iVar14 = *(int *)(_DAT_ram_e00000bc + 0x400000d8);
            }
            else {
              iVar14 = iRam000000d8;
              if (0xbfffffff < _DAT_ram_e00000bc) {
                iVar14 = *(int *)(_DAT_ram_e00000bc + 0xd8);
              }
            }
          }
          else {
            iVar14 = *(int *)(_DAT_ram_e00000bc + 0xe00000d8);
          }
        }
        else {
          do {
            sync();
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar1);
          if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc))
          goto LAB_ram_00151360;
          iVar14 = *(int *)(_DAT_ram_e00000bc + 0xe00000d8);
        }
        iVar10 = 0;
        if (iVar14 != 0) {
          iVar10 = 2;
        }
        if (0 < 10 << (param_1 + iVar10 & 0x1fU)) {
          LP_END = 0x1513c0;
          LP_START = 0x1513b8;
          sync();
        }
        if ((iVar10 == 0) && (uVar23 = uVar23 + 1, uVar8 <= uVar23)) {
          uVar8 = uVar8 << 1;
          uVar23 = 0;
          if (uVar8 == 0) {
            FUN_ram_000ee260(s_MuC___s_ram_001c6e40,s_qtn_mproc_sync__waiting_for_sema_ram_001c6e14)
            ;
            uVar8 = 1;
          }
          else {
            FUN_ram_000ee260(s_MuC___s_ram_001c6e40,s_qtn_mproc_sync__waiting_for_sema_ram_001c6e14)
            ;
            if ((319999 < uVar8) && (!bVar2)) {
              if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
                if (_DAT_ram_e00000bc < 0x8000000) {
                  uVar18 = _DAT_ram_e00000bc + 0x40000000;
                }
                else {
                  uVar18 = _DAT_ram_e00000bc;
                  if (_DAT_ram_e00000bc < 0xc0000000) {
                    uVar18 = 0;
                  }
                }
              }
              else {
                uVar18 = _DAT_ram_e00000bc + 0xe0000000;
              }
              puVar22 = *(undefined4 **)(uVar18 + 0xac);
              FUN_ram_000ee260(s_Dump_semaphore_trace_log_at_jiff_ram_001c6e4c,DAT_ram_80038ee0);
              iVar14 = 0;
              iVar10 = 4;
              puVar16 = puVar22;
              do {
                if (iVar14 == 2) {
                  FUN_ram_000ee260(s_CPU__d_semaphore_trace_log_is_no_ram_001c6e74,2);
                }
                else {
                  FUN_ram_000ee260(s_CPU__d_semaphore_trace_log__pos__ram_001c6eb0,iVar14,*puVar16,
                                   puVar16[8]);
                  iVar21 = 0;
                  iVar20 = iVar14 * 0x180;
                  iVar19 = 0xc;
                  do {
                    puVar4 = (undefined4 *)((int)puVar22 + iVar20 + 0x30);
                    iVar7 = 0;
                    iVar20 = iVar20 + 0x20;
                    do {
                      iVar5 = puVar4[iVar7 + 4];
                      local_40[iVar7] = (undefined *)0x0;
                      if ((iVar5 != 0) &&
                         (local_40[iVar7] = (undefined *)puVar4[iVar7 + 4], iVar14 != 1)) {
                        local_40[iVar7] = (undefined *)0x0;
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < 2);
                    if (local_40[0] == (undefined *)0x0) {
                      uVar13 = puVar4[6];
                      puVar11 = &DAT_ram_001c6ee8;
                      uVar12 = puVar4[5];
                      puVar9 = &DAT_ram_001c6ee8;
                      if (local_40[1] != (undefined *)0x0) goto LAB_ram_001515fc;
                    }
                    else {
                      uVar13 = puVar4[6];
                      uVar12 = puVar4[5];
                      puVar9 = local_40[0];
                      if (local_40[1] == (undefined *)0x0) {
                        puVar11 = &DAT_ram_001c6ee8;
                      }
                      else {
LAB_ram_001515fc:
                        puVar11 = local_40[1];
                      }
                    }
                    FUN_ram_000ee260(s__d_pos__u__jiffies__u__u__state__ram_001c6eec,iVar21,*puVar4,
                                     puVar4[2],puVar4[1],puVar4[3],puVar4[4],puVar9,uVar13,uVar12,
                                     puVar11,puVar4[7]);
                    iVar19 = iVar19 + -1;
                    iVar21 = iVar21 + 1;
                  } while (iVar19 != 0);
                  puVar16[8] = *puVar16;
                }
                puVar16 = puVar16 + 1;
                iVar10 = iVar10 + -1;
                iVar14 = iVar14 + 1;
              } while (iVar10 != 0);
              FUN_ram_000ee260(s_Dump_semaphore_registers__ram_001c6f38);
              iVar14 = 6;
              puVar16 = (undefined4 *)&DAT_ram_e0000094;
              do {
                FUN_ram_000ee260(s_reg_0x_08x_0x_08x_ram_001c6f54,puVar16,*puVar16);
                iVar14 = iVar14 + -1;
                puVar16 = puVar16 + 1;
              } while (iVar14 != 0);
              bVar2 = true;
            }
          }
          bVar3 = true;
        }
        if (param_1 == 1) {
          puVar15 = (uint *)&DAT_ram_e000009c;
          puVar17 = (uint *)&DAT_ram_e0000094;
        }
        else if (param_1 == 2) {
          puVar15 = (uint *)&DAT_ram_e00000a4;
          puVar17 = (uint *)&DAT_ram_e0000098;
        }
        else if (param_1 == 4) {
          puVar15 = (uint *)&DAT_ram_e00000a8;
          puVar17 = (uint *)&DAT_ram_e00000a0;
        }
        else {
          puVar17 = (uint *)0x0;
          puVar15 = (uint *)0x0;
        }
        local_48 = STATUS32;
        if ((local_48 & 6) != 0) {
          STATUS32 = local_48 & 0xfffffff9;
        }
        if (puVar15 == (uint *)0x0) {
LAB_ram_00151738:
          if (puVar17 == (uint *)0x0) goto LAB_ram_00151740;
          *puVar17 = *puVar17 | 0x80000000;
          sync();
          if ((*puVar17 & 0x80000000) != 0) goto LAB_ram_00151740;
          if (puVar15 != (uint *)0x0) {
            *puVar15 = *puVar15 & 0x7fffffff;
            sync();
          }
        }
        else {
          *puVar15 = *puVar15 | 0x80000000;
          sync();
          if ((*puVar15 & 0x80000000) != 0) goto LAB_ram_00151738;
        }
        STATUS32 = local_48;
      } while( true );
    }
  }
  if (_DAT_ram_e00000bc < 0x80000000) goto LAB_ram_0015175c;
LAB_ram_00151774:
  if (0x8007ffff < _DAT_ram_e00000bc) goto LAB_ram_0015175c;
  uVar8 = _DAT_ram_e00000bc + 0xe0000000;
LAB_ram_00151790:
  iVar14 = *(int *)(uVar8 + 0xac);
  uVar8 = STATUS32;
  if ((uVar8 & 6) != 0) {
    STATUS32 = uVar8 & 0xfffffff9;
  }
  iVar10 = *(int *)(iVar14 + 0x14) * 0x20 + 0x180 + iVar14;
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar14 + 4);
  uVar12 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar10 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar10 + 0x38) = uVar12;
  *(undefined4 *)(iVar10 + 0x3c) = 1;
  *(char **)(iVar10 + 0x40) = s______common_ruby_pm_mproc_h_ram_001c6f88;
  *(undefined4 *)(iVar10 + 0x48) = 0x43;
  *(undefined4 *)(iVar10 + 0x44) = param_2;
  *(undefined4 *)(iVar10 + 0x4c) = param_3;
  *(int *)(iVar14 + 4) = *(int *)(iVar14 + 4) + 1;
  *(uint *)(iVar14 + 0x14) = *(uint *)(iVar14 + 4) % 0xc;
  STATUS32 = uVar8;
  if (bVar3) {
    FUN_ram_000ee260(s_MuC___s_ram_001c6e40,s_qtn_mproc_sync__wait_succeeded_ram_001c6f68);
  }
  *(undefined4 *)(uVar6 + 0xd8) = 0;
  sync();
  if (param_1 == 1) {
    puVar15 = (uint *)&DAT_ram_e0000094;
LAB_ram_00151888:
    *puVar15 = *puVar15 & 0x7fffffff;
    sync();
  }
  else {
    if (param_1 == 2) {
      puVar15 = (uint *)&DAT_ram_e0000098;
      goto LAB_ram_00151888;
    }
    if (param_1 == 4) {
      puVar15 = (uint *)&DAT_ram_e00000a0;
      goto LAB_ram_00151888;
    }
  }
  if (param_1 == 1) {
    puVar15 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar15 = (uint *)&DAT_ram_e00000a4;
  }
  else {
    if (param_1 != 4) goto LAB_ram_001518e4;
    puVar15 = (uint *)&DAT_ram_e00000a8;
  }
  *puVar15 = *puVar15 & 0x7fffffff;
  sync();
LAB_ram_001518e4:
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar6 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar6 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = _DAT_ram_e00000bc + 0xe0000000;
  }
  iVar14 = *(int *)(uVar6 + 0xac);
  uVar6 = STATUS32;
  if ((uVar6 & 6) != 0) {
    STATUS32 = uVar6 & 0xfffffff9;
  }
  iVar10 = *(int *)(iVar14 + 0x14) * 0x20 + 0x180 + iVar14;
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar14 + 4);
  uVar12 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar10 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar10 + 0x38) = uVar12;
  *(undefined4 *)(iVar10 + 0x3c) = 2;
  *(char **)(iVar10 + 0x40) = s______common_ruby_pm_mproc_h_ram_001c6f88;
  *(undefined4 *)(iVar10 + 0x48) = 0x45;
  *(undefined4 *)(iVar10 + 0x44) = param_2;
  *(undefined4 *)(iVar10 + 0x4c) = param_3;
  *(int *)(iVar14 + 4) = *(int *)(iVar14 + 4) + 1;
  *(uint *)(iVar14 + 0x14) = *(uint *)(iVar14 + 4) % 0xc;
  STATUS32 = uVar6;
  STATUS32 = local_48;
  return;
LAB_ram_00151740:
  if (0x7fffffff < _DAT_ram_e00000bc) goto LAB_ram_00151774;
LAB_ram_0015175c:
  if (_DAT_ram_e00000bc < 0x8000000) {
    uVar8 = _DAT_ram_e00000bc + 0x40000000;
  }
  else {
    uVar8 = _DAT_ram_e00000bc;
    if (_DAT_ram_e00000bc < 0xc0000000) {
      uVar8 = 0;
    }
  }
  goto LAB_ram_00151790;
}


