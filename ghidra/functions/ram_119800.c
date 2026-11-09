/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119800 */

void FUN_ram_00119800(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar11 = *(int *)(**(int **)(param_1 + 0xc) + 0x1c);
  iVar9 = *(int *)(param_1 + 0x3c);
  if (*(char *)(iVar11 + 0x5ab8) == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x134);
  if (iVar3 == 0) {
    FUN_ram_000ee260(s_qtn_mu_ndpa_setup__no_mem_ram_001c2370);
    return;
  }
  piVar5 = *(int **)(iVar9 + 0xd28);
  if (piVar5 == (int *)0x0) {
    FUN_ram_000ee260(s_qtn_mu_ndpa_setup__no_snd_fd_ram_001c238c);
    return;
  }
  if (*piVar5 == 0) {
    FUN_ram_000ee260(s_qtn_mu_ndpa_setup__no_snd_fd_>fd_ram_001c23ac);
    return;
  }
  piVar5[0x1f] = iVar3;
  FUN_ram_000eea80(iVar3,0,0x25);
  puVar7 = *(undefined1 **)(param_1 + 0x134);
  *puVar7 = 0x54;
  puVar7[1] = 0;
  if ((((uint)(puVar7 + 10) & 1) == 0) && ((param_1 + 0x18U & 1) == 0)) {
    *(undefined2 *)(puVar7 + 10) = *(undefined2 *)(param_1 + 0x18);
    *(undefined2 *)(puVar7 + 0xc) = *(undefined2 *)(param_1 + 0x1a);
    *(undefined2 *)(puVar7 + 0xe) = *(undefined2 *)(param_1 + 0x1c);
  }
  else {
    FUN_ram_0039fe00(puVar7 + 10,param_1 + 0x18U,6);
  }
  if (((uint)(puVar7 + 4) & 1) == 0) {
    *(undefined2 *)(puVar7 + 4) = DAT_ram_0018c0e0;
    *(undefined2 *)(puVar7 + 6) = DAT_ram_0018c0e2;
    *(ushort *)(puVar7 + 8) = DAT_ram_0018c0e4;
  }
  else {
    FUN_ram_0039fe00(puVar7 + 4,&DAT_ram_0018c0e0,6);
  }
  if (param_2 == 1) {
    puVar7[10] = puVar7[10] | 1;
  }
  puVar7[2] = 0xb0;
  puVar7[0x10] = 0;
  puVar7[3] = 0;
  iVar3 = *(int *)(iVar11 + 0x3b20);
  puVar12 = *(undefined4 **)(iVar9 + 0xd28);
  uVar8 = *(undefined4 *)(iVar11 + 0x3f84);
  puVar10 = (undefined4 *)*puVar12;
  FUN_ram_000eea80(puVar10,0,0x6c);
  FUN_ram_00129fc8(iVar11,puVar12[2]);
  puVar4 = (undefined4 *)puVar12[2];
  uVar1 = *(ushort *)(puVar12 + 9);
  *puVar4 = 1;
  *(char *)(puVar12 + 0x12) = (char)uVar8;
  *(ushort *)(puVar12 + 9) = uVar1 | 2;
  *puVar10 = 0x10010718;
  puVar10[1] = 0x25;
  puVar10[2] = 0;
  if (param_2 != 0) {
    puVar10[2] = &DAT_ram_001a0000;
  }
  uVar6 = *(uint *)(param_1 + 0x134);
  if ((uVar6 < 0x80000000) || (0x8007ffff < uVar6)) {
    if (uVar6 < 0x8000000) {
      if (uVar6 == 0xc0000000) {
LAB_ram_00119a68:
        if ((uVar6 < 0x60000000) || (0x6007ffff < uVar6)) goto LAB_ram_00119a84;
        uVar6 = uVar6 + 0x20000000;
      }
    }
    else if ((uVar6 < 0xc0000000) || (uVar6 == 0)) goto LAB_ram_00119a68;
  }
  else {
    if (uVar6 != 0x20000000) goto LAB_ram_00119a24;
LAB_ram_00119a84:
    if ((uVar6 < 0x40000000) || (0x47ffffff < uVar6)) {
      if (uVar6 < 0xc0000000) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = uVar6 + 0xc0000000;
    }
  }
LAB_ram_00119a24:
  puVar10[3] = uVar6;
  puVar10[4] = 0;
  puVar10[5] = 0x25;
  puVar10[6] = 0x1080422;
  puVar10[7] = 0x4de;
  if ((puVar4 < (undefined4 *)0x80000000) || ((undefined4 *)0x8007ffff < puVar4)) {
    if (puVar4 < (undefined4 *)0x8000000) {
      puVar12 = puVar4 + 0x10000000;
      goto LAB_ram_00119ae0;
    }
    puVar12 = puVar4;
    if ((undefined4 *)0xbfffffff < puVar4) goto LAB_ram_00119ae0;
  }
  else {
    puVar12 = puVar4 + -0x8000000;
LAB_ram_00119ae0:
    if (puVar12 != (undefined4 *)0x0) goto LAB_ram_00119ae4;
  }
  if ((puVar4 < (undefined4 *)0x60000000) || ((undefined4 *)0x6007ffff < puVar4)) {
    if ((puVar4 < (undefined4 *)0x40000000) || ((undefined4 *)0x47ffffff < puVar4)) {
      if (puVar4 < (undefined4 *)0xc0000000) {
        puVar4 = (undefined4 *)0x0;
      }
    }
    else {
      puVar4 = puVar4 + -0x10000000;
    }
  }
  else {
    puVar4 = puVar4 + 0x8000000;
  }
LAB_ram_00119ae4:
  puVar10[8] = puVar4;
  puVar10[9] = CONCAT13(DAT_ram_0018c0e2._1_1_,
                        CONCAT12((undefined1)DAT_ram_0018c0e2,DAT_ram_0018c0e0));
  uVar8 = *(undefined4 *)(iVar11 + 0x3b20);
  puVar10[10] = (uint)DAT_ram_0018c0e4;
  uVar6 = FUN_ram_000e4c48(puVar10,uVar8,0,2,0,1,param_2 != 0);
  uVar2 = *(undefined2 *)(iVar3 + 0x1fc);
  puVar10[0xb] = uVar6 & 0xffff;
  puVar10[0xc] = 100;
  puVar10[0xd] = CONCAT22(uVar2,*(undefined2 *)(iVar3 + 0x1c4));
  FUN_ram_000ee260(s_qtn_mu_ndpa_setup__bw_cap__d_don_ram_001c23d8,2);
  return;
}


