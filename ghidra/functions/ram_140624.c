/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00140624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00140624(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar2 = *(ushort *)(param_1 + 3) >> 0xe;
  uVar13 = (uint)*(byte *)(param_2 + 0x1f);
  uVar11 = (uint)*(byte *)(param_2 + 3);
  cVar3 = *(char *)((int)param_1 + 0x682);
  if ((uVar2 & 1) == 0) {
    if (uVar11 < 0x4d) {
      uVar6 = (&DAT_ram_001a925c + (uint)(cVar3 != '\0') * 0x4d + (uint)(uVar13 != 0) * 0x9a)
              [uVar11];
    }
    else {
      uVar6 = (&DAT_ram_001a925c)[(uint)(cVar3 != '\0') * 0x4d + (uint)(uVar13 != 0) * 0x9a];
    }
  }
  else {
    uVar9 = (uint)(byte)(&DAT_ram_001a9058)[uVar11];
    if (((&DAT_ram_001a9058)[uVar11] & 0x40) == 0) {
      if ((uVar9 & 0xf) < 10) {
        uVar6 = *(ushort *)
                 ((int)(&DAT_ram_001a972c +
                       ((int)uVar9 >> 4 & 3U) * 0x14 + (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140
                       ) + (uVar9 & 0xf) * 2);
      }
      else {
        uVar6 = *(ushort *)
                 (&DAT_ram_001a972c +
                 ((int)uVar9 >> 4 & 3U) * 0x14 + (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140);
      }
    }
    else {
      uVar9 = (uVar9 & 0xffffffbf) + 0x21;
      if ((uVar9 < 0x21) || (0x4c < uVar9)) {
        uVar6 = *(ushort *)
                 (&PTR_DAT_ram_00340027_ram_001a9eac + (uint)(cVar3 != '\0') * 0x16 + uVar13 * 0x2c)
        ;
      }
      else {
        uVar6 = *(ushort *)(uVar13 * 0xb0 + (uint)(cVar3 != '\0') * 0x58 + 0x1a9e6a + uVar9 * 2);
      }
    }
  }
  uVar9 = (uint)*(byte *)(param_2 + 4);
  if ((uVar2 & 1) == 0) {
    if (uVar9 < 0x4d) {
      uVar1 = (&DAT_ram_001a925c + (uint)(uVar13 != 0) * 0x9a + (uint)(cVar3 != '\0') * 0x4d)[uVar9]
      ;
    }
    else {
      uVar1 = (&DAT_ram_001a925c)[(uint)(uVar13 != 0) * 0x9a + (uint)(cVar3 != '\0') * 0x4d];
    }
joined_r0x00140880:
    if (uVar6 <= uVar1) goto LAB_ram_001408f0;
LAB_ram_00140884:
    if ((uVar2 & 1) == 0) {
      if (uVar11 < 0x4d) {
        uVar8 = (uint)(ushort)(&DAT_ram_001a925c +
                              (uint)(cVar3 != '\0') * 0x4d + (uint)(uVar13 != 0) * 0x9a)[uVar11];
      }
      else {
        uVar8 = (uint)(ushort)(&DAT_ram_001a925c)
                              [(uint)(cVar3 != '\0') * 0x4d + (uint)(uVar13 != 0) * 0x9a];
      }
    }
    else {
      uVar8 = (uint)(byte)(&DAT_ram_001a9058)[uVar11];
      if (((&DAT_ram_001a9058)[uVar11] & 0x40) == 0) {
        if ((uVar8 & 0xf) < 10) {
          uVar8 = (uint)*(ushort *)
                         ((int)(&DAT_ram_001a972c +
                               ((int)uVar8 >> 4 & 3U) * 0x14 +
                               (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140) + (uVar8 & 0xf) * 2);
        }
        else {
          uVar8 = (uint)*(ushort *)
                         (&DAT_ram_001a972c +
                         ((int)uVar8 >> 4 & 3U) * 0x14 +
                         (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140);
        }
      }
      else {
        uVar8 = (uVar8 & 0xffffffbf) + 0x21;
        if ((uVar8 < 0x21) || (0x4c < uVar8)) {
          uVar8 = (uint)*(ushort *)
                         (&PTR_DAT_ram_00340027_ram_001a9eac +
                         (uint)(cVar3 != '\0') * 0x16 + uVar13 * 0x2c);
        }
        else {
          uVar8 = (uint)*(ushort *)
                         (uVar13 * 0xb0 + (uint)(cVar3 != '\0') * 0x58 + 0x1a9e6a + uVar8 * 2);
        }
      }
    }
  }
  else {
    uVar8 = (uint)(byte)(&DAT_ram_001a9058)[uVar9];
    if (((&DAT_ram_001a9058)[uVar9] & 0x40) == 0) {
      if ((uVar8 & 0xf) < 10) {
        uVar1 = *(ushort *)
                 ((int)(&DAT_ram_001a972c +
                       ((int)uVar8 >> 4 & 3U) * 0x14 + (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140
                       ) + (uVar8 & 0xf) * 2);
      }
      else {
        uVar1 = *(ushort *)
                 (&DAT_ram_001a972c +
                 ((int)uVar8 >> 4 & 3U) * 0x14 + (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140);
      }
    }
    else {
      uVar8 = (uVar8 & 0xffffffbf) + 0x21;
      if (uVar8 < 0x21) {
        uVar1 = *(ushort *)
                 (&PTR_DAT_ram_00340027_ram_001a9eac + (uint)(cVar3 != '\0') * 0x16 + uVar13 * 0x2c)
        ;
      }
      else {
        if (uVar8 < 0x4d) {
          uVar1 = *(ushort *)(uVar13 * 0xb0 + (uint)(cVar3 != '\0') * 0x58 + 0x1a9e6a + uVar8 * 2);
          goto joined_r0x00140880;
        }
        uVar1 = *(ushort *)
                 (&PTR_DAT_ram_00340027_ram_001a9eac + (uint)(cVar3 != '\0') * 0x16 + uVar13 * 0x2c)
        ;
      }
    }
    if (uVar1 < uVar6) goto LAB_ram_00140884;
LAB_ram_001408f0:
    if ((uVar2 & 1) == 0) {
      if (uVar9 < 0x4d) {
        uVar8 = (uint)(ushort)(&DAT_ram_001a925c +
                              (uint)(cVar3 != '\0') * 0x4d + (uint)(uVar13 != 0) * 0x9a)[uVar9];
      }
      else {
        uVar8 = (uint)(ushort)(&DAT_ram_001a925c)
                              [(uint)(cVar3 != '\0') * 0x4d + (uint)(uVar13 != 0) * 0x9a];
      }
    }
    else {
      uVar8 = (uint)(byte)(&DAT_ram_001a9058)[uVar9];
      if (((&DAT_ram_001a9058)[uVar9] & 0x40) == 0) {
        if ((uVar8 & 0xf) < 10) {
          uVar8 = (uint)*(ushort *)
                         ((int)(&DAT_ram_001a972c +
                               (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140 +
                               ((int)uVar8 >> 4 & 3U) * 0x14) + (uVar8 & 0xf) * 2);
        }
        else {
          uVar8 = (uint)*(ushort *)
                         (&DAT_ram_001a972c +
                         (uint)(cVar3 != '\0') * 0xa0 + uVar13 * 0x140 +
                         ((int)uVar8 >> 4 & 3U) * 0x14);
        }
      }
      else {
        uVar8 = (uVar8 & 0xffffffbf) + 0x21;
        if ((uVar8 < 0x21) || (0x4c < uVar8)) {
          uVar8 = (uint)*(ushort *)
                         (&PTR_DAT_ram_00340027_ram_001a9eac +
                         (uint)(cVar3 != '\0') * 0x16 + uVar13 * 0x2c);
        }
        else {
          uVar8 = (uint)*(ushort *)
                         (uVar13 * 0xb0 + (uint)(cVar3 != '\0') * 0x58 + 0x1a9e6a + uVar8 * 2);
        }
      }
    }
  }
  *(uint *)(param_2 + 0xc) = uVar8;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  if ((uVar2 & 1) == 0) {
    if ((*(char *)(*param_1 + 0x7f) != '\0') &&
       ((((*(ushort *)(param_1 + 3) & 0x4000) != 0 || ((*(ushort *)(param_1 + 3) & 8) == 0)) ||
        (*(char *)(*param_1 + 0x80) != '\0')))) {
      *(undefined1 *)(param_2 + 0x1e) = 0x80;
    }
    iVar5 = param_1[0x132];
    iVar10 = *(int *)(iVar5 + 0x24a0);
    uVar13 = *(uint *)(param_2 + 0x10);
    uVar8 = *(uint *)(&DAT_ram_00192a7c + (uint)*(byte *)(iVar10 + uVar11) * 4);
    if (uVar8 <= uVar13) {
      uVar11 = uVar8;
    }
    if (uVar8 > uVar13) {
      uVar11 = uVar13;
    }
    uVar12 = *(uint *)(&DAT_ram_00192a7c +
                      (uint)*(byte *)(iVar10 + (uint)*(byte *)(param_2 + 6)) * 4);
    bVar14 = uVar11 < uVar12;
    if (bVar14) {
      uVar12 = uVar8;
    }
    if (!bVar14 || uVar12 <= uVar13) {
      *(uint *)(param_2 + 0x10) = uVar12;
      uVar13 = uVar12;
    }
    if (*(uint *)(&DAT_ram_001929c0 + (uint)*(byte *)(*(int *)(iVar5 + 0x24a0) + uVar9) * 4) <
        uVar13) {
      uVar13 = *(uint *)(&DAT_ram_001929c0 + (uint)*(byte *)(*(int *)(iVar5 + 0x24a0) + uVar9) * 4);
    }
    *(uint *)(param_2 + 0x10) = uVar13;
    return;
  }
  bVar4 = (&DAT_ram_001a9058)[*(byte *)(param_2 + 7)];
  uVar11 = (uint)bVar4;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar9 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar9 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar9 = 0;
      }
    }
  }
  else {
    uVar9 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if (uVar9 == 0) {
    uVar9 = *(uint *)((int)param_1 + 0x3c2);
    uVar8 = *(uint *)(param_2 + 0x10);
joined_r0x00140b38:
    if ((uVar9 & 0x10) == 0) {
      if (0x1dfff < uVar8) {
        uVar8 = 0x1e000;
      }
      *(uint *)(param_2 + 0x10) = uVar8;
    }
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x10);
    if (*(int *)(uVar9 + 0x38) < 7) {
      uVar9 = *(uint *)((int)param_1 + 0x3c2);
      goto joined_r0x00140b38;
    }
  }
  if (uVar13 < 3) {
    if ((bVar4 & 0x40) == 0) {
      uVar12 = uVar11 & 0xf;
      uVar9 = (int)uVar11 >> 4 & 3;
      iVar10 = uVar9 - 4;
      bVar14 = SBORROW4(uVar9,4);
      if (uVar9 < 4) {
        iVar10 = uVar12 - 10;
        bVar14 = SBORROW4(uVar12,10);
      }
      if (iVar10 < 0 == bVar14) goto LAB_ram_00140ba4;
      if (uVar8 < (uint)*(ushort *)(&DAT_ram_001a87c0 + uVar13 * 0x50 + uVar9 * 0x14 + uVar12 * 2)
                  << 5) goto LAB_ram_00140c38;
      goto LAB_ram_00140be0;
    }
    if (0x2b < (uVar11 & 0xffffffbf)) goto LAB_ram_00140ba4;
    if ((uint)*(ushort *)(&DAT_ram_001a88b0 + uVar13 * 0x58 + (uVar11 & 0xffffffbf) * 2) << 5 <=
        uVar8) goto LAB_ram_00140be0;
  }
  else {
LAB_ram_00140ba4:
    if (0xfff < uVar8) {
LAB_ram_00140be0:
      if (uVar13 < 3) {
        if ((bVar4 & 0x40) == 0) {
          uVar9 = uVar11 & 0xf;
          uVar11 = (int)uVar11 >> 4 & 3;
          iVar10 = uVar11 - 4;
          bVar14 = SBORROW4(uVar11,4);
          if (uVar11 < 4) {
            iVar10 = uVar9 - 10;
            bVar14 = SBORROW4(uVar9,10);
          }
          if (iVar10 < 0 == bVar14) goto LAB_ram_00140c28;
          uVar2 = *(ushort *)(&DAT_ram_001a87c0 + uVar13 * 0x50 + uVar11 * 0x14 + uVar9 * 2);
        }
        else {
          if (0x2b < (uVar11 & 0xffffffbf)) goto LAB_ram_00140c28;
          uVar2 = *(ushort *)(&DAT_ram_001a88b0 + uVar13 * 0x58 + (uVar11 & 0xffffffbf) * 2);
        }
        uVar8 = (uint)uVar2 << 5;
      }
      else {
LAB_ram_00140c28:
        uVar8 = 0x1000;
      }
    }
  }
LAB_ram_00140c38:
  iVar10 = *param_1;
  cVar3 = *(char *)(iVar10 + 0x7f);
  *(uint *)(param_2 + 0x10) = uVar8;
  if ((cVar3 != '\0') &&
     ((((*(ushort *)(param_1 + 3) & 0x4000) != 0 || ((*(ushort *)(param_1 + 3) & 8) == 0)) ||
      (*(char *)(iVar10 + 0x80) != '\0')))) {
    FUN_ram_0013eb7c(param_1,param_2,uVar13);
    uVar8 = *(uint *)(param_2 + 0x10);
  }
  bVar4 = (&DAT_ram_001a9058)[*(byte *)(param_2 + 5)];
  uVar9 = (uint)bVar4;
  uVar11 = uVar8;
  if (uVar13 < 3) {
    if ((bVar4 & 0x40) == 0) {
      uVar7 = uVar9 & 0xf;
      uVar12 = (int)uVar9 >> 4 & 3;
      iVar10 = uVar12 - 4;
      bVar14 = SBORROW4(uVar12,4);
      if (uVar12 < 4) {
        iVar10 = uVar7 - 10;
        bVar14 = SBORROW4(uVar7,10);
      }
      if (iVar10 < 0 == bVar14) goto LAB_ram_00140ce4;
      if (uVar8 < (uint)*(ushort *)(&DAT_ram_001a87c0 + uVar12 * 0x14 + uVar13 * 0x50 + uVar7 * 2)
                  << 5) goto LAB_ram_00140d6c;
      goto LAB_ram_00140d24;
    }
    if (0x2b < (uVar9 & 0xffffffbf)) goto LAB_ram_00140ce4;
    if ((uint)*(ushort *)(&DAT_ram_001a88b0 + uVar13 * 0x58 + (uVar9 & 0xffffffbf) * 2) << 5 <=
        uVar8) goto LAB_ram_00140d24;
  }
  else {
LAB_ram_00140ce4:
    if (0xfff < uVar8) {
LAB_ram_00140d24:
      if (uVar13 < 3) {
        if ((bVar4 & 0x40) == 0) {
          uVar11 = (int)uVar9 >> 4 & 3;
          uVar9 = uVar9 & 0xf;
          iVar10 = uVar11 - 4;
          bVar14 = SBORROW4(uVar11,4);
          if (uVar11 < 4) {
            iVar10 = uVar9 - 10;
            bVar14 = SBORROW4(uVar9,10);
          }
          if (bVar14 == iVar10 < 0) goto LAB_ram_00140d5c;
          uVar2 = *(ushort *)(&DAT_ram_001a87c0 + uVar11 * 0x14 + uVar13 * 0x50 + uVar9 * 2);
        }
        else {
          if (0x2b < (uVar9 & 0xffffffbf)) goto LAB_ram_00140d5c;
          uVar2 = *(ushort *)(&DAT_ram_001a88b0 + uVar13 * 0x58 + (uVar9 & 0xffffffbf) * 2);
        }
        uVar11 = (uint)uVar2 << 5;
      }
      else {
LAB_ram_00140d5c:
        uVar11 = 0x1000;
      }
    }
  }
LAB_ram_00140d6c:
  bVar4 = (&DAT_ram_001a9058)[*(byte *)(param_2 + 6)];
  uVar9 = (uint)bVar4;
  *(uint *)(param_2 + 0x14) = uVar11;
  if (uVar13 < 3) {
    if ((bVar4 & 0x40) == 0) {
      uVar11 = uVar9 & 0xf;
      uVar12 = (int)uVar9 >> 4 & 3;
      iVar10 = uVar12 - 4;
      bVar14 = SBORROW4(uVar12,4);
      if (uVar12 < 4) {
        iVar10 = uVar11 - 10;
        bVar14 = SBORROW4(uVar11,10);
      }
      if (iVar10 < 0 == bVar14) goto LAB_ram_00140df4;
      uVar2 = *(ushort *)(&DAT_ram_001a87c0 + uVar12 * 0x14 + uVar13 * 0x50 + uVar11 * 2);
    }
    else {
      if (0x2b < (uVar9 & 0xffffffbf)) goto LAB_ram_00140df4;
      uVar2 = *(ushort *)(&DAT_ram_001a88b0 + uVar13 * 0x58 + (uVar9 & 0xffffffbf) * 2);
    }
    if (uVar8 < (uint)uVar2 << 5) {
LAB_ram_00140e2c:
      *(uint *)(param_2 + 0x18) = uVar8;
      return;
    }
  }
  else {
LAB_ram_00140df4:
    if (uVar8 < 0x1000) goto LAB_ram_00140e2c;
  }
  if (uVar13 < 3) {
    if ((bVar4 & 0x40) == 0) {
      uVar11 = (int)uVar9 >> 4 & 3;
      uVar9 = uVar9 & 0xf;
      iVar10 = uVar11 - 4;
      bVar14 = SBORROW4(uVar11,4);
      if (uVar11 < 4) {
        iVar10 = uVar9 - 10;
        bVar14 = SBORROW4(uVar9,10);
      }
      if (iVar10 < 0 == bVar14) goto LAB_ram_00140e88;
      uVar2 = *(ushort *)(&DAT_ram_001a87c0 + uVar13 * 0x50 + uVar11 * 0x14 + uVar9 * 2);
    }
    else {
      if (0x2b < (uVar9 & 0xffffffbf)) goto LAB_ram_00140e88;
      uVar2 = *(ushort *)(&DAT_ram_001a88b0 + uVar13 * 0x58 + (uVar9 & 0xffffffbf) * 2);
    }
    iVar10 = (uint)uVar2 << 5;
  }
  else {
LAB_ram_00140e88:
    iVar10 = 0x1000;
  }
  *(int *)(param_2 + 0x18) = iVar10;
  return;
}


