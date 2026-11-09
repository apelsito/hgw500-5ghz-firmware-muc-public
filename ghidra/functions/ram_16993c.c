/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016993c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0016993c(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_58;
  code *pcStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  code *pcStack_44;
  code *local_40;
  undefined4 local_3c;
  
  iVar8 = DAT_ram_0018c2f0 * 0x1c;
  DAT_ram_0018c2f0 = 1;
  pcStack_54 = FUN_ram_000f3c18;
  pcStack_50 = FUN_ram_000f3ce8;
  pcStack_4c = FUN_ram_000f3cf0;
  pcStack_44 = FUN_ram_000f3cf8;
  local_40 = FUN_ram_0039fe00;
  iVar2 = FUN_ram_000f3c18(3,0);
  iVar3 = FUN_ram_000f3c18(4,0);
  iVar4 = FUN_ram_000f3c18(8,0);
  iVar5 = FUN_ram_000f3c18(0xe,0);
  FUN_ram_000f3cf8(iVar2);
  FUN_ram_000f3cf8(iVar3);
  FUN_ram_000f3cf8(iVar4);
  FUN_ram_000f3cf8(iVar5);
  if (iVar2 < 0) {
    FUN_ram_000eea80(&DAT_ram_00210e08,0,0x66);
    FUN_ram_00167a34(3,1);
    *(undefined4 *)(iVar8 + 0x21438c) = 0;
    iVar10 = 0;
    if (iVar3 < 0) goto LAB_ram_00169a7c;
LAB_ram_00169aac:
    FUN_ram_00167ac8(4,0);
    iVar11 = FUN_ram_00167b20(4);
    *(undefined4 *)(&DAT_ram_00214388 + iVar8) = 1;
    if (-1 < iVar4) goto LAB_ram_00169b00;
LAB_ram_00169acc:
    FUN_ram_000eea80(&DAT_ram_00211b20,0,0x66);
    FUN_ram_00167a34(8,2);
    *(undefined4 *)(&DAT_ram_00214390 + iVar8) = 0;
    if (DAT_ram_0018c2f8 < &UNK_auxregs_0709) {
      iVar9 = 0;
      goto LAB_ram_00169b28;
    }
    iVar9 = 0;
joined_r0x00169b38:
    if (iVar5 < 0) {
      FUN_ram_000eea80(&DAT_ram_00214768,0,0xa4);
      FUN_ram_00167a34(0xe,3);
      *(undefined4 *)(iVar8 + 0x214394) = 0;
      goto LAB_ram_00169b28;
    }
    FUN_ram_00167ac8(0xe,3);
    local_58 = FUN_ram_00167b20(0xe);
    *(undefined4 *)(iVar8 + 0x214394) = 1;
  }
  else {
    FUN_ram_00167ac8(3,1);
    iVar10 = FUN_ram_00167b20(3);
    *(undefined4 *)(iVar8 + 0x21438c) = 1;
    if (-1 < iVar3) goto LAB_ram_00169aac;
LAB_ram_00169a7c:
    FUN_ram_000eea80(&DAT_ram_00210c1c,0,0x1ec);
    FUN_ram_00167a34(4,0);
    *(undefined4 *)(&DAT_ram_00214388 + iVar8) = 0;
    iVar11 = 0;
    if (iVar4 < 0) goto LAB_ram_00169acc;
LAB_ram_00169b00:
    FUN_ram_00167ac8(8,2);
    iVar9 = FUN_ram_00167b20(8);
    *(undefined4 *)(&DAT_ram_00214390 + iVar8) = 1;
    if (&UNK_auxregs_0708 < DAT_ram_0018c2f8) goto joined_r0x00169b38;
LAB_ram_00169b28:
    local_58 = 0;
  }
  FUN_ram_00167c38();
  DAT_ram_0018c368 = 1;
  FUN_ram_000f4ba8(&pcStack_54);
  DAT_ram_0018c35c = 0xff;
  DAT_ram_002105f8 = 0x13;
  DAT_ram_00210474 = 1;
  DAT_ram_0018c2c8 = FUN_ram_000f4c5c(4,0);
  DAT_ram_0018c2cc = FUN_ram_000f4c5c(3,1);
  DAT_ram_0018c2d0 = FUN_ram_000f4c5c(8,2);
  if ((iVar5 < 0) && (DAT_ram_0018c2f8 != &UNK_auxregs_0709)) {
    DAT_ram_0018c2d4 = FUN_ram_000f4c5c(0xe,3);
  }
  *(undefined4 *)(&DAT_ram_00214380 + iVar8) = 0;
  *(undefined4 *)(&DAT_ram_00214384 + iVar8) = 0;
  (&DAT_ram_00214398)[iVar8] = 3;
  if (iVar3 < 0 || iVar11 < 10) {
    FUN_ram_000f4e90(DAT_ram_0018c2c8,0,0xa4,&DAT_ram_00210c1c);
    if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
      FUN_ram_000f4e90(DAT_ram_0018c2c8,1,0xa4,&DAT_ram_00210cc0);
    }
    FUN_ram_000f4e90(DAT_ram_0018c2c8,2,0xa4,&DAT_ram_00210d64);
    FUN_ram_000f4e90(DAT_ram_0018c2c8,3,0x180,&DAT_ram_0020fe38);
    if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
      if (&UNK_auxregs_05ff < DAT_ram_0018c2f8) {
        puVar7 = &DAT_ram_00210e70;
        uVar6 = 0x1500;
      }
      else {
        puVar7 = &DAT_ram_00211970;
        uVar6 = 0x180;
      }
      FUN_ram_000f4e90(DAT_ram_0018c2c8,4,uVar6,puVar7);
    }
    FUN_ram_000f4e90(DAT_ram_0018c2c8,5,DAT_ram_0018c2e8 << 7,&DAT_ram_0020fe48);
    FUN_ram_00169448(0);
  }
  else {
    FUN_ram_000f4d18(DAT_ram_0018c2c8,3,0,0x180,&DAT_ram_002143b8);
    FUN_ram_000f4d18(DAT_ram_0018c2c8,5,0,0x180,&DAT_ram_00214538);
    if (0x300 < *(ushort *)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2)) {
      FUN_ram_000f4d18(DAT_ram_0018c2c8,0,0,0xa4,&DAT_ram_00210c1c);
      if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
        FUN_ram_000f4d18(DAT_ram_0018c2c8,1,0,0xa4,&DAT_ram_00210cc0);
      }
      FUN_ram_000f4d18(DAT_ram_0018c2c8,2,0,0xa4,&DAT_ram_00210d64);
      FUN_ram_0016962c(0);
    }
  }
  if (iVar2 < 0 || iVar10 < 10) {
    FUN_ram_000f4e90(DAT_ram_0018c2cc,10,0x66,&DAT_ram_00210e08);
    FUN_ram_000f4e90(DAT_ram_0018c2cc,6,0x2a,&DAT_ram_0018c2c0);
    FUN_ram_000f4e90(DAT_ram_0018c2cc,7,0x2a,&DAT_ram_0018c2c0);
    FUN_ram_000f4e90(DAT_ram_0018c2cc,8,0x2a,&DAT_ram_0018c2c0);
    FUN_ram_000f4e90(DAT_ram_0018c2cc,9,0x2a,&DAT_ram_0018c2c0);
    FUN_ram_00169448(1);
    if (-1 < iVar4) goto LAB_ram_00169eec;
LAB_ram_00169ef0:
    if (&UNK_auxregs_0503 < DAT_ram_0018c2f8) {
LAB_ram_00169f04:
      if (DAT_ram_0018c3dd == '\x02') {
        FUN_ram_0016980c(iVar3);
      }
      FUN_ram_000f4e90(DAT_ram_0018c2d0,0xb,0x66,&DAT_ram_00211b20);
      FUN_ram_000f4e90(DAT_ram_0018c2d0,0xc,0x240,&DAT_ram_00211ab0);
      FUN_ram_000f4e90(DAT_ram_0018c2d0,0xd,0x60,&DAT_ram_00211b10);
      FUN_ram_00169448(2);
    }
LAB_ram_00169f64:
    uVar6 = 0;
LAB_ram_00169f68:
    _DAT_ram_e60001f0 = 0xb;
    if (DAT_ram_0018c2f8 <= &UNK_auxregs_0708) goto LAB_ram_0016a110;
  }
  else {
    FUN_ram_000f4d18(DAT_ram_0018c2cc,6,0,0x2a,&DAT_ram_002146b8);
    FUN_ram_000f4d18(DAT_ram_0018c2cc,7,0,0x2a,&DAT_ram_002146e4);
    FUN_ram_000f4d18(DAT_ram_0018c2cc,8,0,0x2a,&DAT_ram_00214710);
    FUN_ram_000f4d18(DAT_ram_0018c2cc,9,0,0x2a,&DAT_ram_0021473c);
    if (*(undefined **)(&DAT_ram_0018c2bc + DAT_ram_0018c2f0 * 2) < &DPFP_1L) {
      if (-1 < iVar4) goto LAB_ram_00169eec;
      if (&UNK_auxregs_0503 < DAT_ram_0018c2f8) goto LAB_ram_00169f04;
      goto LAB_ram_00169f64;
    }
    FUN_ram_000f4d18(DAT_ram_0018c2cc,10,0,0x66,&DAT_ram_00210e08);
    FUN_ram_0016962c(1);
    if (iVar4 < 0) {
      if (DAT_ram_0018c2f8 < &UNK_auxregs_0504) goto LAB_ram_00169f64;
      goto LAB_ram_00169f04;
    }
LAB_ram_00169eec:
    if (iVar9 < 10) goto LAB_ram_00169ef0;
    if (&UNK_auxregs_0503 < *(undefined **)(&DAT_ram_0018c2bc + DAT_ram_0018c2f0 * 2)) {
      FUN_ram_0016980c(iVar3);
      FUN_ram_000f4d18(DAT_ram_0018c2d0,0xb,0,0x66,&DAT_ram_00211b20);
      FUN_ram_0016962c(2);
      iVar2 = 0;
      iVar3 = 6;
      uVar6 = 0;
      do {
        if ((&DAT_ram_00211b28)[iVar2 * 5] == 1) {
          uVar1 = (&DAT_ram_00211b26)[iVar2 * 5];
          FUN_ram_000f4d18(DAT_ram_0018c2d0,0xd,(uint)uVar1 << 4,0x10,&DAT_ram_00211b10);
          iVar4 = 0;
          iVar10 = 4;
          iVar11 = 0x211e28;
          do {
            local_3c = *(undefined4 *)(iVar11 + -0x318);
            uVar6 = FUN_ram_0017f98c((uint)uVar1,iVar4,local_3c);
            iVar10 = iVar10 + -1;
            iVar11 = iVar11 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar10 != 0);
        }
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar3 != 0);
      if (*(undefined **)(&DAT_ram_0018c2bc + DAT_ram_0018c2f0 * 2) < &UNK_auxregs_0603) {
        if (DAT_ram_0018c2f8 <= &UNK_auxregs_0708) goto LAB_ram_0016a110;
        goto LAB_ram_0016a098;
      }
      goto LAB_ram_00169f68;
    }
    uVar6 = 0;
    if (DAT_ram_0018c2f8 <= &UNK_auxregs_0708) goto LAB_ram_0016a110;
  }
LAB_ram_0016a098:
  if ((iVar5 < 0) || (local_58 < 10)) {
    FUN_ram_000f4e90(DAT_ram_0018c2d4,1,0xa4,&DAT_ram_00214768);
    FUN_ram_000f4e90(DAT_ram_0018c2d4,4,0x240,&DAT_ram_002119f0);
    FUN_ram_00169448(3);
    FUN_ram_000ee260(s_add_rx_iq_cal______ram_001c8ccc);
  }
  else {
    FUN_ram_000f4d18(DAT_ram_0018c2d4,1,0,0xa4);
    FUN_ram_0016962c(3);
  }
LAB_ram_0016a110:
  if ((*(int *)(&DAT_ram_00214390 + iVar8) == 1) && (*(uint *)(iVar8 + 0x21438c) < 2)) {
    DAT_ram_00210474 = 2;
    FUN_ram_0017b2f0(0);
  }
  else if ((*(int *)(&DAT_ram_00214390 + iVar8) == 0) && (*(int *)(iVar8 + 0x21438c) == 1)) {
    DAT_ram_00210474 = 1;
    FUN_ram_0017b2f0(0);
    _DAT_ram_e6000160 = 0;
  }
  return uVar6;
}


