/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017a240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0017a240(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = FUN_ram_00183c8c();
  iVar8 = (int)(((uint)(param_1 >> 1) >> 0x1e) + param_1) >> 2;
  if ((DAT_ram_0018c3c0 != 1) || ((DAT_ram_0018c35c == DAT_ram_0018c3cc && (DAT_ram_0018c3c4 == 1)))
     ) goto LAB_ram_0017ac3c;
  DAT_ram_0018c3c4 = 1;
  DAT_ram_0018c35c = DAT_ram_0018c3cc;
  sVar3 = FUN_ram_0017a1a0(DAT_ram_0018c363);
  DAT_ram_0018c3d0 = FUN_ram_0017a1b0(0,iVar8);
  DAT_ram_0018c3d2 = FUN_ram_0017a1b0(1,iVar8);
  uVar5 = (uint)DAT_ram_0018c363;
  if ((&DAT_ram_002146be)[uVar5 * 7] == '\0') {
    cVar1 = (&DAT_ram_002146ea)[uVar5 * 7];
  }
  else {
    sVar2 = DAT_ram_0018c3d0 - ((ushort)DAT_ram_0018c3c8 - (short)DAT_ram_0018c35c);
    if (DAT_ram_0018c35c == DAT_ram_0018c3c8) {
      sVar2 = sVar2 + 1;
    }
    DAT_ram_0018c3d0 = sVar2 + sVar3;
    iVar7 = (int)DAT_ram_0018c3d0;
    if (iVar7 < 0) {
      iVar7 = 0;
LAB_ram_0017a38c:
      DAT_ram_0018c3d0 = (short)iVar7;
    }
    else if (0x2f < iVar7) {
      iVar7 = 0x2f;
      goto LAB_ram_0017a38c;
    }
    if (DAT_ram_0018c2dc < DAT_ram_6003b3dc) {
      DAT_ram_0018c3d0 = (short)iVar7 + -2;
      iVar7 = (int)DAT_ram_0018c3d0;
    }
    if (-1 < iVar7) {
      iVar7 = FUN_ram_001799f8(0,(&DAT_ram_0019a5bc)[uVar5 * 0xc0 + iVar7 * 4]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(DAT_ram_0018c2e0 * iVar7 + (uint)DAT_ram_0018c360) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      iVar7 = FUN_ram_001799f8(2,(&DAT_ram_0019a5bc)
                                 [(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d0 * 4]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar7 + (uint)DAT_ram_0018c361) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      FUN_ram_001710d0(0x2a8,0xf,0,
                       (&DAT_ram_0019a5bc)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d0 * 4]);
      FUN_ram_001710d0(0x2a8,0x30,4,
                       (&DAT_ram_0019a5bd)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d0 * 4]);
      FUN_ram_001710d0(0x2a8,0xc0,6,
                       (&DAT_ram_0019a5be)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d0 * 4]);
      FUN_ram_001799bc(0,(&DAT_ram_0019a5bf)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d0 * 4]);
      uVar5 = (uint)DAT_ram_0020fe38;
      FUN_ram_001710d0(700,0x7f,0,uVar5 & 0x7f);
      FUN_ram_001710d0(700,0x3f80,7,(int)uVar5 >> 7 & 0x7f);
    }
    uVar6 = (uint)DAT_ram_0020fe48;
    if ((uVar6 == 0) || (DAT_ram_0020fe4a == 0)) {
      cVar1 = (&DAT_ram_002146ea)[(uint)DAT_ram_0018c363 * 7];
      uVar6 = _DAT_ram_e609115c;
    }
    else {
      _DAT_ram_e609114c = (uint)DAT_ram_0020fe4a;
      cVar1 = (&DAT_ram_002146ea)[(uint)DAT_ram_0018c363 * 7];
    }
    uVar5 = (uint)DAT_ram_0018c363;
    _DAT_ram_e609115c = uVar6;
  }
  if (cVar1 != '\0') {
    sVar2 = DAT_ram_0018c3d2 - ((ushort)DAT_ram_0018c3c8 - (short)DAT_ram_0018c35c);
    if (DAT_ram_0018c35c == DAT_ram_0018c3c8) {
      sVar2 = sVar2 + 1;
    }
    DAT_ram_0018c3d2 = sVar2 + sVar3;
    iVar7 = (int)DAT_ram_0018c3d2;
    if (iVar7 < 0) {
      iVar7 = 0;
LAB_ram_0017a5e0:
      DAT_ram_0018c3d2 = (short)iVar7;
    }
    else if (0x2f < iVar7) {
      iVar7 = 0x2f;
      goto LAB_ram_0017a5e0;
    }
    if (DAT_ram_0018c2dc < DAT_ram_6003b3dc) {
      DAT_ram_0018c3d2 = (short)iVar7 + -2;
      iVar7 = (int)DAT_ram_0018c3d2;
    }
    if (-1 < iVar7) {
      iVar7 = FUN_ram_001799f8(0,(&DAT_ram_0019a5bc)[uVar5 * 0xc0 + iVar7 * 4]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(DAT_ram_0018c2e0 * iVar7 + (uint)DAT_ram_0018c360) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      iVar7 = FUN_ram_001799f8(2,(&DAT_ram_0019a5bc)
                                 [(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d2 * 4]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar7 + (uint)DAT_ram_0018c361) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      FUN_ram_001710d0(0x2a8,0xf000,0xc,
                       (&DAT_ram_0019a5bc)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d2 * 4]);
      FUN_ram_001710d0(0x2a8,0x30000,0x10,
                       (&DAT_ram_0019a5bd)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d2 * 4]);
      FUN_ram_001710d0(0x2a8,0xc0000,0x12,
                       (&DAT_ram_0019a5be)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d2 * 4]);
      FUN_ram_001799bc(1,(&DAT_ram_0019a5bf)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d2 * 4]);
      uVar5 = (uint)DAT_ram_0020fe3c;
      FUN_ram_001710d0(0x2c0,0x7f,0,uVar5 & 0x7f);
      FUN_ram_001710d0(0x2c0,0x3f80,7,(int)uVar5 >> 7 & 0x7f);
    }
    if ((DAT_ram_0020fe4c != 0) && (DAT_ram_0020fe4e != 0)) {
      _DAT_ram_e6091150 = (uint)DAT_ram_0020fe4e;
      _DAT_ram_e6091160 = (uint)DAT_ram_0020fe4c;
    }
  }
  DAT_ram_0018c3d4 = FUN_ram_0017a1b0(2,iVar8);
  DAT_ram_0018c3d6 = FUN_ram_0017a1b0(3,iVar8);
  uVar5 = (uint)DAT_ram_0018c363;
  if ((&DAT_ram_00214716)[uVar5 * 7] == '\0') {
    cVar1 = (&DAT_ram_00214742)[uVar5 * 7];
  }
  else {
    sVar2 = DAT_ram_0018c3d4 - ((ushort)DAT_ram_0018c3c8 - (short)DAT_ram_0018c35c);
    if (DAT_ram_0018c35c == DAT_ram_0018c3c8) {
      sVar2 = sVar2 + 1;
    }
    DAT_ram_0018c3d4 = sVar2 + sVar3;
    iVar8 = (int)DAT_ram_0018c3d4;
    if (iVar8 < 0) {
      iVar8 = 0;
LAB_ram_0017a850:
      DAT_ram_0018c3d4 = (short)iVar8;
    }
    else if (0x2f < iVar8) {
      iVar8 = 0x2f;
      goto LAB_ram_0017a850;
    }
    if (DAT_ram_0018c2dc < DAT_ram_6003b3dc) {
      DAT_ram_0018c3d4 = (short)iVar8 + -2;
      iVar8 = (int)DAT_ram_0018c3d4;
    }
    if (-1 < iVar8) {
      iVar8 = FUN_ram_001799f8(0,(&DAT_ram_0019a5bc)[uVar5 * 0xc0 + iVar8 * 4]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(DAT_ram_0018c2e0 * iVar8 + (uint)DAT_ram_0018c360) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      iVar8 = FUN_ram_001799f8(2,(&DAT_ram_0019a5bc)
                                 [(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d4 * 4]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar8 + (uint)DAT_ram_0018c361) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      FUN_ram_001710d0(0x2ac,0xf,0,
                       (&DAT_ram_0019a5bc)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d4 * 4]);
      FUN_ram_001710d0(0x2ac,0x30,4,
                       (&DAT_ram_0019a5bd)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d4 * 4]);
      FUN_ram_001710d0(0x2ac,0xc0,6,
                       (&DAT_ram_0019a5be)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d4 * 4]);
      FUN_ram_001799bc(2,(&DAT_ram_0019a5bf)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d4 * 4]);
      uVar5 = (uint)DAT_ram_0020fe40;
      FUN_ram_001710d0(0x2c4,0x7f,0,uVar5 & 0x7f);
      FUN_ram_001710d0(0x2c4,0x3f80,7,(int)uVar5 >> 7 & 0x7f);
    }
    uVar6 = (uint)DAT_ram_0020fe50;
    if ((uVar6 == 0) || (DAT_ram_0020fe52 == 0)) {
      cVar1 = (&DAT_ram_00214742)[(uint)DAT_ram_0018c363 * 7];
      uVar6 = _DAT_ram_e6091164;
    }
    else {
      _DAT_ram_e6091154 = (uint)DAT_ram_0020fe52;
      cVar1 = (&DAT_ram_00214742)[(uint)DAT_ram_0018c363 * 7];
    }
    uVar5 = (uint)DAT_ram_0018c363;
    _DAT_ram_e6091164 = uVar6;
  }
  if (cVar1 == '\0') goto LAB_ram_0017ac3c;
  sVar2 = DAT_ram_0018c3d6 - ((ushort)DAT_ram_0018c3c8 - (short)DAT_ram_0018c35c);
  if (DAT_ram_0018c35c == DAT_ram_0018c3c8) {
    sVar2 = sVar2 + 1;
  }
  DAT_ram_0018c3d6 = sVar3 + sVar2;
  iVar8 = (int)DAT_ram_0018c3d6;
  if (iVar8 < 0) {
    iVar8 = 0;
LAB_ram_0017aa98:
    DAT_ram_0018c3d6 = (short)iVar8;
  }
  else if (0x2f < iVar8) {
    iVar8 = 0x2f;
    goto LAB_ram_0017aa98;
  }
  if (DAT_ram_0018c2dc < DAT_ram_6003b3dc) {
    DAT_ram_0018c3d6 = (short)iVar8 + -2;
    iVar8 = (int)DAT_ram_0018c3d6;
  }
  if (-1 < iVar8) {
    iVar8 = FUN_ram_001799f8(0,(&DAT_ram_0019a5bc)[uVar5 * 0xc0 + iVar8 * 4]);
    FUN_ram_000f4d18(DAT_ram_0018c2c8,3,((uint)DAT_ram_0018c360 + DAT_ram_0018c2e0 * iVar8) * 0x10,
                     0x10,&DAT_ram_0020fe38);
    iVar8 = FUN_ram_001799f8(2,(&DAT_ram_0019a5bc)
                               [(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d6 * 4]);
    FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar8 + (uint)DAT_ram_0018c361) * 0x10,
                     0x10,&DAT_ram_0020fe48);
    FUN_ram_001710d0(0x2ac,0xf000,0xc,
                     (&DAT_ram_0019a5bc)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d6 * 4]);
    FUN_ram_001710d0(0x2ac,0x30000,0x10,
                     (&DAT_ram_0019a5bd)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d6 * 4]);
    FUN_ram_001710d0(0x2ac,0xc0000,0x12,
                     (&DAT_ram_0019a5be)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d6 * 4]);
    FUN_ram_001799bc(3,(&DAT_ram_0019a5bf)[(uint)DAT_ram_0018c363 * 0xc0 + DAT_ram_0018c3d6 * 4]);
    uVar5 = (uint)DAT_ram_0020fe44;
    FUN_ram_001710d0(0x2c8,0x7f,0,uVar5 & 0x7f);
    FUN_ram_001710d0(0x2c8,0x3f80,7,(int)uVar5 >> 7 & 0x7f);
  }
  if ((DAT_ram_0020fe54 != 0) && (DAT_ram_0020fe56 != 0)) {
    _DAT_ram_e6091158 = (uint)DAT_ram_0020fe56;
    _DAT_ram_e6091168 = (uint)DAT_ram_0020fe54;
  }
LAB_ram_0017ac3c:
  FUN_ram_00183cd0(uVar4);
  return 0;
}


