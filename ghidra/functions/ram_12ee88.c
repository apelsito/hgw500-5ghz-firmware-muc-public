/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012ee88 */

void FUN_ram_0012ee88(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 uVar13;
  
  iVar12 = *(int *)(param_1 + 0x3b20);
  puVar10 = *(undefined4 **)(param_3 + 0xd28);
  puVar8 = (undefined4 *)*puVar10;
  uVar13 = DAT_ram_8002c937;
  if (*(char *)(param_3 + 100) != '\0') {
    uVar13 = 0;
  }
  FUN_ram_000eea80(puVar8,0,0x6c);
  FUN_ram_00129fc8(param_1,puVar10[2]);
  puVar5 = (undefined4 *)puVar10[2];
  *(undefined1 *)(puVar10 + 0x12) = param_4;
  uVar2 = *(undefined1 *)(param_3 + 0x683);
  *puVar5 = 1;
  *puVar8 = 0x10010518;
  *(undefined1 *)((int)puVar10 + 0x43) = uVar2;
  uVar7 = *(uint *)(param_3 + 0xd2c);
  puVar8[1] = 0x13;
  puVar8[2] = 0;
  if ((uVar7 < 0x80000000) || (0x8007ffff < uVar7)) {
    if (uVar7 < 0x8000000) {
      uVar6 = uVar7 + 0x40000000;
    }
    else {
      uVar6 = uVar7;
      if (uVar7 < 0xc0000000) {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = uVar7 + 0xe0000000;
  }
  if (uVar6 == 0) {
    if ((uVar7 < 0x60000000) || (0x6007ffff < uVar7)) {
      if ((uVar7 < 0x40000000) || (0x47ffffff < uVar7)) {
        if (uVar7 < 0xc0000000) {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = uVar7 + 0xc0000000;
      }
    }
    else {
      uVar7 = uVar7 + 0x20000000;
    }
  }
  puVar8[3] = uVar7;
  puVar8[4] = 0;
  puVar8[5] = 0x13;
  puVar8[6] = 0x1080422;
  puVar8[7] = 0x4de;
  if ((puVar5 < (undefined4 *)0x80000000) || ((undefined4 *)0x8007ffff < puVar5)) {
    if (puVar5 < (undefined4 *)0x8000000) {
      puVar10 = puVar5 + 0x10000000;
    }
    else {
      puVar10 = puVar5;
      if (puVar5 < (undefined4 *)0xc0000000) {
        puVar10 = (undefined4 *)0x0;
      }
    }
  }
  else {
    puVar10 = puVar5 + -0x8000000;
  }
  if (puVar10 == (undefined4 *)0x0) {
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
  uVar2 = *(undefined1 *)(param_3 + 0x97);
  puVar8[8] = puVar5;
  uVar3 = *(ushort *)(param_3 + 0x9a);
  puVar8[9] = CONCAT13(*(undefined1 *)(param_3 + 0x99),
                       CONCAT12(*(undefined1 *)(param_3 + 0x98),
                                CONCAT11(uVar2,*(undefined1 *)(param_3 + 0x96))));
  uVar2 = *(undefined1 *)(param_3 + 0x683);
  puVar8[10] = (uint)uVar3;
  uVar7 = FUN_ram_000e4c48(puVar8,iVar12,uVar13,uVar2,0,1,0);
  iVar4 = *(int *)(iVar12 + 0x1fc);
  puVar8[0xb] = uVar7 & 0xffff;
  puVar8[0xc] = 100;
  cVar1 = *(char *)(param_3 + 100);
  puVar8[0xd] = (uint)*(ushort *)(iVar12 + 0x1c4) | iVar4 << 0x10;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_3 + 0x3d2);
    if (cVar1 == '\0') {
      iVar4 = FUN_ram_000e5c84();
      bVar9 = 7;
    }
    else if (cVar1 == '\x01') {
      iVar4 = FUN_ram_000e5c84();
      bVar9 = 0x17;
    }
    else {
      if (cVar1 != '\x02') goto LAB_ram_0012f0cc;
      iVar4 = FUN_ram_000e5c84();
      bVar9 = 0x27;
    }
    if (iVar4 == 2) goto LAB_ram_0012f174;
LAB_ram_0012f180:
    iVar4 = FUN_ram_000e5c84();
    if (iVar4 == 3) {
      if (0x27 < bVar9) {
        bVar9 = 0x27;
      }
      goto LAB_ram_0012f178;
    }
    cVar1 = *(char *)(param_3 + 0x3d2);
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_3 + 100);
    }
    else if (cVar1 == '\x01') {
      cVar1 = *(char *)(param_3 + 100);
    }
    else {
      if (cVar1 != '\x02') {
        uVar11 = *(undefined4 *)(param_3 + 0x4ec);
        uVar13 = 0;
        goto LAB_ram_0012f1e0;
      }
      cVar1 = *(char *)(param_3 + 100);
    }
    if (cVar1 != '\0') goto LAB_ram_0012f178;
    uVar13 = 5;
  }
  else {
LAB_ram_0012f0cc:
    iVar4 = FUN_ram_000e5c84();
    bVar9 = 0x37;
    if (iVar4 != 2) goto LAB_ram_0012f180;
LAB_ram_0012f174:
    if (0x17 < bVar9) {
      bVar9 = 0x17;
    }
LAB_ram_0012f178:
    uVar13 = 0;
  }
  uVar11 = 0;
LAB_ram_0012f1e0:
  *(byte *)(param_3 + 0xd30) = bVar9;
  *(undefined1 *)(param_3 + 0xd31) = uVar13;
  *(undefined4 *)(param_3 + 0xd34) = uVar11;
  FUN_ram_000e3b08(*(undefined4 *)(iVar12 + 0x134),iVar12,0,0,0,uVar11,uVar13,bVar9,0,1);
  FUN_ram_000e3b08(*(undefined4 *)(iVar12 + 0x138),iVar12,0,1,0,uVar11,uVar13,bVar9,0,1);
  FUN_ram_000e3b08(*(undefined4 *)(iVar12 + 0x13c),iVar12,0,2,0,uVar11,uVar13,bVar9,0,1);
  return;
}


