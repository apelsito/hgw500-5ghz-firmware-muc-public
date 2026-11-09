/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102138 */

/* WARNING: Removing unreachable block (ram,0x00102250) */
/* WARNING: Removing unreachable block (ram,0x0010220a) */
/* WARNING: Removing unreachable block (ram,0x00102218) */
/* WARNING: Removing unreachable block (ram,0x0010221a) */
/* WARNING: Removing unreachable block (ram,0x0010220e) */
/* WARNING: Removing unreachable block (ram,0x00102214) */
/* WARNING: Removing unreachable block (ram,0x0010221e) */

undefined4
FUN_ram_00102138(int param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6,
                uint *param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  bool bVar17;
  
  *param_4 = -1;
  *param_5 = 0;
  *param_6 = 0;
  if (((param_3 == 0) && (-1 < param_2)) && (param_2 < 4)) {
    iVar3 = *(int *)(param_1 + 0xe8 + param_2 * 4);
    *param_4 = iVar3;
    bVar15 = *(byte *)(param_1 + 0x10 + iVar3 * 0x10 + 1);
    pbVar11 = (byte *)(param_1 + 0x10 + iVar3 * 0x10);
    if ((DAT_ram_0018c024 == 0) || (iVar3 != 1)) {
      bVar15 = bVar15 | 1;
    }
    else {
      bVar15 = bVar15 & 0xfe;
    }
    uVar7 = (uint)*pbVar11;
    pbVar11[1] = bVar15;
    uVar16 = *(uint *)(pbVar11 + 8);
    *param_5 = uVar7;
    uVar4 = (uint)*(ushort *)(pbVar11 + 2);
    *param_6 = uVar16;
    if ((uVar7 == 0) || (0x3e < uVar4)) {
      if (uVar7 == 0) {
        uVar7 = FUN_ram_000f5e6c(uVar4,0);
      }
      else {
        uVar6 = (LZCOUNT(uVar7) + -1) - (LZCOUNT(uVar4) + -1);
        bVar17 = (int)uVar6 < 0;
        if (bVar17) {
          uVar6 = 0;
        }
        uVar5 = uVar6 + 1;
        if (!bVar17) {
          uVar7 = uVar7 << (uVar6 & 0x1f);
        }
        uVar6 = 0;
        LP_START = 0x102238;
        LP_END = 0x102248;
        uVar13 = uVar4;
        do {
          uVar14 = uVar13 - uVar7;
          if (uVar13 < uVar7) {
            uVar14 = uVar14 + uVar7;
          }
          else {
            uVar6 = uVar6 | 1 << (uVar5 & 0x1f);
          }
          uVar7 = uVar7 >> 1;
          uVar5 = uVar5 - 1;
          uVar13 = uVar14;
        } while (uVar5 != 0);
        uVar7 = uVar6 >> 1 | uVar6 << 0x1f;
      }
      *param_7 = uVar7;
    }
    else {
      uVar5 = 0;
      uVar6 = uVar4;
      do {
        uVar13 = uVar6 - uVar7;
        bVar17 = uVar7 <= uVar6;
        if (bVar17) {
          uVar5 = uVar5 + 1;
        }
        uVar6 = uVar13;
      } while (bVar17 && uVar13 != 0);
      *param_7 = uVar5;
    }
    iVar3 = *param_4;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + *param_4 * 4 + 0x400) = 0x40000000;
    uVar7 = uVar16 & 0xffff;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar3 * 0x10 + 0x308) = uVar7;
    *(uint *)(*(int *)(param_1 + 0xc) + *param_4 * 0x10 + 0x30c) = uVar7;
    *(uint *)(*(int *)(param_1 + 0xc) + *param_4 * 0x10 + 0x304) = (uVar4 + uVar16) - 4 & 0xffff;
    iVar3 = *param_4;
    *(uint *)(*(int *)(param_1 + 0xc) + *param_4 * 0x10 + 0x300) = uVar7 | 0x80000000;
    iVar12 = iVar3 * 0x20;
    if (iVar3 < 2) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar12) = 0xacacacac;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 0x20 + 4) = 0xeeeeeeee;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar12 + 8) = 0xacacacac;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 0x20 + 0xc) = 0xeeeeeeee;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar12 + 0x10) = 0xacacacac;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 0x20 + 0x14) = 0xeeeeeeee;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar12 + 0x18) = 0xacacacac;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 0x20 + 0x1c) = 0xeeeeeeee;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + 0x400) = 0x80000000;
    bVar15 = *(byte *)(param_1 + 0x46c + iVar3 * 0x10 + 1);
    iVar8 = param_1 + 0x46c + iVar3 * 0x10;
    if ((DAT_ram_0018c024 == 0) || (iVar3 != 1)) {
      bVar15 = bVar15 | 1;
    }
    else {
      bVar15 = bVar15 & 0xfe;
    }
    uVar1 = *(ushort *)(iVar8 + 2);
    uVar4 = *(uint *)(iVar8 + 8);
    iVar9 = iVar3 * 4 + 0x100400;
    iVar10 = *(int *)(param_1 + 0xc);
    *(byte *)(iVar8 + 1) = bVar15;
    *(undefined4 *)(iVar10 + iVar9) = 0x40000000;
    iVar8 = iVar3 * 0x10;
    uVar7 = uVar4 & 0xffff;
    *(uint *)(iVar8 + 0x100308 + *(int *)(param_1 + 0xc)) = uVar7;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar8 + 0x10030c) = uVar7;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar8 + 0x100304) = (uVar1 + uVar4) - 4 & 0xffff;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar8 + 0x100300) = uVar7 | 0x80000000;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x100000 + iVar12) = 0xacacacac;
    *(undefined4 *)(iVar3 * 0x20 + *(int *)(param_1 + 0xc) + 0x100004) = 0xeeeeeeee;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar12 + 0x100008) = 0xacacacac;
    *(undefined4 *)(iVar3 * 0x20 + *(int *)(param_1 + 0xc) + 0x10000c) = 0xeeeeeeee;
    *(undefined4 *)(iVar9 + *(int *)(param_1 + 0xc)) = 0x80000000;
    uVar2 = 0;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}


