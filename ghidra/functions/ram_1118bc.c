/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001118bc */

undefined4 FUN_ram_001118bc(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r4;
  int iVar4;
  int extraout_r5;
  int iVar5;
  undefined4 extraout_r7;
  undefined4 uVar6;
  int extraout_r8;
  int iVar7;
  int extraout_r9;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int extraout_lp_count;
  int iVar11;
  char in_is_in_loop;
  undefined8 uVar12;
  
  uVar10 = param_2 >> 8;
  uVar12 = FUN_ram_000e7d50(param_1 + 0xe21);
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  iVar1 = (int)uVar12;
  iVar5 = extraout_r5;
  uVar6 = extraout_r7;
  iVar8 = extraout_r9;
  iVar11 = extraout_lp_count;
  if ((param_2 & 0x1000000) == 0) {
    iVar1 = *(int *)(*(int *)(*param_1 + 0x1c) + 0x3b54 + (param_2 & 0xff) * 4);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0xd70) = uVar10 & 0xff;
      uVar6 = 0;
      if ((uVar10 & 2) == 0) {
        iVar5 = *(int *)(iVar1 + 0x388);
        iVar3 = 0;
        iVar11 = 2;
        iVar8 = iVar5 + 0x34;
        LP_START = 0x11198c;
        LP_END = 0x1119a0;
        in_is_in_loop = '\x01';
        goto LAB_ram_0011198c;
      }
    }
  }
  else {
    iVar2 = param_1[0xe23];
    iVar3 = 0;
    iVar4 = extraout_r4;
    iVar7 = extraout_r8;
    if (iVar2 != 0) {
      do {
        if ((uVar10 & 2) != 0) goto LAB_ram_00111934;
        iVar1 = *(int *)(iVar2 + 0x388);
        iVar4 = 0;
        iVar11 = 2;
        iVar7 = iVar1 + 0x34;
        LP_START = 0x111920;
        LP_END = 0x111934;
        in_is_in_loop = '\x01';
        do {
          if (iVar1 != 0) {
            *(undefined4 *)(iVar4 * 0x48 + iVar7) = 0;
          }
          iVar4 = iVar4 + 1;
LAB_ram_00111934:
        } while ((in_is_in_loop != '\0') && (iVar11 = iVar11 + -1, iVar11 != 0));
        in_is_in_loop = '\0';
        puVar9 = (uint *)(iVar2 + 0xd70);
        iVar2 = *(int *)(iVar2 + 0x114);
        *puVar9 = uVar10 & 0xff;
      } while (iVar2 != 0);
      iVar3 = 0;
    }
  }
  while ((in_is_in_loop != '\0' && (iVar11 = iVar11 + -1, iVar11 != 0))) {
LAB_ram_0011198c:
    if (iVar5 != 0) {
      *(undefined4 *)(iVar3 * 0x48 + iVar8) = uVar6;
    }
    iVar3 = iVar3 + 1;
  }
  FUN_ram_000e7da8(param_1 + 0xe21);
  return 0;
}


