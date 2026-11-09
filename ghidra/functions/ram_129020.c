/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00129020 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_00129020(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = *(undefined4 *)(param_1 + 0x3b20);
  uVar5 = (uint)*(byte *)(param_2 + 0x10);
  uVar6 = uVar5;
  if (DAT_ram_8002c94c != '\0') {
    uVar6 = (int)uVar5 >> 1;
  }
  bVar1 = false;
  uVar6 = uVar6 & 3;
  DAT_ram_8003798c = DAT_ram_8003798c + 1;
  uVar4 = uVar6;
  if (DAT_ram_8002c94c != '\0') {
    uVar4 = uVar6 * 2;
  }
  if (uVar4 < 8) {
    bVar1 = false;
    do {
      while( true ) {
        if ((((uVar4 < 8) && (iVar3 = *(int *)(param_1 + 0x3f94 + uVar4 * 4), iVar3 != 0)) &&
            (iVar3 = *(int *)(iVar3 + 0x84), iVar3 != 0 && uVar5 != uVar4)) &&
           ((*(byte *)(iVar3 + 0x1a) & 1) != 0)) {
          bVar1 = true;
        }
        if (DAT_ram_8002c94c == '\0') break;
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar4 + 1;
        }
        else {
          uVar4 = uVar4 + 7;
        }
        if (7 < (int)uVar4) goto LAB_ram_001290f4;
      }
      uVar4 = uVar4 + 4;
    } while ((int)uVar4 < 8);
  }
LAB_ram_001290f4:
  if (param_2 == *(int *)(param_1 + 0x3f94 + uVar5 * 4)) {
    piVar2 = *(int **)(param_2 + 0x84);
    if (piVar2 == (int *)0x0) goto LAB_ram_00129120;
    *(byte *)((int)piVar2 + 0x1a) = *(byte *)((int)piVar2 + 0x1a) & 0xfe;
joined_r0x0012913c:
    if (bVar1) {
      iVar3 = *piVar2;
      goto joined_r0x00129188;
    }
  }
  else {
    FUN_ram_000ee260(s_vapid_mismatch_ram_001c3ff8);
    FUN_ram_000ee260(&DAT_ram_001c3e8c);
    piVar2 = *(int **)(param_2 + 0x84);
    if (piVar2 != (int *)0x0) {
      *(byte *)((int)piVar2 + 0x1a) = *(byte *)((int)piVar2 + 0x1a) & 0xfe;
      goto joined_r0x0012913c;
    }
LAB_ram_00129120:
    if (bVar1) {
      return;
    }
  }
  FUN_ram_00103428(uVar8,uVar6);
  piVar2 = *(int **)(param_2 + 0x84);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = *piVar2;
joined_r0x00129188:
  if (iVar3 == 0) {
    iVar3 = piVar2[1];
  }
  else {
    FUN_ram_00109920(param_1);
    **(undefined4 **)(param_2 + 0x84) = 0;
    piVar2 = *(int **)(param_2 + 0x84);
    iVar3 = piVar2[1];
  }
  if (iVar3 != 0) {
    uVar6 = STATUS32;
    if ((uVar6 & 2) != 0) {
      STATUS32 = uVar6 & 0xfffffffd;
    }
    iVar7 = *(int *)(iVar3 + 0x10) + -1;
    *(int *)(iVar3 + 0x10) = iVar7;
    STATUS32 = uVar6;
    if (iVar7 == 0) {
      FUN_ram_000eea80(iVar3,0,0x18);
      FUN_ram_000e7d50(param_1 + 0x3d60);
      *(undefined4 *)(iVar3 + 0x14) = 0;
      **(int **)(param_1 + 0x3d58) = iVar3;
      *(int *)(param_1 + 0x3d58) = iVar3 + 0x14;
      FUN_ram_000e7da8(param_1 + 0x3d60);
    }
    *(undefined4 *)(*(int *)(param_2 + 0x84) + 4) = 0;
    piVar2 = *(int **)(param_2 + 0x84);
  }
  iVar3 = DAT_ram_80038ee4;
  piVar2[2] = DAT_ram_80038ee0;
  piVar2[3] = iVar3;
  return;
}


