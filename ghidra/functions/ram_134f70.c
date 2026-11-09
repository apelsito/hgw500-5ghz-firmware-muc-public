/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00134f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00134f70(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  iVar12 = *(int *)(param_1 + 0x3b20);
  if (*(char *)((int)param_2 + 0x8b) == '\0') goto LAB_ram_001351c0;
  _DAT_ram_e0000004 = 0x4000;
  sync();
  _DAT_ram_e0000000 = 0;
  sync();
  FUN_ram_000e4fa0(10);
  if (*(char *)(param_1 + 0x4660) == '\0') {
    FUN_ram_00189984(0,0,1,0);
    if (0x7fffffff < _DAT_ram_e00000bc) goto LAB_ram_00135080;
LAB_ram_00135068:
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar7 = _DAT_ram_e00000bc + 0x40000000;
      if (uVar7 != 0) goto LAB_ram_001350a4;
    }
    else {
      uVar7 = _DAT_ram_e00000bc;
      if (0xbfffffff < _DAT_ram_e00000bc) goto joined_r0x001350a0;
    }
LAB_ram_001350bc:
    cVar1 = *(char *)(param_1 + 0x465f);
  }
  else {
    FUN_ram_00189984(0,0,0,1);
    if (_DAT_ram_e00000bc < 0x80000000) goto LAB_ram_00135068;
LAB_ram_00135080:
    if (0x8007ffff < _DAT_ram_e00000bc) goto LAB_ram_00135068;
    uVar7 = _DAT_ram_e00000bc + 0xe0000000;
joined_r0x001350a0:
    if (uVar7 == 0) goto LAB_ram_001350bc;
LAB_ram_001350a4:
    uVar5 = FUN_ram_0018ae6c();
    cVar1 = *(char *)(param_1 + 0x465f);
    *(undefined4 *)(uVar7 + 0x174) = uVar5;
  }
  if (cVar1 == '\0') {
    FUN_ram_00134040(param_2);
    _DAT_ram_e609114c = param_2[0x23];
    _DAT_ram_e609115c = param_2[0x27];
    _DAT_ram_e6091150 = param_2[0x24];
    _DAT_ram_e6091160 = param_2[0x28];
    _DAT_ram_e6091154 = param_2[0x25];
    _DAT_ram_e6091164 = param_2[0x29];
    _DAT_ram_e6091158 = param_2[0x26];
    _DAT_ram_e6091168 = param_2[0x2a];
  }
  *(undefined1 *)(param_1 + 0x465f) = 0;
  FUN_ram_0010be58(param_1,*(undefined4 *)(param_1 + 0x4654),*(undefined4 *)(param_1 + 0x4658),9);
  FUN_ram_0018a848();
  if (*(short *)(param_1 + 0x4058) != 0) {
    *(undefined1 *)(param_1 + 0x465c) = 1;
  }
LAB_ram_001351c0:
  _DAT_ram_e5044038 = 0;
  _DAT_ram_e5144038 = 0;
  FUN_ram_000f8be8(iVar12,*(undefined4 *)(param_1 + 0x3b3c));
  FUN_ram_000f94c4(*(undefined4 *)(param_1 + 0x3b20));
  FUN_ram_000fe510(iVar12);
  uVar5 = *(undefined4 *)(param_1 + 0x4654);
  *(undefined1 *)(iVar12 + 0xd2) = 0;
  FUN_ram_00101ec0(iVar12,uVar5);
  if (*(ushort *)(param_1 + 0x5ab2) != 0) {
    *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0x13c) + 0x48) =
         (uint)(*(ushort *)(param_1 + 0x5ab2) & 0x1ff) << 0x10 | 0x2000000;
  }
  uVar5 = FUN_ram_0011bc70(0,0,0);
  FUN_ram_00103db8(iVar12,uVar5);
  FUN_ram_00103ad0(iVar12,0xe);
  FUN_ram_000e8310(*(undefined4 *)(param_1 + 0x3a04));
  FUN_ram_000e8350(*(undefined4 *)(param_1 + 0x3a04));
  uVar11 = 0;
  FUN_ram_001052b8(iVar12,*(char *)(param_1 + 0x1e) == '\x01');
  FUN_ram_000fd2e4(iVar12);
  _DAT_ram_e504404c = *param_2;
  iVar13 = 8;
  uVar7 = param_2[1];
  *(uint *)(*(int *)(iVar12 + 0xc) + 0x478) = uVar7;
  *(uint *)(*(int *)(iVar12 + 0xc) + 0x100478) = uVar7 & 0xfffffbff | 0x3c00300;
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x578) = param_2[3];
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x2028) = param_2[2];
  *(uint *)(*(int *)(iVar12 + 0xc) + 0x2000) = param_2[4] & 0xfff7fffe;
  uVar5 = param_2[5];
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x3000) = uVar5;
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x103000) = uVar5;
  FUN_ram_00134e48(param_1,param_2);
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x301c) = param_2[0x8af];
  puVar10 = param_2 + 0x15;
  do {
    FUN_ram_00104fa4(iVar12,uVar11 & 0xff,puVar10,
                     1 << (uVar11 & 0x1f) & (uint)*(byte *)((int)param_2 + 0x8a));
    puVar10 = (undefined4 *)((int)puVar10 + 6);
    iVar13 = iVar13 + -1;
    uVar11 = uVar11 + 1;
  } while (iVar13 != 0);
  FUN_ram_001050f8(iVar12,param_2 + 0x21);
  if (DAT_ram_0018c111 != '\0') {
    *(uint *)(*(int *)(iVar12 + 0xc) + 0x3010) =
         *(uint *)(*(int *)(iVar12 + 0xc) + 0x3010) & 0xfffeffff;
    FUN_ram_00104040(iVar12);
  }
  FUN_ram_0011b948(iVar12,param_2 + 0x15);
  FUN_ram_00103348(*(undefined4 *)(param_1 + 0x3b20),0,param_2 + 9);
  FUN_ram_00103f88(*(undefined4 *)(param_1 + 0x3b20),0,param_2 + 0x67);
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x3014) = param_2[7];
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x3018) = param_2[8];
  FUN_ram_0010548c(iVar12,param_2[0x2b]);
  FUN_ram_0010549c(iVar12,param_2[0x2c]);
  *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x3048) = param_2[0x2d];
  FUN_ram_000eea80(&DAT_ram_0020fc94,0,0x20);
  DAT_ram_0020fcac = DAT_ram_80038ee0;
  DAT_ram_0020fcb0 = DAT_ram_80038ee4;
  if (*(int *)(param_1 + 0x3f7c) != 0) {
    uVar7 = 0;
    do {
      FUN_ram_001026e4(*(undefined4 *)(param_1 + 0x3b20),uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x3f7c));
  }
  FUN_ram_0018a9f0(0);
  FUN_ram_0018aa34();
  if (DAT_ram_0018c0ec == 0) {
    FUN_ram_0018a948();
    FUN_ram_0010560c(iVar12);
  }
  else {
    FUN_ram_0018a920();
    FUN_ram_001055d8(iVar12);
  }
  FUN_ram_0018aa18(1);
  if (*(short *)(param_1 + 0x5ab0) != 0) {
    if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
      if (_DAT_ram_e00000bc < 0x8000000) {
        uVar7 = _DAT_ram_e00000bc + 0x40000000;
      }
      else {
        uVar7 = _DAT_ram_e00000bc;
        if (_DAT_ram_e00000bc < 0xc0000000) {
          uVar7 = 0;
        }
      }
    }
    else {
      uVar7 = _DAT_ram_e00000bc + 0xe0000000;
    }
    if ((uVar7 == 0) || (*(int *)(uVar7 + 0x38) < 6)) {
      FUN_ram_0018af8c(*(short *)(param_1 + 0x5ab0),1);
    }
  }
  _DAT_ram_e6000024 = 0;
  iVar9 = param_1 + 0x3dbc;
  iVar13 = 4;
  do {
    uVar7 = 0;
    do {
      iVar8 = *(int *)(iVar9 + uVar7 * 8 + 0xc);
      while (iVar8 != 0) {
        puVar10 = (undefined4 *)(iVar8 + 8);
        iVar8 = *(int *)(iVar8 + 0xec);
        *(undefined4 *)*puVar10 = 5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    iVar13 = iVar13 + -1;
    iVar9 = iVar9 + 0x38;
  } while (iVar13 != 0);
  iVar13 = param_1 + 0x3e9c;
  iVar9 = 4;
  do {
    uVar7 = 0;
    do {
      iVar8 = *(int *)(iVar13 + uVar7 * 8 + 0xc);
      while (iVar8 != 0) {
        puVar10 = (undefined4 *)(iVar8 + 8);
        iVar8 = *(int *)(iVar8 + 0xec);
        *(undefined4 *)*puVar10 = 5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    iVar9 = iVar9 + -1;
    iVar13 = iVar13 + 0x38;
  } while (iVar9 != 0);
  iVar13 = 0;
  iVar9 = 0x20;
  LP_START = 0x135624;
  LP_END = 0x13563c;
  do {
    iVar8 = iVar13 * 0x1c;
    if ((undefined1 *)(&DAT_ram_8002be4c)[iVar13 * 7] == &LAB_ram_80024b84) {
      if (((*(uint *)(&DAT_ram_8002be5c + iVar8) & 1) != 0) &&
         ((*(uint *)(&DAT_ram_8002be5c + iVar8) & 2) != 0)) {
        uVar7 = STATUS32;
        if ((uVar7 & 6) != 0) {
          STATUS32 = uVar7 & 0xfffffff9;
        }
        *(uint *)(&DAT_ram_8002be5c + iVar8) = *(uint *)(&DAT_ram_8002be5c + iVar8) | 4;
        STATUS32 = uVar7;
      }
      break;
    }
    iVar13 = iVar13 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar13 = 0;
  iVar9 = 0x20;
  LP_START = 0x13565c;
  LP_END = 0x135678;
  do {
    iVar8 = iVar13 * 0x1c;
    if ((undefined1 *)(&DAT_ram_8002be4c)[iVar13 * 7] == &LAB_ram_0012a904) {
      if (((*(uint *)(&DAT_ram_8002be5c + iVar8) & 1) != 0) &&
         ((*(uint *)(&DAT_ram_8002be5c + iVar8) & 2) != 0)) {
        uVar7 = STATUS32;
        if ((uVar7 & 6) != 0) {
          STATUS32 = uVar7 & 0xfffffff9;
        }
        *(uint *)(&DAT_ram_8002be5c + iVar8) = *(uint *)(&DAT_ram_8002be5c + iVar8) | 4;
        STATUS32 = uVar7;
      }
      break;
    }
    iVar13 = iVar13 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar7 = 0;
  iVar13 = 8;
  do {
    piVar4 = (int *)FUN_ram_00128c64(param_1,uVar7);
    if (((piVar4 != (int *)0x0) && (*piVar4 != 0)) && ((*(byte *)((int)piVar4 + 0x1a) & 1) != 0)) {
      uVar11 = (0x200 << (DAT_ram_0018c18c & 0x1f)) * 5;
      bVar14 = CARRY4(DAT_ram_80038ee0,uVar11);
      iVar9 = ((int)uVar11 >> 0x1f) + DAT_ram_80038ee4;
      piVar4[2] = DAT_ram_80038ee0 + uVar11;
      piVar4[3] = iVar9 + (uint)bVar14;
      uVar11 = uVar7;
      if (param_3 == 0) {
        if (DAT_ram_8002c94c != '\0') {
          uVar11 = (int)uVar7 >> 1;
        }
        uVar5 = *(undefined4 *)(param_1 + 0x3b20);
        uVar2 = *(ushort *)(param_1 + 0x43a);
        uVar6 = 0;
        uVar3 = 0;
      }
      else {
        if (DAT_ram_8002c94c != '\0') {
          uVar11 = (int)uVar7 >> 1;
        }
        uVar3 = FUN_ram_00152198();
        uVar2 = *(ushort *)(param_1 + 0x43a);
        uVar5 = *(undefined4 *)(param_1 + 0x3b20);
        uVar6 = 1;
      }
      FUN_ram_00102e04(uVar5,uVar11 & 3,(uint)uVar2 << 10,uVar6,uVar3);
    }
    iVar13 = iVar13 + -1;
    uVar7 = uVar7 + 1 & 0xff;
  } while (iVar13 != 0);
  FUN_ram_0012fa50(param_1,0);
  *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x304c) =
       *(ushort *)(param_1 + 0x3fec) & 0x7ff;
  FUN_ram_0011be2c(param_1,DAT_ram_8002c950);
  FUN_ram_00156e30(param_1,0);
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_0015ce08(param_1,1);
    FUN_ram_800248c8(param_1);
  }
  iVar13 = FUN_ram_0015cbb4(param_1);
  if (iVar13 == 0) {
    *(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x2000) = param_2[4];
  }
  else {
    FUN_ram_000f7c10(0x32,param_1,0,&LAB_ram_0015cbf8,2);
    DAT_ram_800372f4 = DAT_ram_800372f4 + 1;
  }
  DAT_ram_8003720c = DAT_ram_8003720c + 1;
  uVar7 = STATUS32;
  if ((uVar7 & 6) != 0) {
    STATUS32 = uVar7 & 0xfffffff9;
  }
  _DAT_ram_8003ffcc = 0x4000008;
  _DAT_ram_8003ffd0 = DAT_ram_80038ee0;
  _DAT_ram_8003ffd4 = 0xffffffff;
  STATUS32 = uVar7;
  sync();
  uVar5 = _DAT_ram_8003ffc0;
  if (DAT_ram_0018c420 != 0) {
    uVar5 = FUN_ram_000ee260(s_reset_time__begin_0x_x_end_0x_x_ram_001c4504,param_2[6],0);
  }
  return uVar5;
}


