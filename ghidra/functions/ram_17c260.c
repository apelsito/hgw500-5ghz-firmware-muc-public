/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017c260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0017c260(void)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  
  if (*(ushort *)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2) < 0x600) {
    if (-1 < DAT_ram_0018c2c8) {
      FUN_ram_000f4d18(DAT_ram_0018c2c8,4,(uint)DAT_ram_0018c362 << 7,0x80,&DAT_ram_00211970);
      if (DAT_ram_00211970 == 0) {
        return;
      }
      if (DAT_ram_00211974 == 0) {
        return;
      }
      _DAT_ram_e60a1000 = DAT_ram_00211980;
      _DAT_ram_e60a1004 = DAT_ram_00211970;
      _DAT_ram_e60a1038 = DAT_ram_00211984;
      _DAT_ram_e60a103c = DAT_ram_00211974;
      _DAT_ram_e60a1070 = DAT_ram_00211988;
      _DAT_ram_e60a1074 = DAT_ram_00211978;
      _DAT_ram_e60a10a8 = DAT_ram_0021198c;
      _DAT_ram_e60a10ac = DAT_ram_0021197c;
      _DAT_ram_e60a2000 = DAT_ram_002119a0;
      _DAT_ram_e60a2004 = DAT_ram_00211990;
      _DAT_ram_e60a2038 = DAT_ram_002119a4;
      _DAT_ram_e60a203c = DAT_ram_00211994;
      _DAT_ram_e60a2070 = DAT_ram_002119a8;
      _DAT_ram_e60a2074 = DAT_ram_00211998;
      _DAT_ram_e60a20a8 = DAT_ram_002119ac;
      _DAT_ram_e60a20ac = DAT_ram_0021199c;
      _DAT_ram_e60a3000 = DAT_ram_002119c0;
      _DAT_ram_e60a3004 = DAT_ram_002119b0;
      _DAT_ram_e60a3038 = DAT_ram_002119c4;
      _DAT_ram_e60a303c = DAT_ram_002119b4;
      _DAT_ram_e60a3070 = DAT_ram_002119c8;
      _DAT_ram_e60a3074 = DAT_ram_002119b8;
      _DAT_ram_e60a30a8 = DAT_ram_002119cc;
      _DAT_ram_e60a30ac = DAT_ram_002119bc;
      _DAT_ram_e60a4000 = DAT_ram_002119e0;
      _DAT_ram_e60a4004 = DAT_ram_002119d0;
      _DAT_ram_e60a4038 = DAT_ram_002119e4;
      _DAT_ram_e60a403c = DAT_ram_002119d4;
      _DAT_ram_e60a4070 = DAT_ram_002119e8;
      _DAT_ram_e60a4074 = DAT_ram_002119d8;
      _DAT_ram_e60a40a8 = DAT_ram_002119ec;
      _DAT_ram_e60a40ac = DAT_ram_002119dc;
      return;
    }
    pcVar2 = s_WRONG_RXIQ_Version_ram_001ca338;
    goto LAB_ram_0017c6b4;
  }
  DAT_ram_0018c3ec = DAT_ram_0018c3ec + 1;
  if (DAT_ram_0018c3ec == 1) {
    FUN_ram_000ee260(s_calibration_ver_0x_x_ram_001ca2b8);
    if (DAT_ram_0018c2c8 < 0) {
      if ((-1 < DAT_ram_0018c2d4) && (DAT_ram_0018c2f8 == &UNK_auxregs_0709)) goto LAB_ram_0017c3d0;
    }
    else {
LAB_ram_0017c2f8:
      if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
        puVar1 = *(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2);
        uVar3 = (uint)DAT_ram_0018c362;
        if (&UNK_auxregs_0706 < puVar1) {
          if (puVar1 == &UNK_auxregs_0708 || puVar1 == &UNK_auxregs_0707) {
            FUN_ram_000f4d18(DAT_ram_0018c2c8,4,uVar3 * 0x300,0x300,&DAT_ram_00211570);
          }
          else {
            FUN_ram_000f4d18(DAT_ram_0018c2c8,4,uVar3 * 0x700,0x700,&DAT_ram_00210e70);
          }
        }
        else {
          FUN_ram_000f4d18(DAT_ram_0018c2c8,4,uVar3 << 8,0x100,&DAT_ram_00211870);
        }
        goto joined_r0x0017c3b0;
      }
      if (-1 < DAT_ram_0018c2d4) goto LAB_ram_0017c3d0;
    }
LAB_ram_0017c3ec:
    FUN_ram_000ee260(s_invalid_calibration_version_or_f_ram_001ca2d0);
  }
  else {
    if (-1 < DAT_ram_0018c2c8) goto LAB_ram_0017c2f8;
    if ((DAT_ram_0018c2d4 < 0) || (DAT_ram_0018c2f8 != &UNK_auxregs_0709)) goto LAB_ram_0017c3ec;
LAB_ram_0017c3d0:
    FUN_ram_0017bf30(0);
    FUN_ram_0017bf30(1);
  }
joined_r0x0017c3b0:
  if ((-1 < DAT_ram_0018c2d4) || (-1 < DAT_ram_0018c2c8)) {
    puVar1 = *(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2);
    if (puVar1 <= &UNK_auxregs_0706) {
      FUN_ram_0017c100(0);
      FUN_ram_0017c100(1);
      FUN_ram_0017c100(2);
      FUN_ram_0017c100(3);
      return;
    }
    if (puVar1 == &UNK_auxregs_0708 || puVar1 == &UNK_auxregs_0707) {
      FUN_ram_0017c198(0);
      FUN_ram_0017c198(1);
      FUN_ram_0017c198(2);
      FUN_ram_0017c198(3);
      return;
    }
    FUN_ram_0017c1f8(0);
    FUN_ram_0017c1f8(1);
    FUN_ram_0017c1f8(2);
    FUN_ram_0017c1f8(3);
    return;
  }
  pcVar2 = s_dc_iq_cal_or_rx_iq_cal_doesn_t_e_ram_001ca2fc;
LAB_ram_0017c6b4:
  FUN_ram_000ee260(pcVar2);
  return;
}


