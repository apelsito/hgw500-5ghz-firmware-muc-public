/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ddcc */

void FUN_ram_0011ddcc(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = *(int *)(param_1 + 0x1c);
  piVar12 = *(int **)(iVar13 + 0xc);
  iVar14 = *piVar12;
  iVar10 = *(int *)(param_2 + 0x10);
  iVar11 = *(int *)(iVar14 + 0x1c);
  if (iVar10 == 0) {
    FUN_ram_000f2ccc(s_ni_args_is_NULL_ram_001c2d80);
    return;
  }
  FUN_ram_000f2ccc(s_qtn_ioctl_new_bssid__new_BSSID___ram_001c2d38,iVar10 + 6,
                   *(undefined4 *)(param_2 + 0xc));
  if (*(int *)(iVar13 + 0x38) != *(int *)(iVar13 + 0x3c)) {
    FUN_ram_0010b568(iVar11);
  }
  uVar5 = FUN_ram_00119514(piVar12 + 0xe20,iVar13,iVar10 + 6,*(undefined1 *)(iVar10 + 0x12a));
  *(undefined4 *)(iVar13 + 0x38) = uVar5;
  *(undefined4 *)(iVar11 + 0x3c50) = uVar5;
  FUN_ram_0011c09c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),*(int *)(param_2 + 0x10) + 0x80);
  FUN_ram_0011dcd4(iVar13,iVar10,*(undefined4 *)(param_2 + 0xc));
  *(undefined2 *)(*(int *)(iVar13 + 0x3c) + 0x18) = *(undefined2 *)(iVar10 + 0x7a);
  iVar6 = FUN_ram_0011a598(iVar13,iVar10);
  if (iVar6 == 0) {
    FUN_ram_000f2ccc(s_new_node_not_found____pM__ram_001c2d64,iVar10);
    return;
  }
  uVar1 = *(undefined1 *)(iVar10 + 0xa6);
  uVar2 = *(undefined2 *)(iVar10 + 0x7e);
  *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(iVar10 + 0x104);
  *(undefined2 *)(iVar6 + 0xc) = uVar2;
  uVar3 = *(ushort *)(iVar10 + 0x7a);
  *(undefined1 *)(iVar6 + 100) = uVar1;
  *(ushort *)(iVar6 + 0x18) = uVar3;
  *(ushort *)(iVar11 + 0x3fec) = uVar3;
  *(uint *)(*(int *)(*(int *)(iVar11 + 0x3b20) + 0xc) + 0x304c) = uVar3 & 0x7ff;
  uVar5 = FUN_ram_000e2000(*(undefined4 *)(iVar10 + 0x100));
  uVar1 = *(undefined1 *)(iVar10 + 0xa7);
  *(undefined4 *)(iVar6 + 0x388) = uVar5;
  *(undefined1 *)(iVar6 + 0x65) = uVar1;
  FUN_ram_0011c6d4(iVar13,iVar6,iVar10);
  FUN_ram_0011c72c(iVar6,iVar10);
  uVar2 = *(undefined2 *)(iVar10 + 0x128);
  *(undefined4 *)(iVar6 + 0x428) = *(undefined4 *)(iVar10 + 0x130);
  *(undefined4 *)(iVar6 + 0x42c) = *(undefined4 *)(iVar10 + 0x134);
  *(undefined2 *)(iVar6 + 0x410) = uVar2;
  cVar4 = *(char *)((int)piVar12 + 0x1d);
  uVar7 = 0;
  if (((*(ushort *)(iVar6 + 0x6e) & 2) != 0) && (DAT_ram_0018c118 != 0x14)) {
    uVar7 = 1;
  }
  *(uint *)(iVar13 + 0x130) = uVar7;
  if (((cVar4 == '\x0e' || cVar4 == '\r') || cVar4 == '\f') || cVar4 == '\v') {
LAB_ram_0011dfd0:
    if ((*(ushort *)(iVar6 + 0xc) & 0x4000) != 0) {
      FUN_ram_0039fe00(iVar6 + 0x3c2,iVar10 + 0xd3,0x23);
      FUN_ram_0039fe00(iVar6 + 1000,iVar10 + 0xf6,8);
      uVar7 = *(uint *)(iVar13 + 0x130);
      cVar4 = *(char *)((int)piVar12 + 0x1d);
      if (uVar7 != 0) {
        uVar7 = uVar7 + *(int *)(iVar6 + 1000);
        *(uint *)(iVar13 + 0x130) = uVar7;
      }
    }
  }
  else if (cVar4 == '\b') {
    uVar9 = piVar12[0xb];
joined_r0x0011dfcc:
    if ((uVar9 & 0x40000000) != 0) goto LAB_ram_0011dfd0;
  }
  else if (cVar4 == '\t') {
    uVar9 = piVar12[0xb];
    goto joined_r0x0011dfcc;
  }
  if (cVar4 == '\v') {
    uVar7 = 0;
LAB_ram_0011e040:
    *(uint *)(iVar13 + 0x130) = uVar7;
  }
  else if (cVar4 == '\f') {
    if (1 < uVar7) {
      uVar7 = 1;
      *(undefined4 *)(iVar13 + 0x130) = 1;
    }
  }
  else if ((cVar4 == '\r') && (2 < uVar7)) {
    uVar7 = 2;
    goto LAB_ram_0011e040;
  }
  *(uint *)(iVar6 + 0x408) = uVar7;
  if ((DAT_ram_0018c104 != 0) && (DAT_ram_0018c108 <= uVar7)) {
    uVar7 = DAT_ram_0018c108;
  }
  *(char *)(iVar6 + 0x683) = (char)uVar7;
  (**(code **)(*(int *)(iVar6 + 0x4c0) + 0x14))(iVar6);
  cVar4 = *(char *)(iVar13 + 0x2c);
  *(ushort *)(iVar10 + 0x7c) = (ushort)*(byte *)(iVar6 + 0x67c);
  if (cVar4 == '\x01') {
    if (*(char *)(iVar6 + 100) == '\0') {
      if (*(byte *)(piVar12[0xe1f] + 8) < 0xf) {
        uVar7 = 3;
      }
      else if (((int)DAT_ram_8002c8dc < 0) || (2 < (int)DAT_ram_8002c8dc)) {
        uVar7 = 0;
      }
      else {
        uVar7 = DAT_ram_8002c8dc & 0xff;
      }
      FUN_ram_0010526c(*(undefined4 *)(iVar11 + 0x3b20),uVar7);
      uVar3 = *(ushort *)(iVar6 + 0xc);
      uVar8 = uVar3 & 0x4000;
      if (*(char *)(iVar13 + 0x2c) != '\x01') goto LAB_ram_0011e148;
    }
    else {
      uVar3 = *(ushort *)(iVar6 + 0xc);
      uVar8 = uVar3 & 0x4000;
    }
    if ((uVar3 & 0x4000) != 0) {
      FUN_ram_0011c39c(*(undefined4 *)(iVar13 + 0x3c));
      FUN_ram_00103480(*(undefined4 *)(iVar11 + 0x3b20),iVar10 + 6);
      uVar8 = *(ushort *)(iVar6 + 0xc) & 0x4000;
    }
  }
  else {
    uVar8 = *(ushort *)(iVar6 + 0xc) & 0x4000;
  }
LAB_ram_0011e148:
  if ((uVar8 == 0) && (*(char *)(iVar6 + 100) != '\0')) {
    *(short *)((int)piVar12 + 0x39e6) = *(short *)((int)piVar12 + 0x39e6) + 1;
  }
  FUN_ram_0011ca38(iVar6);
  FUN_ram_0011cbac(iVar14,iVar6,iVar13,0);
  FUN_ram_0011c3f4(iVar11,iVar6,iVar13);
  *(undefined4 *)(iVar6 + 0xd80) = 0x400;
  *(undefined4 *)(iVar6 + 0xd7c) = *(undefined4 *)(iVar6 + 0x408);
  iVar11 = FUN_ram_0011dd78(iVar13);
  if (iVar11 != 0) {
    *(uint *)(iVar6 + 0x38c) = *(uint *)(iVar6 + 0x38c) | 0x4000;
  }
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_00157dc0(piVar12,iVar6,1,0);
  }
  FUN_ram_0011d1b8(param_1,iVar10,iVar10 + 6);
  return;
}


