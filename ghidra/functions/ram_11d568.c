/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011d568 */

undefined4 FUN_ram_0011d568(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int extraout_r8;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  
  iVar15 = *(int *)(param_1 + 0x1c);
  piVar14 = *(int **)(iVar15 + 0xc);
  iVar13 = *piVar14;
  iVar11 = *(int *)(param_2 + 0x10);
  uVar12 = *(undefined4 *)(iVar13 + 0x1c);
  if (iVar11 == 0) {
    FUN_ram_000ee260(s_qtn_ioctl_new_assoc__no_ni_args_ram_001c2c48);
    return 1;
  }
  if ((((short)piVar14[0xe79] == 0) && ((char)piVar14[0xe7a] != '\0')) &&
     ((*(uint *)(iVar11 + 0x108) & 0x800) != 0)) {
    FUN_ram_00158af8(0xb0000001);
  }
  iVar7 = FUN_ram_0011c4bc(iVar15,iVar11,*(undefined4 *)(param_2 + 0xc));
  if (iVar7 != 0) {
    return 1;
  }
  piVar8 = (int *)FUN_ram_0011c26c(iVar15,iVar11);
  if (piVar8 == (int *)0x0) {
    FUN_ram_000ee260(s_qtn_ioctl_new_assoc__new_node__p_ram_001c2c6c,iVar11);
    return 1;
  }
  if ((*(byte *)(piVar8 + 0x116) & 6) != 0) {
    return 1;
  }
  uVar5 = *(undefined2 *)(iVar11 + 0xa2);
  *(byte *)(piVar8 + 0x116) = *(byte *)(piVar8 + 0x116) & 0xfe;
  *(undefined2 *)(piVar8 + 0xf0) = uVar5;
  uVar6 = *(ushort *)(iVar11 + 0x7e);
  *(undefined1 *)(piVar8 + 0x19) = *(undefined1 *)(iVar11 + 0xa6);
  uVar1 = *(undefined1 *)(iVar11 + 0xa8);
  *(ushort *)(piVar8 + 3) = uVar6;
  *(undefined1 *)((int)piVar8 + 0x67) = uVar1;
  *(undefined1 *)(piVar8 + 0x1a) = *(undefined1 *)(iVar11 + 0xa9);
  if ((uVar6 & 0x400) != 0) {
    *(byte *)(piVar8 + 0x116) = *(byte *)(piVar8 + 0x116) | 8;
  }
  *(undefined1 *)((int)piVar8 + 0x65) = *(undefined1 *)(iVar11 + 0xa7);
  FUN_ram_0011c6d4(iVar15,piVar8,iVar11);
  FUN_ram_0011c72c(piVar8,iVar11);
  cVar2 = *(char *)(iVar15 + 0x2c);
  *(undefined2 *)(piVar8 + 0x104) = *(undefined2 *)(iVar11 + 0x128);
  bVar16 = (*(ushort *)((int)piVar8 + 0x6e) & 2) != 0;
  iVar7 = extraout_r8;
  if (bVar16) {
    iVar7 = 1;
  }
  uVar5 = *(undefined2 *)(iVar11 + 300);
  cVar3 = *(char *)((int)piVar14 + 0x1d);
  if (!bVar16) {
    iVar7 = 0;
  }
  piVar8[0x102] = iVar7;
  *(undefined2 *)((int)piVar8 + 0x412) = uVar5;
  if (cVar2 == '\x02') {
    *(int *)(iVar15 + 0x130) = iVar7;
  }
  if (((cVar3 == '\x0e' || cVar3 == '\r') || cVar3 == '\f') || cVar3 == '\v') {
LAB_ram_0011d758:
    if ((*(ushort *)(piVar8 + 3) & 0x4000) == 0) goto LAB_ram_0011d73c;
    FUN_ram_0039fe00((int)piVar8 + 0x3c2,iVar11 + 0xd3,0x23);
    FUN_ram_0039fe00(piVar8 + 0xfa,iVar11 + 0xf6,8);
    uVar10 = *(uint *)(iVar15 + 0x130);
    if (*(char *)(iVar15 + 0x2c) == '\x02') {
      if (uVar10 == 0) {
        if (piVar8[0x102] != 0) goto LAB_ram_0011d7e8;
      }
      else {
        iVar7 = uVar10 + piVar8[0xfa];
        *(int *)(iVar15 + 0x130) = iVar7;
        if (piVar8[0x102] == 0) {
          uVar10 = 0;
          if (iVar7 != 0) {
            uVar9 = 0;
            goto LAB_ram_0011d808;
          }
        }
        else {
          piVar8[0x102] = iVar7;
          uVar10 = *(uint *)(iVar15 + 0x130);
        }
      }
    }
    else if (piVar8[0x102] == 0) {
      if (uVar10 != 0) {
        uVar9 = 0;
        goto LAB_ram_0011d808;
      }
    }
    else {
LAB_ram_0011d7e8:
      piVar8[0x102] = uVar10;
    }
  }
  else {
    if (cVar3 == '\b') {
      uVar10 = piVar14[0xb];
joined_r0x0011d738:
      if ((uVar10 & 0x40000000) != 0) goto LAB_ram_0011d758;
    }
    else if (cVar3 == '\t') {
      uVar10 = piVar14[0xb];
      goto joined_r0x0011d738;
    }
LAB_ram_0011d73c:
    uVar9 = piVar8[0x102];
    uVar10 = *(uint *)(iVar15 + 0x130);
    if (uVar9 < *(uint *)(iVar15 + 0x130)) goto LAB_ram_0011d808;
  }
  uVar9 = uVar10;
  piVar8[0x102] = uVar9;
LAB_ram_0011d808:
  if ((DAT_ram_0018c104 != 0) && (DAT_ram_0018c108 <= uVar9)) {
    uVar9 = DAT_ram_0018c108;
  }
  *(char *)((int)piVar8 + 0x683) = (char)uVar9;
  (**(code **)(piVar8[0x130] + 0x14))(piVar8);
  FUN_ram_0011ca38(piVar8);
  *(undefined1 *)(piVar8 + 0x108) = *(undefined1 *)(iVar11 + 0xaa);
  FUN_ram_0011cbac(iVar13,piVar8,iVar15,1);
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_00157dc0(piVar14,piVar8,1,0);
  }
  FUN_ram_0011d1b8(param_1,iVar11,iVar11);
  FUN_ram_0011d354(uVar12);
  bVar4 = *(byte *)(piVar8 + 0x19);
  if (((*(ushort *)(piVar8 + 3) & 0x4000) == 0) && (bVar4 != 0)) {
    *(short *)((int)piVar14 + 0x39e6) = *(short *)((int)piVar14 + 0x39e6) + 1;
  }
  piVar8[0x360] = 0x400;
  piVar8[0x35f] = piVar8[0x102];
  FUN_ram_001141e4(uVar12,piVar8,
                   (uint)*(ushort *)(piVar8 + 0xf7) |
                   (uint)bVar4 << 0x18 | (uint)*(byte *)(*piVar8 + 0x2c) << 0x10);
  return 0;
}


