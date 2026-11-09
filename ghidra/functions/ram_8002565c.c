/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:8002565c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80025afc) */

undefined8
FUN_ram_8002565c(int param_1,uint param_2,undefined4 param_3,byte *param_4,int param_5,int param_6,
                int param_7,int param_8,uint param_9)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint local_70 [8];
  int local_50;
  
  if ((DAT_ram_0018c1d8 & 2) == 0) {
    uVar15 = 0;
    uVar4 = param_2;
    goto LAB_ram_80025db0;
  }
  piVar11 = *(int **)(param_1 + 0x3a08);
  iVar9 = *piVar11;
  uVar4 = *(uint *)(param_2 + 8) >> 0x1a;
  if ((uVar4 == 0) || (0x3e < uVar4)) {
    iVar16 = 0;
    iVar6 = iVar9 * 0x39 + 2;
    piVar11[iVar9 * 0x39 + 2] = piVar11[iVar9 * 0x39 + 2] + 1;
  }
  else {
    iVar16 = 1;
    iVar6 = iVar9 * 0x39 + 0x15;
    piVar11[iVar9 * 0x39 + 0x15] = piVar11[iVar9 * 0x39 + 0x15] + 1;
  }
  piVar11 = piVar11 + iVar6;
  if ((*param_4 & 0x8c) == 0x88) {
    if ((param_4[1] & 3) == 3) {
      bVar1 = param_4[0x1e];
    }
    else {
      bVar1 = param_4[0x18];
    }
    if ((bVar1 & 0x80) == 0) goto LAB_ram_8002573c;
    iVar9 = 1;
  }
  else {
LAB_ram_8002573c:
    iVar9 = 0;
  }
  uVar2 = *(undefined1 *)(param_2 + 2);
  piVar11[1] = piVar11[1] + iVar9;
  uVar4 = FUN_ram_0016d584(uVar2);
  if ((uint)piVar11[2] < uVar4) {
    piVar11[2] = uVar4;
  }
  if ((DAT_ram_800261c0 & 1) != 0) {
    DAT_ram_800261c4 = DAT_ram_800261c4 + uVar4;
    DAT_ram_800261c8 = DAT_ram_800261c8 + 1;
  }
  if (param_6 == 0) {
LAB_ram_800257b8:
    uVar15 = uVar4;
    if (0 < (int)uVar4) goto LAB_ram_800257c0;
  }
  else {
    if ((param_5 != 0) && (*(char *)(param_2 + 2) != '\0')) {
      *(char *)(param_6 + 0x66) = (char)uVar4;
      goto LAB_ram_800257b8;
    }
    uVar15 = (uint)*(byte *)(param_6 + 0x66);
    if (*(byte *)(param_6 + 0x66) == 0) goto LAB_ram_800257b8;
LAB_ram_800257c0:
    piVar11[2] = uVar15;
  }
  uVar7 = *(uint *)(param_2 + 4);
  uVar10 = *(uint *)(param_2 + 8);
  uVar13 = (uVar7 & 0x7f00) >> 8;
  uVar14 = (uVar7 & 0x70000) >> 0x10;
  uVar5 = (uVar10 & 0x800000) >> 0x17;
  uVar4 = (uVar7 & 0xc0) >> 6;
  if ((param_6 == 0) || ((param_9 & 1) != 0)) {
    if (uVar13 < 0x4d) {
      if (uVar4 == 3) goto LAB_ram_80025c0c;
      goto LAB_ram_80025d60;
    }
LAB_ram_80025d78:
    DAT_ram_8003711c = DAT_ram_8003711c + 1;
  }
  else {
    if ((param_7 == 8) && (param_8 != 0x40 && param_8 != 0xc0)) {
      if (uVar4 == 3) {
        bVar3 = true;
        goto LAB_ram_80025850;
      }
      bVar3 = true;
joined_r0x800258c4:
      if ((uVar4 != 1) && (uVar4 != 2)) {
        uVar8 = 1;
        iVar9 = iVar16 * 0x118 + param_6;
        if (!bVar3) goto LAB_ram_80025a20;
        uVar5 = (uVar14 & 3) << 10 | (uVar7 & 0x3f) << 0x10;
        goto LAB_ram_800259a4;
      }
      if (uVar13 < 0x4e) {
        if ((uVar13 & 1) == 0) {
          uVar8 = ((int)(uint)(byte)(&DAT_ram_001a66bc)[(int)(uVar13 + 1) >> 1] >> 4) + 1;
        }
        else {
          uVar8 = ((byte)(&DAT_ram_001a66bc)[(int)uVar13 >> 1] & 0xf) + 1;
        }
      }
      else {
        uVar8 = 1;
      }
      iVar9 = iVar16 * 0x118 + param_6;
      if (bVar3) {
        *(uint *)(iVar9 + 0x214) =
             (uVar14 & 3) << 10 |
             (uint)(ushort)(&DAT_ram_001a925c)[uVar13 + uVar5 * 0x4d + uVar14 * 0x9a] << 0x10 |
             uVar13 | 0x80;
      }
    }
    else {
      if (uVar4 != 3) {
        bVar3 = false;
        goto joined_r0x800258c4;
      }
      bVar3 = false;
LAB_ram_80025850:
      uVar8 = ((*(uint *)(param_2 + 0x18) & 0x1c00) >> 10) + 1;
      iVar9 = iVar16 * 0x118 + param_6;
      if (bVar3) {
        if (uVar13 < 10) {
          uVar4 = uVar14 * 0x140 + uVar5 * 0xa0 + uVar8 * 0x14 + -0x14 + uVar13 * 2;
          uVar5 = (uVar14 & 3) << 10 |
                  (uint)*(ushort *)(&DAT_ram_001a972c + uVar4) << 0x10 | uVar8 * 0x1000 | uVar13 |
                  0x100;
LAB_ram_800259a4:
          *(uint *)(iVar9 + 0x214) = uVar5;
        }
        else if ((0x20 < uVar13) && (uVar13 < 0x4d)) {
          uVar4 = (uVar14 & 3) << 10 |
                  uVar8 * 0x1000 | uVar13 |
                  (uint)*(ushort *)(uVar5 * 0x58 + uVar14 * 0xb0 + uVar13 * 2 + 0x1a9e6a) << 0x10 |
                  0x100;
          *(uint *)(iVar9 + 0x214) = uVar4;
        }
      }
    }
LAB_ram_80025a20:
    if (DAT_ram_0018c150 == 0) {
LAB_ram_80025a30:
      if ((DAT_ram_0018c1d4 & 1) == 0) goto LAB_ram_80025a40;
LAB_ram_80025a68:
      if ((uVar10 >> 0x1a == 0) || (0x3e < uVar10 >> 0x1a)) {
        if (param_6 != 0) {
          iVar9 = 0;
          goto LAB_ram_80025a9c;
        }
      }
      else if (param_6 != 0) {
        iVar9 = 1;
LAB_ram_80025a9c:
        iVar6 = FUN_ram_00137370(param_2,uVar15,param_1);
        piVar11[0xc] = iVar6;
        param_6 = param_6 + iVar9 * 0x118;
        *(int *)(param_6 + 0x224) = iVar6;
        LP_START = 0x80025ac4;
        LP_END = 0x80025afc;
        uVar4 = (uint)*(byte *)(param_2 + 0x10);
        uVar15 = (uint)*(byte *)(param_2 + 0x14);
        if (uVar14 == 1) {
          uVar4 = uVar4 * 2;
          uVar15 = uVar15 * 2;
        }
        else if (uVar14 == 2) {
          uVar4 = uVar4 << 2;
          uVar15 = uVar15 << 2;
        }
        *(uint *)(param_6 + 0x130) = uVar4;
        *(uint *)(param_6 + 0x168) = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (DAT_ram_0018c150 == 1) goto LAB_ram_80025a68;
      if (DAT_ram_0018c150 != 2) goto LAB_ram_80025a30;
LAB_ram_80025a40:
      if (param_6 != 0) {
        if ((uVar10 >> 0x1a == 0) || (0x3e < uVar10 >> 0x1a)) {
          iVar6 = 0;
        }
        else {
          iVar6 = 1;
        }
        if ((uVar8 != 0) && (local_70[0] = (uint)*(ushort *)(param_2 + 0x10), 1 < uVar8)) {
          local_70[1] = (uint)*(ushort *)(param_2 + 0x12);
        }
        if (2 < uVar8) {
          local_70[2] = (uint)*(ushort *)(param_2 + 0x14);
        }
        if (uVar8 < 4) {
          do {
            puVar12 = local_70 + uVar8;
            uVar8 = uVar8 + 1;
            *puVar12 = 0xffffffff;
          } while ((int)uVar8 < 4);
        }
        else {
          local_70[3] = (uint)*(ushort *)(param_2 + 0x16);
        }
        iVar6 = iVar6 * 0x118 + param_6;
        *(uint *)(iVar6 + 0x1a0) = local_70[0];
        *(uint *)(iVar6 + 0x1a4) = local_70[1];
        *(uint *)(iVar6 + 0x1a8) = local_70[2];
        *(uint *)(iVar6 + 0x1ac) = local_70[3];
        *(uint *)(iVar6 + 0x210) = *(uint *)(param_2 + 0xc) >> 0x10;
      }
    }
    *(int *)(iVar9 + 0x218) = *(int *)(iVar9 + 0x218) + 1;
    if (0x4c < uVar13) goto LAB_ram_80025d78;
    if ((*(uint *)(param_2 + 4) & 0xc0) == 0xc0) {
LAB_ram_80025c0c:
      if (9 < uVar13) goto LAB_ram_80025d60;
      iVar9 = (uVar13 + ((*(uint *)(param_2 + 0x18) & 0x1c00) >> 10) * 10) * 4;
      *(int *)(&DAT_ram_80037520 + iVar9) = *(int *)(&DAT_ram_80037520 + iVar9) + 1;
    }
    else {
LAB_ram_80025d60:
      *(int *)(&DAT_ram_800373ec + uVar13 * 4) = *(int *)(&DAT_ram_800373ec + uVar13 * 4) + 1;
    }
  }
  if (((param_9 & 2) == 0) || (param_6 == 0)) goto LAB_ram_80025db0;
  uVar4 = FUN_ram_00137370(param_2,uVar15,param_1);
  local_70[0] = (uint)*(byte *)(param_2 + 0x10) * 2;
  if (uVar14 != 1) {
    local_70[0] = (uint)*(byte *)(param_2 + 0x10);
  }
  local_70[1] = (uint)*(byte *)(param_2 + 0x11) * 2;
  if (uVar14 != 1) {
    local_70[1] = (uint)*(byte *)(param_2 + 0x11);
  }
  local_70[2] = (uint)*(byte *)(param_2 + 0x12) * 2;
  if (uVar14 != 1) {
    local_70[2] = (uint)*(byte *)(param_2 + 0x12);
  }
  local_70[3] = (uint)*(byte *)(param_2 + 0x13) * 2;
  if (uVar14 != 1) {
    local_70[3] = (uint)*(byte *)(param_2 + 0x13);
  }
  uVar15 = (int)(uVar4 & 0x3f0000) >> 0x10;
  FUN_ram_00137440(local_70,uVar4 & 0xff,(int)(uVar4 & 0xff00) >> 8,
                   ((int)(uVar15 & 0x38) >> 3) - (uVar15 & 7));
  if (((((param_9 & 4) != 0) && (iVar9 = *(int *)(param_6 + 0x388) + 0xb4, iVar9 != 0xb4)) &&
      (iVar9 = *(int *)(iVar9 + iVar16 * 0xac), iVar9 < 0)) && (-900 < iVar9)) {
    local_50 = iVar9;
  }
  uVar4 = -(local_50 + -5 >> 0x1f);
  iVar9 = (local_50 + -5) / 10;
  if (iVar9 < -0x14) {
    if (-0x5a < iVar9) goto LAB_ram_80025d9c;
  }
  else {
    iVar9 = -0x14;
LAB_ram_80025d9c:
    uVar15 = 0x46 - (iVar9 + 0x5a);
    if (uVar15 != 0x46) goto LAB_ram_80025db0;
  }
  uVar15 = 0x45;
LAB_ram_80025db0:
  return CONCAT44(uVar4,uVar15);
}


