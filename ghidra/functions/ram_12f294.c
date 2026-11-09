/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012f294 */

void FUN_ram_0012f294(int param_1,int param_2,undefined4 *param_3,int param_4,undefined1 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  
  puVar10 = (undefined4 *)*param_3;
  iVar12 = *(int *)(param_1 + 0x3b20);
  uVar2 = *(undefined1 *)(param_1 + 0x474);
  FUN_ram_000eea80(puVar10,0,0x6c);
  FUN_ram_00129fc8(param_1,param_3[2]);
  puVar5 = (undefined4 *)param_3[2];
  *(undefined1 *)(param_3 + 0x12) = param_5;
  uVar3 = *(undefined1 *)(param_4 + 0x683);
  *puVar5 = 1;
  *puVar10 = 0x1e031130;
  *(undefined1 *)((int)param_3 + 0x43) = uVar3;
  puVar10[2] = 0x1f0000;
  uVar8 = *(uint *)(param_2 + 300);
  puVar10[1] = 0x1e;
  if ((uVar8 < 0x80000000) || (0x8007ffff < uVar8)) {
    if (uVar8 < 0x8000000) {
      uVar7 = uVar8 + 0x40000000;
      goto LAB_ram_0012f380;
    }
    uVar7 = uVar8;
    if (0xbfffffff < uVar8) goto LAB_ram_0012f380;
LAB_ram_0012f3d0:
    if ((uVar8 < 0x60000000) || (0x6007ffff < uVar8)) {
      if ((uVar8 < 0x40000000) || (0x47ffffff < uVar8)) {
        if (uVar8 < 0xc0000000) {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = uVar8 + 0xc0000000;
      }
    }
    else {
      uVar8 = uVar8 + 0x20000000;
    }
  }
  else {
    uVar7 = uVar8 + 0xe0000000;
LAB_ram_0012f380:
    if (uVar7 == 0) goto LAB_ram_0012f3d0;
  }
  puVar10[3] = uVar8;
  puVar10[4] = 0;
  puVar10[5] = 0x1e;
  puVar10[6] = 0x1080422;
  puVar10[7] = 0x4de;
  if ((puVar5 < (undefined4 *)0x80000000) || ((undefined4 *)0x8007ffff < puVar5)) {
    if (puVar5 < (undefined4 *)0x8000000) {
      puVar9 = puVar5 + 0x10000000;
      goto LAB_ram_0012f434;
    }
    puVar9 = puVar5;
    if ((undefined4 *)0xbfffffff < puVar5) goto LAB_ram_0012f434;
LAB_ram_0012f4e0:
    if ((puVar5 < (undefined4 *)0x60000000) || ((undefined4 *)0x6007ffff < puVar5)) {
      if ((puVar5 < (undefined4 *)0x40000000) || ((undefined4 *)0x47ffffff < puVar5)) {
        if (puVar5 < (undefined4 *)0xc0000000) {
          puVar5 = (undefined4 *)0x0;
        }
      }
      else {
        puVar5 = puVar5 + -0x10000000;
      }
    }
    else {
      puVar5 = puVar5 + 0x8000000;
    }
  }
  else {
    puVar9 = puVar5 + -0x8000000;
LAB_ram_0012f434:
    if (puVar9 == (undefined4 *)0x0) goto LAB_ram_0012f4e0;
  }
  uVar3 = *(undefined1 *)(param_4 + 0x97);
  puVar10[8] = puVar5;
  uVar4 = *(ushort *)(param_4 + 0x9a);
  puVar10[9] = CONCAT13(*(undefined1 *)(param_4 + 0x99),
                        CONCAT12(*(undefined1 *)(param_4 + 0x98),
                                 CONCAT11(uVar3,*(undefined1 *)(param_4 + 0x96))));
  uVar3 = *(undefined1 *)(param_4 + 0x683);
  puVar10[10] = (uint)uVar4;
  uVar8 = FUN_ram_000e4c48(puVar10,iVar12,0,uVar3,uVar2,0,0);
  iVar6 = *(int *)(iVar12 + 0x1fc);
  puVar10[0xb] = uVar8 & 0xffff;
  puVar10[0xc] = 0xf8124064;
  bVar1 = *(byte *)(param_4 + 100);
  puVar10[0xd] = (uint)*(ushort *)(iVar12 + 0x1c4) | iVar6 << 0x10;
  if ((bVar1 & 2) == 0) {
    iVar6 = FUN_ram_000e5c84();
    if (iVar6 == 2) {
      bVar1 = *(byte *)(param_4 + 100);
      goto joined_r0x0012f524;
    }
    iVar6 = FUN_ram_000e5c84();
    if (iVar6 == 3) {
      uVar11 = 0x10;
LAB_ram_0012f55c:
      uVar13 = 0;
      goto LAB_ram_0012f560;
    }
    if (*(char *)(param_4 + 100) != '\0') {
      uVar11 = 0x1f;
      goto LAB_ram_0012f55c;
    }
    uVar13 = 0;
  }
  else {
joined_r0x0012f524:
    uVar13 = 2;
    if (bVar1 != 0) {
      uVar13 = 2;
      uVar11 = 8;
      goto LAB_ram_0012f560;
    }
  }
  uVar11 = 0x10;
LAB_ram_0012f560:
  FUN_ram_000e3b08(*(undefined4 *)(iVar12 + 300),iVar12,0,0,uVar2,*(undefined4 *)(param_4 + 0x4ec),0
                   ,uVar11,uVar13,0);
  FUN_ram_000e3b08(*(undefined4 *)(iVar12 + 0x130),iVar12,0,1,uVar2,*(undefined4 *)(param_4 + 0x4ec)
                   ,0,uVar11,uVar13,0);
  return;
}


