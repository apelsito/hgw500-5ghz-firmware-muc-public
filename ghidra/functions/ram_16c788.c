/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016c788 */

undefined4 FUN_ram_0016c788(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_2 & 3;
  if ((uVar1 == 0) && (0xb < (int)param_4)) {
    param_4 = param_4 - 4 & 0xff | 0x80;
  }
  iVar6 = 4;
  do {
    if (uVar1 == 2) {
      iVar4 = (int)(param_4 & 0x70) >> 4;
      if (iVar4 == 2) {
LAB_ram_0016c7e0:
        if (param_3 == 2) {
LAB_ram_0016c81a:
          *param_1 = param_4 | 0x6000000 | ((int)(param_2 & 0xc) >> 2) << 9 | 0x40000000;
          goto LAB_ram_0016c880;
        }
        if (1 < param_3) goto LAB_ram_0016c7f0;
LAB_ram_0016c890:
        *param_1 = param_4 | 0x6000000 | ((int)(param_2 & 0xc) >> 2) << 9;
LAB_ram_0016c8d0:
        uVar3 = param_5 & 0x3fff | 0x8000;
      }
      else {
        if ((param_4 & 0x40) != 0) {
          uVar3 = (param_4 & 0x3f) + 0x21;
          if ((uVar3 < 0x27) || (0x34 < uVar3)) {
            if ((iVar4 == 1) || ((uVar3 = (param_4 & 0x3f) + 0x21, 0x20 < uVar3 && (uVar3 < 0x27))))
            goto LAB_ram_0016c816;
            goto LAB_ram_0016c85a;
          }
          goto LAB_ram_0016c7e0;
        }
        if (iVar4 == 1) {
LAB_ram_0016c816:
          if (param_3 != 0) {
            if (param_3 != 1) {
              pcVar2 = s_Invalid_bf_set__has_to_be_0_or_1_ram_001c9154;
              goto LAB_ram_0016ca58;
            }
            goto LAB_ram_0016c890;
          }
          goto LAB_ram_0016c81a;
        }
LAB_ram_0016c85a:
        uVar3 = param_4 | 0x6000000 | ((int)(param_2 & 0xc) >> 2) << 9;
        if (iVar4 != 0 || param_3 != 2) {
          *param_1 = uVar3;
          goto LAB_ram_0016c8d0;
        }
        *param_1 = uVar3 | 0x40000000;
LAB_ram_0016c880:
        uVar3 = param_5 & 0x3fff | 0x408000;
      }
      param_1[1] = uVar3;
LAB_ram_0016c8c4:
      param_1 = param_1 + 2;
    }
    else if (uVar1 == 1) {
      if ((((int)param_4 < 0x10) || (0x17 < (int)param_4)) &&
         (((int)param_4 < 0x27 || (0x34 < (int)param_4)))) {
        if (((7 < (int)param_4) && ((int)param_4 < 0x10)) ||
           ((0x20 < (int)param_4 && ((int)param_4 < 0x27)))) {
          if (param_3 != 0) {
            if (param_3 == 1) goto LAB_ram_0016c924;
LAB_ram_0016c9ec:
            pcVar2 = s_Invalid_bf_set__has_to_be_0_or_1_ram_001c9178;
            goto LAB_ram_0016ca58;
          }
          goto LAB_ram_0016c950;
        }
        uVar3 = param_5 & 0x3fff;
        uVar5 = param_4 | 0x6000100 | ((int)(param_2 & 0xc) >> 2) << 9;
        if (((int)param_4 < 8) && (param_3 == 2)) {
          *param_1 = uVar5 | 0x40000000;
          uVar3 = uVar3 | 0x400000;
        }
        else {
          *param_1 = uVar5;
        }
        param_1[1] = uVar3;
        goto LAB_ram_0016c8c4;
      }
      if (param_3 == 2) {
LAB_ram_0016c950:
        *param_1 = ((int)(param_2 & 0xc) >> 2) << 9 | param_4 | 0x6000100 | 0x40000000;
        param_1[1] = param_5 & 0x3fff | 0x400000;
        param_1 = param_1 + 2;
        goto LAB_ram_0016ca60;
      }
      if ((param_3 == 1) || (param_3 == 0)) {
LAB_ram_0016c924:
        *param_1 = ((int)(param_2 & 0xc) >> 2) << 9 | param_4 | 0x6000100;
        param_1[1] = param_5 & 0x3fff;
        param_1 = param_1 + 2;
        goto LAB_ram_0016ca60;
      }
LAB_ram_0016c7f0:
      pcVar2 = s_Invalid_bf_set__valid_values_0_1_ram_001c9128;
LAB_ram_0016ca58:
      FUN_ram_000ee260(pcVar2);
    }
    else {
      if (uVar1 != 0) {
        pcVar2 = s_bbrf_stubmac_init_fd5__bw_and_mc_ram_001c919c;
        goto LAB_ram_0016ca58;
      }
      if (((7 < (int)param_4) && ((int)param_4 < 0x10)) ||
         ((0x20 < (int)param_4 && ((int)param_4 < 0x27)))) {
        if (param_3 == 0) {
          *param_1 = param_4 | 0x6000000 | ((int)(param_2 & 0xc) >> 2) << 9 | 0x40000000;
          param_1[1] = param_5 & 0x3fff | 0x400000;
          goto LAB_ram_0016c8c4;
        }
        if (param_3 != 1) goto LAB_ram_0016c9ec;
      }
      *param_1 = param_4 | 0x6000000 | ((int)(param_2 & 0xc) >> 2) << 9;
      param_1[1] = param_5 & 0x3fff;
      param_1 = param_1 + 2;
    }
LAB_ram_0016ca60:
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return 1;
    }
  } while( true );
}


