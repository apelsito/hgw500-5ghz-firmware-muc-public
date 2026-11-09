/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001282ac */

void FUN_ram_001282ac(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined4 *puVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  
  iVar15 = *(int *)(param_1 + 0x3f94 + param_2 * 4);
  puVar10 = *(undefined4 **)(iVar15 + 0x84);
  puVar14 = (undefined4 *)*puVar10;
  piVar20 = (int *)puVar14[5];
  iVar8 = param_2 >> 1;
  if (DAT_ram_8002c94c == '\0') {
    iVar8 = param_2;
  }
  iVar21 = *(int *)puVar14[3];
  uVar11 = (uint)(iVar8 >> 1) >> 0x1e;
  iVar19 = *piVar20;
  iVar8 = (iVar8 + uVar11 & 3) - uVar11;
  if ((*(byte *)((int)puVar10 + 0x1a) & 4) == 0) {
    if (puVar10[4] == iVar21) goto LAB_ram_001283dc;
LAB_ram_001283a4:
    FUN_ram_000ee260(s_beacon_buffer_address_is_not_sam_ram_001c3e64);
    FUN_ram_000ee260(&DAT_ram_001c3e8c);
    pcVar12 = *(char **)(iVar15 + 0xa0);
    iVar18 = *(int *)(iVar15 + 0xb4);
    iVar13 = *(int *)(iVar15 + 0x90);
    uVar16 = *(ushort *)(iVar15 + 0x9c);
  }
  else {
    if (*(short *)(puVar10 + 5) != *(short *)(puVar10 + 6)) {
      FUN_ram_00127a90(iVar15);
      FUN_ram_00127c18(param_1,iVar15);
      FUN_ram_00127d04(param_1,iVar15,0);
      puVar14 = (undefined4 *)**(undefined4 **)(iVar15 + 0x84);
      if (*(int *)puVar14[3] == (*(undefined4 **)(iVar15 + 0x84))[4]) goto LAB_ram_001283dc;
      goto LAB_ram_001283a4;
    }
    FUN_ram_00127a90(iVar15);
    if (*(int *)puVar14[3] != *(int *)(*(int *)(iVar15 + 0x84) + 0x10)) goto LAB_ram_001283a4;
LAB_ram_001283dc:
    pcVar12 = *(char **)(iVar15 + 0xa0);
    iVar18 = *(int *)(iVar15 + 0xb4);
    iVar13 = *(int *)(iVar15 + 0x90);
    uVar16 = *(ushort *)(iVar15 + 0x9c);
  }
  if (iVar15 != iVar19) {
    FUN_ram_000ee260(s_qv_is_not_same_as_vap_ram_001c3e90);
    FUN_ram_000ee260(&DAT_ram_001c3e8c);
  }
  iVar4 = FUN_ram_001030e8(*(undefined4 *)(param_1 + 0x3b20),iVar8,1);
  iVar7 = (uint)*(ushort *)((int)piVar20 + 0x3a) << 4;
  iVar17 = 0;
  if (iVar4 < 5) {
    iVar17 = 4 - iVar4;
  }
  *(char *)(iVar21 + 0x16) = (char)iVar7;
  *(char *)(iVar21 + 0x17) = (char)((uint)iVar7 >> 8);
  *(short *)((int)piVar20 + 0x3a) = *(short *)((int)piVar20 + 0x3a) + 1;
  if (iVar13 != 0) {
    *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) & 0xfe;
    *(byte *)(iVar13 + 5) = *(byte *)(iVar13 + 5) & 0xfe;
    FUN_ram_00158428(param_1);
    uVar1 = *(ushort *)(iVar15 + 0x9c);
    uVar2 = *(ushort *)(iVar19 + 0x34);
    pbVar5 = *(byte **)(iVar19 + 0x78);
    if ((*(char *)(iVar13 + 2) == '\x01') && ((*pbVar5 & 1) != 0)) {
      *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) | 1;
    }
    if (uVar2 < uVar1) {
      uVar16 = uVar2;
    }
    FUN_ram_0039fe00(iVar13 + 5,pbVar5,uVar16);
  }
  uVar6 = puVar14[2];
  *(byte *)(*(int *)(iVar15 + 0x84) + 0x1a) = *(byte *)(*(int *)(iVar15 + 0x84) + 0x1a) | 2;
  FUN_ram_00129fc8(param_1,uVar6);
  if (iVar17 == 0) {
    DAT_ram_0018c17c = DAT_ram_0018c17c + 1;
    DAT_ram_800377f4 = DAT_ram_800377f4 + 1;
    FUN_ram_0012d170(param_1,6);
  }
  else {
    FUN_ram_0012d170(param_1,7);
  }
  if (iVar18 != 0) {
    uVar3 = FUN_ram_00128188(param_1);
    *(undefined1 *)(iVar18 + 2) = uVar3;
  }
  iVar21 = *(int *)(iVar15 + 0xc4);
  if (((pcVar12 != (char *)0x0) && (*pcVar12 == '%')) && (pcVar12[4] != '\0')) {
    pcVar12[4] = pcVar12[4] + -1;
    iVar18 = *(int *)(iVar15 + 0x84);
    *(undefined1 *)(iVar18 + 0x1b) = 1;
    if (pcVar12[4] == '\0') {
      *(undefined1 *)(iVar18 + 0x1b) = 2;
    }
  }
  if ((DAT_ram_0018c178 != 0) && (iVar13 != 0)) {
    cVar9 = *(char *)(iVar13 + 2);
    if (cVar9 == '\0') {
      cVar9 = *(char *)(iVar13 + 3) + -1;
      *(char *)(iVar13 + 2) = cVar9;
      if (cVar9 != '\0') goto LAB_ram_001285bc;
    }
    else {
      *(char *)(iVar13 + 2) = cVar9 + -1;
      if (cVar9 != '\x01') goto LAB_ram_001285bc;
    }
    *(undefined1 *)(iVar19 + 0x74) = 1;
  }
LAB_ram_001285bc:
  if (iVar21 == 0) {
    if (*(int *)(iVar15 + 200) != 0) {
      *(char *)(*(int *)(iVar15 + 200) + 4) = (char)*(undefined4 *)(param_1 + 0x5ba4);
    }
  }
  else {
    FUN_ram_00128204(param_1,iVar15 + 0x8c);
    if (*(int *)(iVar15 + 200) != 0) {
      *(char *)(*(int *)(iVar15 + 200) + 4) = (char)*(undefined4 *)(param_1 + 0x5ba4);
    }
  }
  if (iVar17 != 0) {
    FUN_ram_800255f4(*(undefined4 *)(*(int *)(iVar15 + 0x84) + 0x10),
                     *(undefined2 *)(*(int *)(iVar15 + 0x84) + 0x14));
    uVar6 = DAT_ram_80038ee4;
    iVar15 = *(int *)(iVar15 + 0x84);
    *(undefined4 *)(iVar15 + 8) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar15 + 0xc) = uVar6;
    iVar15 = *(int *)(param_1 + 0x3b20);
    iVar8 = iVar8 * 0x20 + 0x100;
    *(undefined4 *)(*(int *)(iVar15 + 0xc) + iVar8) = 1;
    *(undefined4 *)(iVar8 + *(int *)(iVar15 + 0xc)) = *puVar14;
    DAT_ram_0018c17c = 0;
  }
  return;
}


