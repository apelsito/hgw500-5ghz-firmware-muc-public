/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012639c */

undefined4 FUN_ram_0012639c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x6c4);
  iVar6 = param_1 + 0x748;
  FUN_ram_0013d720(param_1,param_1 + 0x6c8 +
                           *(short *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2) * 0x10);
  bVar3 = *(char *)(param_1 + 0x6b6) + 1;
  uVar5 = (uint)*(byte *)(param_1 + 0x6b7);
  uVar4 = *(uint *)(param_1 + 0x6d0 + *(short *)(iVar7 + uVar5 * 2) * 0x10);
  *(byte *)(param_1 + 0x6b6) = bVar3;
  if (uVar4 < 0x32) {
    if (bVar3 < 4) {
LAB_ram_001264a0:
      if (2 < DAT_ram_8002c229) {
        FUN_ram_000ee260(s_PPPC____pM__idx__u_retry_probing_ram_001c39ec,param_1 + 0x96,
                         (int)*(short *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2));
      }
      return 0;
    }
  }
  else {
    iVar1 = FUN_ram_0013d94c(param_1);
    if (iVar1 != 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x6b7);
      goto LAB_ram_001264dc;
    }
    if (*(byte *)(param_1 + 0x6b6) < 4) goto LAB_ram_001264a0;
    uVar5 = (uint)*(byte *)(param_1 + 0x6b7);
  }
  if (uVar5 < 2) {
    FUN_ram_0011c894(param_1,*(undefined1 *)(param_1 + 0x6b8));
    if (2 < DAT_ram_8002c229) {
      FUN_ram_000ee260(s_PPPC____pM__not_enough_data__usi_ram_001c39b4,param_1 + 0x96,
                       (uint)*(byte *)(param_1 + 0x6b8),
                       *(undefined4 *)(iVar6 + (uint)*(byte *)(param_1 + 0x6b8) * 4));
    }
    *(undefined4 *)(param_1 + 0x6c0) = 5000;
    return 1;
  }
LAB_ram_001264dc:
  uVar5 = *(uint *)(iVar6 + *(short *)(iVar7 + uVar5 * 2) * 4);
  if (uVar5 == 0) {
    uVar2 = FUN_ram_0013d94c(param_1);
    *(undefined4 *)(iVar6 + *(short *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2) * 4) = uVar2;
  }
  else {
    iVar1 = FUN_ram_0013d94c(param_1);
    *(uint *)(iVar6 + *(short *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2) * 4) =
         (iVar1 >> 1) + (uVar5 >> 1);
  }
  uVar2 = FUN_ram_0013d9fc(param_1);
  iVar6 = param_1 + 0x7fc + *(short *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2) * 4;
  DAT_ram_80037924 = *(undefined4 *)(iVar6 + -0xb4);
  *(undefined4 *)(iVar6 + -0x94) = uVar2;
  DAT_ram_80037928 = (int)*(short *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2);
  if ((*(byte *)(param_1 + 0x6b7) + 1 < 3) &&
     (-1 < *(short *)(iVar7 + 2 + (uint)*(byte *)(param_1 + 0x6b7) * 2))) {
    iVar6 = FUN_ram_0011bca8(param_1);
    if (iVar6 + *(short *)(iVar7 + 2 + (uint)*(byte *)(param_1 + 0x6b7) * 2) <=
        (int)(uint)(byte)(&DAT_ram_0018c16c)[DAT_ram_8002c8e8]) {
      *(byte *)(param_1 + 0x6b7) = *(byte *)(param_1 + 0x6b7) + 1;
      *(undefined1 *)(param_1 + 0x6b6) = 0;
      FUN_ram_0011c894(param_1,*(undefined1 *)(iVar7 + (uint)*(byte *)(param_1 + 0x6b7) * 2));
      return 0;
    }
  }
  FUN_ram_001260e8(param_1);
  return 1;
}


