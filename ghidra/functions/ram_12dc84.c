/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012dc84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0012dc84(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined3 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar17 = *(int *)(param_1 + 0x3b20);
  local_40 = 0;
  local_3c = 0;
  iVar9 = FUN_ram_0011bca8(param_2);
  bVar5 = *(byte *)(param_2 + 0x688);
  uVar14 = *(uint *)(param_1 + 0x28);
  uVar6 = *(undefined1 *)(param_1 + 0x474);
  uVar18 = (int)(uint)*(byte *)(param_3 + 0x11) >> 4;
  puVar10 = (undefined4 *)FUN_ram_0010914c(param_1,1,0x200);
  if (puVar10 == (undefined4 *)0x0) {
    uVar11 = 0xfffffff4;
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x3b20);
    puVar10[0x14] = 4;
    puVar12 = (undefined4 *)FUN_ram_000f9640(uVar11,puVar10 + 1,0x200);
    *puVar10 = puVar12;
    if (puVar12 == (undefined4 *)0x0) {
      FUN_ram_00109920(param_1,puVar10);
      uVar11 = 0xfffffff0;
    }
    else {
      bVar7 = *(byte *)(param_2 + 0x458);
      puVar10[5] = param_2;
      FUN_ram_000eea80(puVar12,0,0x6c);
      FUN_ram_00129fc8(param_1,puVar10[2]);
      *(undefined1 *)(puVar10 + 0x12) = 3;
      bVar1 = *(byte *)(param_1 + 0x39db);
      *puVar12 = 0x1c081120;
      puVar12[1] = 0x1c;
      puVar12[2] = 0x1f0000;
      puVar12[3] = &DAT_ram_0018cd00;
      puVar12[4] = 0;
      puVar12[5] = 0x1c;
      puVar12[6] = (bVar1 & 0xf) << 8 | (*(byte *)(param_1 + 0x39da) & 0xf) << 4 |
                   *(byte *)(param_1 + 0x39d9) & 0xf;
      uVar13 = puVar10[2];
      puVar12[7] = 0x400;
      if ((uVar13 < 0x80000000) || (0x8007ffff < uVar13)) {
        if (uVar13 < 0x8000000) {
          uVar16 = uVar13 + 0x40000000;
        }
        else {
          uVar16 = uVar13;
          if (uVar13 < 0xc0000000) {
            uVar16 = 0;
          }
        }
      }
      else {
        uVar16 = uVar13 + 0xe0000000;
      }
      if (uVar16 == 0) {
        if ((uVar13 < 0x60000000) || (0x6007ffff < uVar13)) {
          if ((uVar13 < 0x40000000) || (0x47ffffff < uVar13)) {
            if (uVar13 < 0xc0000000) {
              uVar13 = 0;
            }
          }
          else {
            uVar13 = uVar13 + 0xc0000000;
          }
        }
        else {
          uVar13 = uVar13 + 0x20000000;
        }
      }
      uVar8 = *(undefined3 *)(param_3 + 10);
      puVar12[8] = uVar13;
      uVar2 = *(undefined1 *)(param_3 + 0xd);
      puVar12[10] = (uint)*(ushort *)(param_3 + 0xe);
      uVar3 = *(undefined1 *)(param_2 + 0x67f);
      puVar12[9] = CONCAT13(uVar2,uVar8);
      uVar11 = FUN_ram_000e433c(puVar12,iVar17,1,1,0,uVar6,(bVar7 & 8) != 0,0x94,&local_3c,uVar3,
                                uVar14 >> 0x12 & 1);
      puVar12[0xb] = uVar11;
      iVar15 = *(int *)(iVar17 + 0x1fc);
      puVar12[0xc] = (iVar9 + (uint)bVar5 & 7) << 8 |
                     (uVar18 & 0xc) << 0x17 | 0x180000 | (uVar18 & 3) << 0x11 | 200;
      puVar12[0xd] = (uint)*(ushort *)(iVar17 + 0x1c4) | iVar15 << 0x10;
      FUN_ram_0039fe00(auStack_44,param_3 + 0x10,4);
      FUN_ram_0039fe00(&DAT_ram_0018cd04,(undefined3 *)(param_3 + 10),6);
      FUN_ram_0039fe00(&DAT_ram_0018cd10,auStack_44,4);
      FUN_ram_0039fe00(&DAT_ram_0018cd14,&local_40,4);
      FUN_ram_0039fe00(&DAT_ram_0018cd18,&local_40,4);
      iVar9 = FUN_ram_0012dbc8(param_1,*(undefined1 *)(puVar10 + 0x12),0);
      if (iVar9 == 0) {
        FUN_ram_00109920(param_1,puVar10);
        uVar11 = 0;
      }
      else {
        FUN_ram_000ed114(&DAT_ram_0018cd00,0x20);
        iVar15 = param_1 + 0x3dbc;
        iVar9 = (uint)*(byte *)(puVar10 + 0x12) * 0x38;
        iVar17 = iVar15 + iVar9;
        FUN_ram_000e7d50(iVar17 + 4);
        cVar4 = *(char *)(iVar15 + iVar9 + 0x1e);
        puVar10[0x3b] = 0;
        *(char *)(iVar17 + 0x1e) = cVar4 + '\x01';
        **(undefined4 **)(iVar15 + iVar9 + 0x10) = puVar10;
        *(undefined4 **)(iVar17 + 0x10) = puVar10 + 0x3b;
        FUN_ram_000e7da8(iVar17 + 4);
        iVar9 = *(int *)(param_2 + 0x4b0);
        iVar17 = *(int *)(param_2 + 0x4b4);
        *(undefined1 *)(puVar10 + 0x13) = 0;
        *(int *)(param_2 + 0x4b0) = iVar9 + 1;
        *(int *)(param_2 + 0x4b4) = iVar17 + 1;
        uVar11 = *puVar10;
        iVar17 = *(int *)(param_1 + 0x3b20);
        sync();
        iVar9 = *(int *)(iVar17 + 0xc);
        if ((*(uint *)(iVar9 + (uint)*(byte *)(puVar10 + 0x12) * 4 + 0x400) & 0xf) == 0) {
          DAT_ram_8003787c = DAT_ram_8003787c + 1;
          iVar9 = *(int *)(iVar17 + 0xc);
        }
        iVar15 = (uint)*(byte *)(puVar10 + 0x12) * 0x20;
        *(undefined4 *)(iVar9 + iVar15) = 1;
        *(undefined4 *)(*(int *)(iVar17 + 0xc) + iVar15) = uVar11;
        FUN_ram_0012d170(param_1,3);
        uVar14 = STATUS32;
        if ((uVar14 & 2) != 0) {
          STATUS32 = uVar14 & 0xfffffffd;
        }
        puVar10[0x16] = puVar10[0x16] + 1;
        STATUS32 = uVar14;
        uVar11 = 1;
        DAT_ram_80037860 = DAT_ram_80037860 + 1;
      }
    }
  }
  return uVar11;
}


