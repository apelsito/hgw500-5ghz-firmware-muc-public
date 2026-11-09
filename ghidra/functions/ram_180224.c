/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00180224 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_00180224(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_r7;
  undefined4 *puVar11;
  int iVar12;
  int in_lp_count;
  char in_is_in_loop;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined1 auStack_1f [3];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  puVar1 = DAT_ram_001ab644;
  iVar9 = 0;
  puVar11 = (undefined4 *)((int)param_3 >> 2 & 3);
  param_3 = param_3 & 3;
  if (puVar11 == (undefined4 *)0x0) {
    iVar9 = 0x40;
  }
  else if (puVar11 == (undefined4 *)0x1) {
    iVar9 = 0x80;
  }
  else if (puVar11 == (undefined4 *)0x2) {
    iVar9 = 0x100;
  }
  if (DAT_ram_8002c8bc == '\x03') goto LAB_ram_001804a0;
  if ((param_3 == 1) &&
     (((0xf < (int)param_2 && ((int)param_2 < 0x18)) ||
      ((0x26 < (int)param_2 && ((int)param_2 < 0x35)))))) {
LAB_ram_001802b8:
    in_r7 = 0;
    local_20 = DAT_ram_001ab638;
    local_1c = DAT_ram_001ab63c;
    local_18 = DAT_ram_001ab640;
    local_14 = DAT_ram_001ab644;
    local_10 = DAT_ram_001ab648;
    local_c = DAT_ram_001ab64c;
    puVar11 = puVar1;
    if (iVar9 != 0) {
      iVar10 = -0x19eff000;
      iVar8 = iVar9;
      do {
        iVar12 = 0;
        do {
          iVar6 = iVar12 * 4;
          puVar1 = &stack0xffffffe0 + iVar12;
          iVar12 = iVar12 + 1;
          *(undefined4 *)(iVar10 + iVar6) = *puVar1;
        } while (iVar12 < 6);
        iVar8 = iVar8 + -1;
        iVar10 = iVar10 + 0x18;
      } while (iVar8 != 0);
    }
LAB_ram_00180264:
    if ((param_3 != 1) ||
       ((((int)param_2 < 8 || (0xf < (int)param_2)) &&
        (((int)param_2 < 0x21 || (0x26 < (int)param_2)))))) goto LAB_ram_00180338;
LAB_ram_00180358:
    local_30[0] = 0x7f;
    local_30[1] = 0x7f0000;
    local_30[3] = 0x7f0000;
    local_30[2] = 0x7f;
    if (iVar9 != 0) {
      iVar10 = -0x19eff000;
      iVar8 = iVar9;
      do {
        iVar12 = 0;
        do {
          iVar6 = iVar12 * 4;
          puVar1 = local_30 + iVar12;
          iVar12 = iVar12 + 1;
          *(undefined4 *)(iVar10 + iVar6) = *puVar1;
        } while (iVar12 < 4);
        iVar8 = iVar8 + -1;
        iVar10 = iVar10 + 0x10;
      } while (iVar8 != 0);
    }
LAB_ram_0018033c:
    if ((param_3 == 1) && ((int)param_2 < 8)) goto LAB_ram_001803bc;
  }
  else {
    if (param_3 != 2) goto LAB_ram_00180264;
    if ((int)(param_2 & 0x70) >> 4 == 2) goto LAB_ram_001802b8;
LAB_ram_00180338:
    if (param_3 != 2) goto LAB_ram_0018033c;
    if ((int)(param_2 & 0x70) >> 4 == 1) goto LAB_ram_00180358;
  }
  if (param_3 != 2) goto LAB_ram_001804a0;
  if ((int)(param_2 & 0x70) >> 4 != 0) goto LAB_ram_001804a0;
LAB_ram_001803bc:
  local_20 = DAT_ram_001ab650;
  local_1c = DAT_ram_001ab654;
  local_18 = DAT_ram_001ab658;
  local_14 = (undefined4 *)DAT_ram_001ab65c;
  local_10 = DAT_ram_001ab660;
  local_c = DAT_ram_001ab664;
  local_8 = DAT_ram_001ab668;
  local_4 = DAT_ram_001ab66c;
  puVar11 = DAT_ram_001ab66c;
  if (iVar9 == 0) goto LAB_ram_001804a0;
  puVar11 = (undefined4 *)0xe6101000;
  in_r7 = 0;
  LP_START = 0x18041c;
  LP_END = 0x1804a0;
  in_is_in_loop = '\x01';
  do {
    uVar7 = in_r7 & 3;
    iVar8 = uVar7 * 8;
    in_r7 = in_r7 + 1;
    uVar2 = *(undefined1 *)(&local_1c + uVar7 * 2);
    uVar3 = *(undefined1 *)((int)&local_1c + iVar8 + 1);
    uVar4 = *(undefined1 *)((int)&local_1c + iVar8 + 2);
    uVar5 = *(undefined1 *)((int)&local_1c + iVar8 + 3);
    *puVar11 = CONCAT13(auStack_1f[iVar8 + 2],
                        CONCAT12(auStack_1f[iVar8 + 1],
                                 CONCAT11(auStack_1f[iVar8],
                                          *(undefined1 *)(&stack0xffffffe0 + uVar7 * 2))));
    puVar11[1] = CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
    puVar11 = puVar11 + 2;
    in_lp_count = iVar9;
LAB_ram_001804a0:
  } while ((in_is_in_loop != '\0') && (iVar9 = in_lp_count + -1, iVar9 != 0));
  return;
}


