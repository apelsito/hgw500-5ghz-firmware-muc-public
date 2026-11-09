/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001260e8 */

void FUN_ram_001260e8(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  
  uVar12 = (uint)*(byte *)(param_1 + 0x6b7);
  psVar8 = *(short **)(param_1 + 0x6c4);
  iVar10 = param_1 + 0x748;
  uVar9 = *(uint *)(iVar10 + *psVar8 * 4);
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x6d0 + psVar8[uVar12] * 0x10) < 0x32) {
    uVar12 = uVar12 - 1 & 0xff;
  }
  if ((2 < DAT_ram_8002c229) && (-1 < (int)uVar12)) {
    iVar7 = uVar12 + 1;
    psVar13 = psVar8;
    do {
      iVar4 = param_1 + 0x7fc + *psVar13 * 4;
      FUN_ram_000ee260(s_PPPC____pM__scale__u_gput__u_sam_ram_001c3958,param_1 + 0x96,(int)*psVar13,
                       *(undefined4 *)(iVar4 + -0xb4),*(undefined4 *)(iVar4 + -0x94));
      iVar7 = iVar7 + -1;
      psVar13 = psVar13 + 1;
    } while (iVar7 != 0);
  }
  if (uVar12 != 0) {
    uVar6 = 1;
    uVar11 = 0;
    psVar13 = psVar8;
    do {
      psVar13 = psVar13 + 1;
      uVar5 = *(uint *)(iVar10 + *psVar13 * 4);
      if (uVar5 == 0) {
        if (uVar9 == 0) {
          DAT_ram_80037948 = DAT_ram_80037948 + 1;
        }
LAB_ram_00126220:
        bVar2 = false;
      }
      else {
        if (uVar5 < uVar9) goto LAB_ram_00126220;
        bVar2 = true;
      }
      if (bVar2) {
        uVar9 = *(uint *)(iVar10 + *psVar13 * 4);
        uVar11 = uVar6;
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 <= uVar12);
  }
  iVar10 = FUN_ram_0011bca8(param_1);
  psVar13 = psVar8 + uVar11;
  uVar11 = (uint)*psVar13;
  if ((int)(uint)(byte)(&DAT_ram_0018c16c)[DAT_ram_8002c8e8] < (int)(iVar10 + uVar11)) {
    DAT_ram_80037944 = DAT_ram_80037944 + 1;
    uVar11 = (uint)*psVar8;
    cVar1 = *(char *)(param_1 + 0x789);
    if (uVar11 == *(byte *)(param_1 + 0x6b8)) goto joined_r0x001262ac;
joined_r0x001262b8:
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x6c0) = 500;
      *(undefined1 *)(param_1 + 0x788) = 0;
      goto LAB_ram_00126328;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x789);
    psVar8 = psVar13;
    if (uVar11 != *(byte *)(param_1 + 0x6b8)) goto joined_r0x001262b8;
joined_r0x001262ac:
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x6c0) = 25000;
      FUN_ram_00126040(param_1,uVar11 & 0xff);
      uVar11 = (uint)*psVar8;
      goto LAB_ram_00126328;
    }
    bVar3 = *(char *)(param_1 + 0x788) + 1;
    *(byte *)(param_1 + 0x788) = bVar3;
    if (bVar3 < 3) {
      *(undefined4 *)(param_1 + 0x6c0) = 500;
      goto LAB_ram_00126328;
    }
    *(undefined1 *)(param_1 + 0x789) = 0;
    *(undefined1 *)(param_1 + 0x788) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c0) = 5000;
LAB_ram_00126328:
  FUN_ram_0011c894(param_1,uVar11 & 0xff);
  *(uint *)(param_1 + 0x6bc) = uVar9;
  *(undefined1 *)(param_1 + 0x6b8) = *(undefined1 *)(param_1 + 0x688);
  if (2 < DAT_ram_8002c229) {
    FUN_ram_000ee260(s_PPPC____pM__chose_idx__u_best__u_ram_001c3988,param_1 + 0x96,
                     *(undefined1 *)(param_1 + 0x688),(int)*psVar8,uVar12);
  }
  return;
}


