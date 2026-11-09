/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e45d0 */

uint * FUN_ram_000e45d0(int param_1,int param_2,byte *param_3,undefined4 param_4,undefined4 param_5,
                       uint param_6,int param_7,uint param_8,undefined4 param_9,char param_10,
                       int param_11,int param_12,undefined4 param_13,int param_14,
                       undefined4 param_15,char param_16)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = DAT_ram_0018c100;
  if (param_16 == '\0') {
    uVar7 = *(uint *)(param_2 + 0x208);
    if ((param_7 != 0) && (DAT_ram_0018c114 == 1)) goto LAB_ram_000e4638;
LAB_ram_000e4654:
    iVar10 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0x5a0);
    if ((param_7 == 0) || (DAT_ram_0018c114 != 1)) goto LAB_ram_000e4654;
LAB_ram_000e4638:
    iVar10 = 2;
  }
  iVar1 = FUN_ram_000e5c84();
  if ((iVar1 == 2) && ((uVar9 = 3, DAT_ram_0018c114 != 1 || (iVar10 == 0)))) {
    iVar10 = 2;
  }
  if (DAT_ram_0018c12c != 0) {
    param_8 = 1;
  }
  if ((DAT_ram_0018c0f4 == 0) || (param_10 == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  iVar5 = 0;
  if (DAT_ram_0018c0ec == 0) {
    if (DAT_ram_0018c0e8 != 0) goto joined_r0x000e4708;
LAB_ram_000e46f8:
    iVar8 = 0;
  }
  else if (param_11 == 0) {
    if (DAT_ram_0018c0e8 == 0) goto LAB_ram_000e46f8;
joined_r0x000e4708:
    iVar8 = 0;
    iVar5 = param_12;
  }
  else {
    iVar8 = 1;
    if (DAT_ram_0018c0e8 != 0) {
      iVar5 = param_12;
    }
  }
  if (param_14 != 0) {
    iVar1 = 0;
    uVar9 = DAT_ram_8002c8d0;
  }
  if (param_7 == 0) {
    uVar9 = 3;
    iVar2 = FUN_ram_000e5c84();
    if (iVar2 == 4) {
      iVar2 = 0xf;
      iVar6 = 1;
    }
    else {
      iVar6 = FUN_ram_000e5c84();
      iVar2 = 7;
      if (iVar6 == 3) {
        iVar6 = 1;
      }
      else {
        iVar6 = 1;
        iVar2 = 3;
      }
    }
  }
  else {
    iVar6 = 0;
    iVar2 = iVar6;
  }
  uVar3 = 0;
  uVar4 = *param_3 & 0x7f;
  if (uVar4 < (uint)(iVar5 << 3)) {
    iVar5 = 1;
    if (0x6c < uVar4) goto LAB_ram_000e4818;
  }
  else {
    if (0x6c < uVar4) {
      iVar5 = 0;
      goto LAB_ram_000e4818;
    }
    iVar5 = 0;
  }
  uVar3 = (uint)(byte)(&DAT_ram_0018c430)[param_8 + uVar4 * 3];
LAB_ram_000e4818:
  *(uint *)(param_1 + 0x4c) =
       iVar5 << 0x1b |
       iVar10 << 0x1d |
       *param_3 & 0x7f |
       (uVar9 & 3) << 0x19 | iVar6 << 0x18 | (param_8 & 3) << 9 | iVar1 << 0xf | iVar2 << 0x14;
  *(uint *)(param_1 + 0x50) =
       (uVar3 & 7) << 0x1c | (param_6 & 0x3ff) << 0x10 | uVar7 & 0x7fff | iVar8 << 0x1a | 0x80008000
  ;
  return (uint *)(param_1 + 0x4c);
}


