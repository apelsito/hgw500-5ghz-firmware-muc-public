/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013cb9c */

void FUN_ram_0013cb9c(int param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  bool bVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar6 = *(ushort *)(param_1 + 0xc);
  iVar13 = *(int *)(**(int **)(param_1 + 4) + 0x1c);
  uVar4 = *(undefined1 *)(iVar13 + 0x474);
  uVar15 = 0;
  local_4c = 0;
  uVar14 = 3;
  piVar16 = (int *)(param_1 + 0x4f4);
  bVar5 = *(byte *)(*(int *)(iVar13 + 0x387c) + 8) < 0xf;
  uVar12 = *(uint *)(iVar13 + 0x28);
  uVar20 = DAT_ram_0018c0f4;
  if (DAT_ram_0018c0f0 == 0) {
    cVar11 = *(char *)((int)param_3 + 0x1f);
    if (cVar11 == '\x02') {
      if ((*(uint *)(param_1 + 0x3c2) & 0x20) == 0) goto LAB_ram_0013cc94;
    }
    else if ((cVar11 != '\x01') || ((*(ushort *)(param_1 + 0x6e) & 0x40) == 0)) {
LAB_ram_0013cc94:
      if ((cVar11 != '\0') || ((*(ushort *)(param_1 + 0x6e) & 0x20) == 0)) {
        uVar20 = 0;
        goto LAB_ram_0013ccb0;
      }
    }
    uVar20 = (uint)*(byte *)(param_1 + 0x682);
  }
LAB_ram_0013ccb0:
  if (DAT_ram_0018c0ec == 0) {
    if (DAT_ram_0018c0e8 == 0) {
      bVar17 = false;
      goto LAB_ram_0013cd38;
    }
    bVar17 = false;
    if ((*(ushort *)(param_1 + 0xc) & 0x4000) != 0) goto LAB_ram_0013cd48;
LAB_ram_0013cd78:
    if ((*(ushort *)(param_1 + 0x6e) & 0x80) == 0) goto LAB_ram_0013cd64;
LAB_ram_0013cd80:
    uVar18 = *(undefined1 *)(param_1 + 0x71);
  }
  else {
    if ((*(ushort *)(param_1 + 0xc) & 0x4000) == 0) {
      if ((*(ushort *)(param_1 + 0x6e) & 1) == 0) {
        bVar17 = false;
        if (DAT_ram_0018c0e8 != 0) {
          if ((*(ushort *)(param_1 + 0x6e) & 0x80) != 0) goto LAB_ram_0013cd80;
          goto LAB_ram_0013cd64;
        }
      }
      else {
        bVar17 = true;
        if (DAT_ram_0018c0e8 != 0) goto LAB_ram_0013cd78;
      }
    }
    else {
      bVar17 = (*(uint *)(param_1 + 0x3c2) & 0x10) != 0;
      if (DAT_ram_0018c0e8 != 0) {
LAB_ram_0013cd48:
        if ((*(uint *)(param_1 + 0x3c2) & 0x80) == 0) {
LAB_ram_0013cd64:
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined1 *)(param_1 + 0x3ce);
        }
        goto LAB_ram_0013cd84;
      }
    }
LAB_ram_0013cd38:
    uVar18 = 0;
  }
LAB_ram_0013cd84:
  iVar7 = FUN_ram_0013cad0(param_1,iVar13);
  bVar1 = *(byte *)(param_1 + 0x458);
  cVar11 = *(char *)(param_1 + 0x4e8);
  if (iVar7 == 0) {
    if ((bVar5) && (DAT_ram_8002c8e9 != '\0')) {
      uVar19 = 0;
      goto LAB_ram_0013cdf0;
    }
    uVar19 = 0;
  }
  else {
    uVar19 = 1;
    *param_3 = *param_3 | 4;
    if ((bVar5) && (DAT_ram_8002c8e9 != '\0')) {
LAB_ram_0013cdf0:
      *param_3 = *param_3 | 0x100;
    }
  }
  uVar3 = *(ushort *)(param_1 + 0xc);
  if ((bVar1 & 8) == 0) {
    if ((DAT_ram_0018c114 != 1) && (uVar15 = 0, cVar11 != '\x01')) goto LAB_ram_0013cea0;
LAB_ram_0013ce30:
    iVar7 = *(int *)(param_1 + 0xd28);
    if ((cVar11 != '\x03') || (iVar7 == 0)) goto LAB_ram_0013ceb0;
    uVar10 = *(uint *)(param_1 + 0x408);
    iVar8 = *(int *)(param_1 + 0x4ec);
    piVar16 = &local_48;
    if (*(uint *)(param_1 + 0xd7c) <= uVar10) {
      uVar10 = *(uint *)(param_1 + 0xd7c);
    }
    cVar11 = *(char *)((int)param_3 + 0x1f);
    cVar2 = *(char *)(param_1 + 0x4ea);
    uVar10 = uVar10 & 0xff;
    if (cVar11 == '\x01') {
      if (uVar10 != 2) goto LAB_ram_0013cf5c;
      if (cVar2 == '\x01') {
        local_48 = iVar8 + 0x400;
        local_44 = iVar8 + 0xf00;
        uVar14 = 1;
      }
      else {
        local_48 = iVar8 + 0x200;
        local_44 = iVar8 + 0x780;
        uVar14 = 1;
      }
    }
    else if ((cVar11 == '\0') && (uVar10 != 0)) {
      if (uVar10 == 2) {
        if (cVar2 == '\x01') {
          local_44 = iVar8 + 0x1300;
          uVar14 = 1;
          local_48 = iVar8 + 0x600;
        }
        else {
          local_44 = iVar8 + 0x980;
          uVar14 = 1;
          local_48 = iVar8 + 0x300;
        }
      }
      else {
        local_44 = iVar8 + 0x700;
        uVar14 = 1;
        local_48 = iVar8 + 0x200;
      }
    }
    else {
LAB_ram_0013cf5c:
      if (uVar10 == 2) {
        if (cVar2 == '\x01') {
          local_44 = iVar8 + 0x700;
          local_40 = iVar8 + 0x1500;
          local_3c = iVar8 + 0x2100;
        }
        else {
          local_44 = iVar8 + 0x380;
          local_40 = iVar8 + 0xa80;
          local_3c = iVar8 + 0x1080;
        }
      }
      else {
        local_44 = iVar8 + 0x300;
        local_40 = iVar8 + 0x900;
        local_3c = iVar8 + 0xf00;
      }
      uVar14 = 3;
      local_48 = iVar8;
    }
    uVar9 = 0;
    if (iVar7 == 0 && iVar8 == 0) goto LAB_ram_0013cffc;
  }
  else {
    uVar15 = 1;
    if (DAT_ram_0018c114 == 1 || cVar11 == '\x01') goto LAB_ram_0013ce30;
LAB_ram_0013cea0:
    FUN_ram_0011bdb8(param_1);
    iVar7 = *(int *)(param_1 + 0xd28);
LAB_ram_0013ceb0:
    cVar11 = *(char *)((int)param_3 + 0x1f);
    uVar9 = 0;
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x4ec) == 0)) goto LAB_ram_0013cffc;
  }
  uVar9 = 0;
  if (*(char *)(param_1 + 0x4eb) != '\0') {
    uVar9 = 1;
  }
LAB_ram_0013cffc:
  FUN_ram_000e3c5c(param_2,*(undefined4 *)(iVar13 + 0x3b20),0,(int)param_3 + 3,param_4,1,piVar16,
                   uVar9,uVar14,(uVar6 >> 3 ^ 1) & 1,cVar11,uVar4,uVar20 & 0xff,bVar17,uVar18,uVar19
                   ,uVar15,8,&local_4c,uVar3 >> 0xe & 1,*(undefined1 *)(param_1 + 0x67f),
                   uVar12 >> 0x12 & 1);
  return;
}


