/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001027b0 */

/* WARNING: Removing unreachable block (ram,0x00102ac0) */

void FUN_ram_001027b0(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  uVar5 = *param_2;
  *(char *)(param_3 + 1) = (char)((uVar5 & 0xf0) >> 4);
  uVar3 = uVar5 & 0x1000;
  uVar2 = uVar5 & 0x2000;
  uVar1 = uVar5 & 0x4000;
  uVar4 = uVar5 & 0x8000;
  uVar7 = uVar5 & 0x10000;
  if ((uVar5 & 0x100) == 0) {
    if ((uVar5 & 0x400) == 0) {
      if (uVar3 == 0) {
        if (uVar2 != 0) {
          uVar2 = 0;
          goto LAB_ram_001028cc;
        }
        uVar2 = 0;
      }
      else {
        if (uVar2 != 0) {
          uVar2 = 2;
          goto LAB_ram_001028ac;
        }
        uVar2 = 2;
      }
    }
    else if (uVar3 == 0) {
      if (uVar2 != 0) {
        uVar2 = 0x80;
        goto LAB_ram_001028cc;
      }
      uVar2 = 0x80;
    }
    else {
      if (uVar2 != 0) {
        uVar2 = 0x82;
        goto LAB_ram_001028ac;
      }
      uVar2 = 0x82;
    }
LAB_ram_001028b8:
    if (uVar1 == 0) goto LAB_ram_001028f0;
    uVar2 = uVar2 | 0x20;
joined_r0x00102920:
    if (uVar4 == 0) goto LAB_ram_0010292c;
LAB_ram_0010293c:
    uVar1 = uVar2 | 0x40;
    if (uVar7 != 0) {
      uVar1 = uVar2 | 0x2040;
      goto joined_r0x0010296c;
    }
joined_r0x00102948:
    if ((uVar5 & 0x20000) != 0) goto LAB_ram_00102970;
LAB_ram_00102980:
    uVar2 = 0;
    if ((uVar5 & 0x40000) == 0) goto LAB_ram_00102984;
  }
  else {
    if ((uVar5 & 0x400) != 0) {
      if (uVar3 == 0) {
        if (uVar2 != 0) {
          uVar2 = 0x180;
          goto LAB_ram_001028cc;
        }
        uVar2 = 0x180;
      }
      else {
        if (uVar2 != 0) {
          uVar2 = 0x182;
          goto LAB_ram_001028ac;
        }
        uVar2 = 0x182;
      }
      goto LAB_ram_001028b8;
    }
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        uVar2 = 0x100;
        goto LAB_ram_001028b8;
      }
      uVar2 = 0x100;
LAB_ram_001028cc:
      if (uVar1 == 0) goto LAB_ram_001028ec;
      uVar2 = uVar2 | 0x1020;
      if (uVar4 != 0) goto LAB_ram_0010293c;
      goto LAB_ram_0010292c;
    }
    if (uVar2 == 0) {
      uVar2 = 0x102;
      goto LAB_ram_001028b8;
    }
    uVar2 = 0x102;
LAB_ram_001028ac:
    if (uVar1 != 0) {
      uVar2 = uVar2 | 0x1020;
      goto joined_r0x00102920;
    }
LAB_ram_001028ec:
    uVar2 = uVar2 | 0x1000;
LAB_ram_001028f0:
    if (uVar4 == 0) {
LAB_ram_0010292c:
      uVar1 = uVar2;
      if (uVar7 != 0) {
        uVar1 = uVar2 | 0x2000;
        goto joined_r0x00102948;
      }
    }
    else {
      uVar1 = uVar2 | 0x40;
      if (uVar7 != 0) {
        uVar1 = uVar2 | 0x2040;
      }
    }
joined_r0x0010296c:
    if ((uVar5 & 0x20000) == 0) goto LAB_ram_00102980;
LAB_ram_00102970:
    uVar1 = uVar1 | 4;
    if ((uVar5 & 0x40000) == 0) {
LAB_ram_00102984:
      uVar2 = 0x4000;
    }
    else {
      uVar2 = 0;
    }
  }
  *param_3 = uVar2 | uVar1;
  uVar3 = param_2[1];
  *(char *)((int)param_3 + 6) = (char)(uVar5 >> 0x18);
  *(short *)(param_3 + 5) = (short)uVar3;
  uVar4 = param_2[2];
  *(char *)(param_3 + 2) = (char)(uVar3 >> 0x16);
  param_3[6] = uVar4;
  uVar3 = param_2[6];
  *(byte *)((int)param_3 + 0x21) = (byte)uVar3 & 0xf;
  *(char *)((int)param_3 + 0x22) = (char)((uVar3 & 0xf0) >> 4);
  *(byte *)((int)param_3 + 0x23) = (byte)(uVar3 >> 8) & 0xf;
  *(char *)(param_3 + 9) = (char)((uVar3 & 0x7f000) >> 0xc);
  if ((uVar3 & 0x800000) == 0) {
    uVar4 = 0;
    if ((uVar3 & 0x1000000) == 0) {
      uVar5 = 0;
      goto LAB_ram_00102a3c;
    }
  }
  else {
    if ((uVar3 & 0x1000000) == 0) {
      uVar5 = 0;
      uVar4 = 0x800;
      goto LAB_ram_00102a3c;
    }
    uVar4 = 0x800;
  }
  uVar5 = 8;
LAB_ram_00102a3c:
  uVar2 = uVar2 | uVar1 | uVar4 | uVar5;
  *param_3 = uVar2;
  uVar1 = param_2[3];
  *(byte *)((int)param_3 + 0x26) = ((byte)(uVar3 >> 0x18) & 0xe) >> 1;
  param_3[10] = uVar1;
  uVar1 = param_2[5];
  param_3[0xb] = param_2[4];
  param_3[0xc] = (uint)(ushort)uVar1;
  uVar1 = param_2[7];
  *(short *)((int)param_3 + 0x16) = (short)(param_2[5] >> 0x10);
  param_3[7] = uVar1;
  if (uVar1 != 0) {
    *param_3 = uVar2 | 0x800;
  }
  puVar8 = (uint *)param_2[8];
  uVar1 = param_2[9];
  param_3[0x12] = (uint)puVar8;
  *(char *)(param_3 + 0xd) = (char)uVar1;
  *(char *)((int)param_3 + 0x35) = (char)(uVar1 >> 8);
  *(char *)((int)param_3 + 0x36) = (char)(uVar1 >> 0x10);
  puVar6 = (uint *)param_2[10];
  *(char *)((int)param_3 + 0x37) = (char)(uVar1 >> 0x18);
  *(char *)(param_3 + 0xe) = (char)puVar6;
  *(char *)((int)param_3 + 0x39) = (char)((uint)puVar6 >> 8);
  uVar2 = *param_2;
  uVar1 = (*puVar8 & 0xf00) >> 8;
  *(byte *)((int)param_3 + 0x46) = (byte)(param_2[0xc] >> 8) & 7;
  if ((uVar2 & 0x100) != 0) {
    puVar6 = (uint *)param_2[0xb];
  }
  iVar9 = 4;
  LP_START = 0x102b50;
  LP_END = 0x102bc8;
  do {
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar1 = uVar1 - ((uVar2 & 0xf0000) >> 0x10) & 0xff;
    *(char *)((int)param_3 + 0x3f) = (char)((uVar2 & 0x600) >> 9);
    if (((uVar2 & 0x100) == 0 && (uVar3 & 0x8000) == 0) && (7 < (uVar2 & 0x7f))) {
      *(undefined1 *)((int)param_3 + 0x47) = 1;
      if (uVar1 == 0) {
        return;
      }
    }
    else {
      *(undefined1 *)((int)param_3 + 0x47) = 0;
      if (uVar1 == 0) {
        return;
      }
    }
    puVar6 = puVar6 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}


