/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146f30 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_00146f30(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar9 = 1;
  if (DAT_ram_0020fd98 != 0) {
    cVar1 = DAT_ram_0020fd95 + -1;
    if ('\0' < DAT_ram_0020fd95) {
      if (DAT_ram_0020fdb4 == 0) {
        DAT_ram_0020fd95 = cVar1;
        return 0;
      }
      DAT_ram_0020fd95 = cVar1;
      FUN_ram_000ee260(s_Dynamic_AC__AC_off__wait__d_spre_ram_001c5af0,(int)cVar1,
                       *(undefined4 *)(param_1 + 0x4004),*(undefined4 *)(param_1 + 0x4008));
      return 0;
    }
    DAT_ram_0020fd98 = 0;
    DAT_ram_0020fd95 = cVar1;
    FUN_ram_00146bc0();
    FUN_ram_0018aa8c(1);
    if (DAT_ram_0020fdb4 == 0) {
      return 0;
    }
    FUN_ram_000ee260(s_Dynamic_AC__turn_ON_auto_correla_ram_001c5ac8);
    return 0;
  }
  iVar11 = *(int *)(param_1 + 0x4004);
  iVar10 = *(int *)(param_1 + 0x4008);
  iVar2 = FUN_ram_0018aae0();
  iVar3 = DAT_ram_0020fd88;
  if (DAT_ram_0020fd84 == '\x04') {
    iVar13 = DAT_ram_0020fd88 >> 2;
    if (DAT_ram_0020fdb4 == 0) {
      if (DAT_ram_0020fd90 >> 2 != 0xff) goto LAB_ram_00147068;
LAB_ram_00147084:
      if (iVar13 < iVar10) {
        iVar7 = iVar10 - iVar13;
      }
      else {
        iVar7 = iVar13 - iVar10;
      }
LAB_ram_001470b0:
      if ((uVar9 != 0) && (iVar3 >> 3 < iVar7)) goto joined_r0x0014709c;
    }
    else {
      FUN_ram_000ee260(s_Dynamic_AC__lpream_hist___d__d___ram_001c5b20,DAT_ram_0020fd6c,
                       DAT_ram_0020fd70,DAT_ram_0020fd74,DAT_ram_0020fd78,iVar13,iVar11,iVar10);
      if (DAT_ram_0020fd90 >> 2 == 0xff) goto LAB_ram_00147084;
LAB_ram_00147068:
      uVar9 = 0;
      if (iVar13 < iVar10) {
        iVar7 = iVar10 - iVar13;
        iVar13 = iVar7;
      }
      else {
        iVar7 = iVar13 - iVar10;
        iVar13 = iVar10 - iVar13;
      }
      if (iVar13 < 0x3e9) goto LAB_ram_001470b0;
joined_r0x0014709c:
      if (9999 < iVar11) {
        if (DAT_ram_0020fdb4 != 0) {
          FUN_ram_000ee260(s_Dynamic_AC__set_is_there_tone_to_ram_001c5b70,uVar9);
        }
        uVar9 = 0;
        goto LAB_ram_001470dc;
      }
    }
    uVar9 = 1;
  }
LAB_ram_001470dc:
  if (DAT_ram_0020fdb4 == 0) {
    if (uVar9 != 0) goto LAB_ram_00147118;
    uVar8 = 0x20;
    uVar12 = 0x20;
LAB_ram_001472d4:
    DAT_ram_0020fd94 = '\0';
  }
  else {
    FUN_ram_000ee260(s_Dynamic_AC__is_there_tone__d_sp__ram_001c5bb8,uVar9,iVar11,iVar10,iVar2);
    if (uVar9 == 0) {
      uVar8 = 0x20;
      uVar12 = 0x20;
      if (DAT_ram_0020fdb4 == 0) goto LAB_ram_001472d4;
LAB_ram_0014721c:
      FUN_ram_000ee260(s_Dynamic_AC__last_th__u_next_th___ram_001c5c0c,DAT_ram_0018c228,uVar8,iVar10
                      );
    }
    else {
LAB_ram_00147118:
      uVar8 = (uint)DAT_ram_0020fda0;
      iVar11 = (&DAT_ram_0020fd6c)[uVar8];
      (&DAT_ram_0020fd6c)[uVar8] = iVar10;
      iVar3 = DAT_ram_0020fdb4;
      DAT_ram_0020fd88 = (iVar10 - iVar11) + DAT_ram_0020fd88;
      iVar11 = (int)&DAT_ram_0020fd6c + uVar8;
      if (iVar10 < 0x65) {
        DAT_ram_0020fd84 = DAT_ram_0020fd84 - (&DAT_ram_0020fd80)[uVar8];
        iVar13 = 100 - iVar10 >> 4;
        (&DAT_ram_0020fd80)[uVar8] = 0;
        if (iVar13 < 0x31) {
          uVar8 = iVar2 - iVar13;
        }
        else {
          uVar8 = iVar2 - 0x30;
        }
        if ((int)uVar8 < 0x20) {
          uVar8 = 0x20;
        }
      }
      else {
        DAT_ram_0020fd84 = ('\x01' - (&DAT_ram_0020fd80)[uVar8]) + DAT_ram_0020fd84;
        (&DAT_ram_0020fd80)[uVar8] = 1;
        iVar11 = iVar10 + -100 >> 4;
        iVar3 = 0x30;
        if (iVar11 < 0x31) {
          iVar3 = iVar11;
        }
        uVar12 = FUN_ram_00146ea4(param_1);
        if (DAT_ram_0020fdb4 != 0) {
          FUN_ram_000ee260(s_Dynamic_AC__one_bit_th_cap__d_ram_001c5bec,uVar12);
        }
        uVar8 = iVar2 + iVar3;
        if ((int)uVar12 < iVar2 + iVar3) {
          uVar8 = uVar12;
        }
        iVar11 = (int)&DAT_ram_0020fd6c + (uint)DAT_ram_0020fda0;
        iVar3 = DAT_ram_0020fdb4;
      }
      uVar12 = uVar8 & 0xff;
      DAT_ram_0020fd90 = DAT_ram_0020fd90 + (uVar8 - *(byte *)(iVar11 + 0x10));
      *(char *)(iVar11 + 0x10) = (char)uVar8;
      if (iVar3 != 0) goto LAB_ram_0014721c;
    }
    if (uVar8 != 0xff) goto LAB_ram_001472d4;
    DAT_ram_0020fd94 = DAT_ram_0020fd94 + '\x01';
    if (('\x05' < DAT_ram_0020fd94) && (20000 < DAT_ram_0020fd88)) {
      if (DAT_ram_0020fdb4 != 0) {
        FUN_ram_000ee260(s_Dynamic_AC__turn_OFF_auto_correl_ram_001c5c3c);
      }
      DAT_ram_0020fd98 = 1;
      FUN_ram_0018aa8c(0);
      iVar3 = FUN_ram_00164160();
      if (iVar3 == 0) {
        uVar4 = FUN_ram_0018ae54();
        uVar5 = FUN_ram_0018ae6c();
        uVar5 = (uVar5 >> 2) + (uVar5 >> 1) + (uVar5 >> 5);
        if ((uVar5 < uVar4) && (FUN_ram_0018ae60(uVar5), DAT_ram_0020fdb4 != 0)) {
          FUN_ram_000ee260(s_Dynamic_AC__th__d_lpream__d__tur_ram_001c5c7c,0xff,iVar10,uVar5);
        }
      }
      DAT_ram_0020fd95 = '\x1e';
    }
  }
  FUN_ram_0018aaf4(uVar12);
  if (uVar8 == 0x20) {
    iVar3 = FUN_ram_00164160();
    if (iVar3 == 0) {
      FUN_ram_0018ae6c();
      FUN_ram_0018ae60();
      if (DAT_ram_0020fdb4 != 0) {
        uVar6 = FUN_ram_0018ae6c();
        FUN_ram_000ee260(s_Dynamic_AC__th__d_lpream__d__set_ram_001c5cd0,0x20,iVar10,0x20,uVar6);
      }
    }
    if (DAT_ram_0018c228 == 0x20) goto LAB_ram_001473d0;
    if (DAT_ram_0018c22c < 0x20) goto LAB_ram_001473a4;
  }
  else {
    if (uVar8 == DAT_ram_0018c228) goto LAB_ram_001473d0;
    if (DAT_ram_0018c22c < uVar8) {
LAB_ram_001473a4:
      DAT_ram_0018c22c = uVar8;
      DAT_ram_80037240 = uVar8;
    }
  }
  if (uVar8 < DAT_ram_0018c230) {
    DAT_ram_0018c230 = uVar8;
    DAT_ram_80037244 = uVar8;
  }
  DAT_ram_8003724c = DAT_ram_8003724c + 1;
LAB_ram_001473d0:
  iVar3 = 1 - uVar9;
  DAT_ram_0020fda0 = DAT_ram_0020fda0 + 1;
  if (1 < uVar9) {
    iVar3 = 0;
  }
  if (DAT_ram_0020fda0 == '\x04') {
    DAT_ram_0020fda0 = '\0';
  }
  DAT_ram_0018c228 = uVar8;
  DAT_ram_80037248 = uVar8;
  return iVar3;
}


