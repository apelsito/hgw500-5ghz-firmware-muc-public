/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015b674 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0015b674(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar10 = _DAT_ram_e6000000;
  iVar2 = FUN_ram_000e5c34();
  *(undefined4 *)(iVar2 + 0x168) = 0;
  if (*(char *)(param_1 + 0x1e) != '\x06') {
    DAT_ram_8002c91c = 0;
    return;
  }
  if ((DAT_ram_8002c91c & 1) == 0) {
    return;
  }
  if (DAT_ram_8002c936 != '\0') {
    return;
  }
  if ((uVar10 & 0x80) == 0) {
    if ((DAT_ram_8002c91c & 2) != 0) {
      FUN_ram_000ee260(s_AutoCCA__AutoCCA__Not_support_11_ram_001c7ae4);
    }
    if (DAT_ram_8002c9d4 == 1) {
      return;
    }
    goto LAB_ram_0015b8ac;
  }
  if ((DAT_ram_8002c91c & 2) != 0) {
    if ((DAT_ram_8002c91c & 4) == 0) {
      pcVar3 = s_Detection_ram_001c7b0c;
    }
    else {
      pcVar3 = s_Sample_ram_001c7adc;
    }
    FUN_ram_000ee260(s_AutoCCA__AutoCCA___s__spre_limit_ram_001c7a90,pcVar3,DAT_ram_8002c920,
                     DAT_ram_8002c924,DAT_ram_8002c924 << 2,DAT_ram_8002c928);
    if (((DAT_ram_8002c91c & 2) != 0) &&
       (FUN_ram_000ee260(s_AutoCCA__CCA_0x_08x___0x_08x__0x_ram_001c7b18,&DAT_ram_e6090268,
                         _DAT_ram_e6090268,&DAT_ram_e609043c,_DAT_ram_e609043c,&DAT_ram_e6090578,
                         _DAT_ram_e6090578,_DAT_ram_e6090570), (DAT_ram_8002c91c & 2) != 0)) {
      FUN_ram_000ee260(s_AutoCCA__State__s___spre__d___lp_ram_001c7b6c,
                       (&PTR_DAT_ram_001aa5e4_ram_00192dfc)[DAT_ram_8002c9d4],param_2,param_3,
                       _DAT_ram_e6090248,_DAT_ram_e6090268,_DAT_ram_e6090274,DAT_ram_80037204);
    }
  }
  FUN_ram_0015b358(param_1);
  uVar7 = DAT_ram_8002ca5c;
  iVar2 = DAT_ram_8002c9d4;
  uVar10 = DAT_ram_8002c91c;
  DAT_ram_800372b0 = DAT_ram_8002c9d4;
  DAT_ram_800372bc = DAT_ram_8002ca5c;
  iVar8 = DAT_ram_8002c9ec;
  if (3 < DAT_ram_8002c9ec) {
    iVar8 = 0;
  }
  uVar1 = DAT_ram_8002c91c & 4;
  DAT_ram_8002c9ec = iVar8 + 1;
  DAT_ram_800372b8 = param_2;
  (&DAT_ram_8002c9f4)[iVar8] = param_2;
  (&DAT_ram_8002ca04)[iVar8] = uVar7;
  DAT_ram_8002c9f0 = DAT_ram_8002c9f0 + 1;
  if (uVar1 != 0) {
    return;
  }
  if (DAT_ram_8002ca58 + DAT_ram_8002ca54 < 0x32) {
    if ((uVar10 & 2) != 0) {
      FUN_ram_000ee260(s_AutoCCA__No_traffic__ignore_it__T_ram_001c7bc4);
      iVar2 = DAT_ram_8002c9d4;
    }
  }
  else {
    if (DAT_ram_8002ca60 <= DAT_ram_8002c924) {
      if ((DAT_ram_8002c920 * 3 <= param_2) &&
         (param_2 = (DAT_ram_8002c920 >> 1) + DAT_ram_8002c920 * 2, (uVar10 & 2) != 0)) {
        FUN_ram_000ee260(s_AutoCCA__Adjust_spre_to__d_ram_001c7c30,param_2);
        iVar2 = DAT_ram_8002c9d4;
      }
      if (iVar2 == 0) {
        FUN_ram_0015b2a4(1,s_STM_Init_ram_001c7c68);
        FUN_ram_0015b10c(1);
        DAT_ram_800372b4 = DAT_ram_8002c9e4;
        return;
      }
      if (iVar2 == 1) {
        if ((DAT_ram_8002c9d8 < 1) ||
           (DAT_ram_8002c9d8 = DAT_ram_8002c9d8 + -1, DAT_ram_8002c9d8 < 0xb)) {
          if ((param_2 < DAT_ram_8002c920) || (DAT_ram_8002ca5c < DAT_ram_8002c924))
          goto LAB_ram_0015ba08;
        }
        else {
          iVar2 = FUN_ram_000e5c34();
          *(undefined4 *)(iVar2 + 0x168) = 1;
          if ((param_2 < DAT_ram_8002c920) || (DAT_ram_8002ca5c < DAT_ram_8002c924))
          goto LAB_ram_0015ba08;
        }
        if ((DAT_ram_8002c91c & 2) != 0) {
          FUN_ram_000ee260(s_AutoCCA__Suspicious__delay_SCS_a_ram_001c7c74);
        }
        if (DAT_ram_8002c9d8 == 0) {
          DAT_ram_8002c9d8 = 0xe;
          iVar2 = FUN_ram_000e5c34();
          *(undefined4 *)(iVar2 + 0x168) = 1;
        }
LAB_ram_0015ba08:
        if (DAT_ram_8002c9f0 < 4) {
          DAT_ram_800372b4 = DAT_ram_8002c9e4;
          return;
        }
        if ((uint)(DAT_ram_8002c9f4 + DAT_ram_8002c9f8 + DAT_ram_8002c9fc + DAT_ram_8002ca00) >> 2 <
            DAT_ram_8002c920) {
          DAT_ram_800372b4 = DAT_ram_8002c9e4;
          return;
        }
        if ((uint)(DAT_ram_8002ca04 + DAT_ram_8002ca08 + DAT_ram_8002ca0c + DAT_ram_8002ca10) >> 2 <
            DAT_ram_8002c924) {
          DAT_ram_800372b4 = DAT_ram_8002c9e4;
          return;
        }
        FUN_ram_0015b10c(2);
        FUN_ram_0015b5e0(param_1,3);
        if ((DAT_ram_8002c91c & 2) == 0) {
          DAT_ram_800372b4 = DAT_ram_8002c9e4;
          return;
        }
        FUN_ram_000ee260(s_AutoCCA__Detect_ACI__Adjust_cca__ram_001c7cb4);
        DAT_ram_800372b4 = DAT_ram_8002c9e4;
        return;
      }
      if (iVar2 != 2) {
        if ((DAT_ram_8002c91c & 2) != 0) {
          FUN_ram_000ee260(s_AutoCCA__Invalid_state__d__ram_001c7c4c,iVar2);
        }
        DAT_ram_8002c9d4 = 0;
        DAT_ram_800372b4 = DAT_ram_8002c9e4;
        return;
      }
      uVar10 = DAT_ram_8002c920;
      if (DAT_ram_80038ee0 - (DAT_ram_8002ca70 + 15000) < 0) {
        if (DAT_ram_8002ca6c == 0) {
          if ((DAT_ram_8002c91c & 2) != 0) {
            FUN_ram_000ee260(s_AutoCCA__Start_to_compensate_the_ram_001c7cfc);
          }
          DAT_ram_8002ca6c = 300;
          uVar10 = DAT_ram_8002c920;
        }
        DAT_ram_8002c920 = uVar10;
        if (699 < DAT_ram_8002ca54) goto LAB_ram_0015bb3c;
LAB_ram_0015bc20:
        DAT_ram_8002ca6c = DAT_ram_8002ca6c + -1;
      }
      else {
        if (699 < DAT_ram_8002ca54) {
LAB_ram_0015bb3c:
          uVar1 = DAT_ram_8002ca54;
          uVar10 = DAT_ram_8002c920;
          uVar7 = DAT_ram_8002c920 * 3;
          uVar11 = DAT_ram_8002c91c & 2;
          if ((DAT_ram_8002ca54 < 0x3ca) && (DAT_ram_8002ca6c != 0)) {
            uVar5 = param_2 * 1000;
            uVar4 = 1000 - DAT_ram_8002ca54;
            if (((int)uVar4 < 1) || (0x3e < uVar5)) {
              if (uVar4 == 0) {
                param_2 = FUN_ram_000f5e64(uVar5,0);
              }
              else {
                uVar9 = uVar5;
                if ((int)uVar5 < 0) {
                  uVar9 = ~uVar5;
                }
                iVar2 = LZCOUNT(uVar9) + -1;
                if ((int)uVar5 < 0) {
                  iVar2 = -1;
                }
                uVar9 = uVar4;
                if ((int)uVar4 < 0) {
                  uVar9 = ~uVar4;
                }
                iVar8 = LZCOUNT(uVar9) + -1;
                if ((int)uVar4 < 0) {
                  iVar8 = -1;
                }
                uVar9 = iVar8 - iVar2;
                bVar13 = (int)uVar9 < 0;
                if (bVar13) {
                  uVar9 = 0;
                }
                uVar12 = uVar9 + 1;
                if (!bVar13) {
                  uVar4 = uVar4 << (uVar9 & 0x1f);
                }
                uVar9 = 0;
                LP_START = 0x15bbc0;
                LP_END = 0x15bbd0;
                do {
                  uVar6 = uVar5 - uVar4;
                  if (uVar5 < uVar4) {
                    uVar6 = uVar6 + uVar4;
                  }
                  else {
                    uVar9 = uVar9 | 1 << (uVar12 & 0x1f);
                  }
                  uVar4 = uVar4 >> 1;
                  uVar12 = uVar12 - 1;
                  uVar5 = uVar6;
                } while (uVar12 != 0);
                param_2 = uVar9 >> 1 | uVar9 << 0x1f;
              }
            }
            else {
              param_2 = 0;
              do {
                uVar9 = uVar5 - uVar4;
                bVar13 = uVar4 <= uVar5;
                if (bVar13) {
                  param_2 = param_2 + 1;
                }
                uVar5 = uVar9;
              } while (bVar13 && uVar9 != 0);
            }
          }
          else {
            param_2 = param_2 * 2;
          }
          if (uVar7 <= param_2) {
            param_2 = uVar7;
          }
          if (uVar11 != 0) {
            FUN_ram_000ee260(s_AutoCCA__Adjust_spre_to__d__cca__ram_001c7d24,param_2,uVar1,
                             DAT_ram_8002ca58);
            uVar10 = DAT_ram_8002c920;
          }
        }
        if (DAT_ram_8002ca6c != 0) goto LAB_ram_0015bc20;
      }
      iVar2 = DAT_ram_8002c9e4;
      if (DAT_ram_8002ca14 != 0) {
        if (param_2 < DAT_ram_8002ca14 >> 2) {
          param_2 = DAT_ram_8002ca14 * 2 + param_2 * 2 >> 2;
        }
        else {
          param_2 = param_2 + DAT_ram_8002ca14 * 3 >> 2;
        }
      }
      uVar7 = DAT_ram_8002ca5c;
      if (DAT_ram_8002ca64 != 0) {
        if (DAT_ram_8002ca5c < DAT_ram_8002ca64 >> 2) {
          uVar7 = DAT_ram_8002ca64 * 2 + DAT_ram_8002ca5c * 2 >> 2;
        }
        else {
          uVar7 = DAT_ram_8002ca5c + DAT_ram_8002ca64 * 3 >> 2;
        }
      }
      DAT_ram_8002ca14 = param_2;
      DAT_ram_8002ca64 = uVar7;
      if (param_2 < uVar10) {
        DAT_ram_8002ca70 = DAT_ram_80038ee0;
        DAT_ram_8002ca74 = DAT_ram_80038ee4;
        FUN_ram_0015b10c(1);
        if ((DAT_ram_8002c91c & 2) == 0) {
          DAT_ram_800372b4 = DAT_ram_8002c9e4;
          return;
        }
        FUN_ram_000ee260(s_AutoCCA__cca_th__restore_to_0x_0_ram_001c7d5c,_DAT_ram_e6090268);
        DAT_ram_800372b4 = DAT_ram_8002c9e4;
        return;
      }
      if (uVar7 < DAT_ram_8002c924) {
        if (uVar7 < 100) goto LAB_ram_0015bd54;
        FUN_ram_0015b5e0(param_1,3);
        if ((DAT_ram_8002c91c & 2) != 0) {
          FUN_ram_000ee260(s_AutoCCA__Try_next_level__cca_int_ram_001c7dbc,DAT_ram_8002ca64,
                           DAT_ram_8002c924);
        }
      }
      else {
        FUN_ram_0015b5e0(param_1,3);
        if ((DAT_ram_8002c928 < DAT_ram_8002c9e8) && ((DAT_ram_8002c91c & 2) != 0)) {
          FUN_ram_000ee260(s_AutoCCA__Exceeds_max_cca_thresho_ram_001c7d80);
        }
      }
      if (iVar2 != DAT_ram_8002c9e4) {
        DAT_ram_8002c9d8 = 0;
        DAT_ram_800372b4 = DAT_ram_8002c9e4;
        return;
      }
LAB_ram_0015bd54:
      if (1 < DAT_ram_8002c9d8) {
        DAT_ram_8002c9d8 = DAT_ram_8002c9d8 + 1;
        DAT_ram_800372b4 = DAT_ram_8002c9e4;
        return;
      }
      DAT_ram_8002c9d8 = DAT_ram_8002c9d8 + 1;
      iVar2 = FUN_ram_000e5c34();
      *(undefined4 *)(iVar2 + 0x168) = 1;
      DAT_ram_800372b4 = DAT_ram_8002c9e4;
      return;
    }
    if ((uVar10 & 2) != 0) {
      FUN_ram_000ee260(s_AutoCCA__CCA40_intf__d__is_high__ram_001c7bf8);
      iVar2 = DAT_ram_8002c9d4;
    }
  }
  if (iVar2 != 2) {
    return;
  }
LAB_ram_0015b8ac:
  FUN_ram_0015b10c(1);
  return;
}


