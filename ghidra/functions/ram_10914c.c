/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010914c */

int FUN_ram_0010914c(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  
  iVar8 = param_1 + 0x3d88;
  local_28 = DAT_ram_001a60fc;
  local_26 = DAT_ram_001a60fe;
  FUN_ram_000e7d50(iVar8);
  if (*(int *)(param_1 + 0x3d90) < (int)(uint)*(byte *)((int)&local_28 + param_2)) {
    FUN_ram_000e7da8(iVar8);
    DAT_ram_80037850 = DAT_ram_80037850 + 1;
    DAT_ram_80037854 = DAT_ram_80037854 | param_3;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x3d7c);
  if (iVar7 != 0) {
    iVar4 = *(int *)(iVar7 + 0xec);
    *(int *)(param_1 + 0x3d7c) = iVar4;
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x3d80) = param_1 + 0x3d7c;
    }
    FUN_ram_000e7da8(iVar8);
    iVar8 = *(int *)(param_1 + 0x3d90);
    *(undefined4 *)(iVar7 + 0x1c) = 0;
    *(int *)(iVar7 + 0x20) = iVar7 + 0x1c;
    *(int *)(iVar7 + 0x10) = param_1;
    *(undefined4 *)(iVar7 + 0x58) = 1;
    *(int *)(param_1 + 0x3d90) = iVar8 + -1;
    uVar2 = STATUS32;
    if ((uVar2 & 2) != 0) {
      STATUS32 = uVar2 & 0xfffffffd;
    }
    local_20 = DAT_ram_80038ee0;
    local_1c = DAT_ram_80038ee4;
    local_24 = COUNT0;
    uVar3 = AUX_IRQ_PENDING;
    if ((uVar3 & 8) != 0) {
      local_20 = DAT_ram_80038ee0 + 1;
      local_1c = DAT_ram_80038ee4 + (uint)(0xfffffffe < DAT_ram_80038ee0);
      local_24 = COUNT0;
    }
    STATUS32 = uVar2;
    *(undefined4 *)(iVar7 + 100) = local_24;
    *(uint *)(iVar7 + 0x68) = local_20;
    *(int *)(iVar7 + 0x6c) = local_1c;
    uVar1 = DAT_ram_0018c078;
    *(undefined2 *)(iVar7 + 0x2c) = 0;
    *(undefined1 *)(iVar7 + 0x4f) = 0;
    *(undefined4 *)(iVar7 + 0x70) = uVar1;
    *(undefined4 *)(iVar7 + 0x50) = 1;
    *(int *)(iVar7 + 0x78) = DAT_ram_0018c0b0;
    DAT_ram_80037848 = DAT_ram_80037848 + 1;
    DAT_ram_80037898 = DAT_ram_80037898 & 0xffff0000 | (uint)*(ushort *)(param_1 + 0x3d90);
    DAT_ram_0018c0b0 = DAT_ram_0018c0b0 + 1;
    if ((((DAT_ram_8002c8b8 & 8) != 0) && (*(uint *)(param_1 + 0x3d90) < DAT_ram_8002c8c8)) &&
       (iVar8 = *(int *)(param_1 + 0x3da4), iVar8 != 0)) {
      uVar2 = 0;
      uVar6 = 0;
      do {
        uVar5 = 0;
        uVar3 = 0;
        do {
          for (iVar4 = *(int *)(iVar8 + uVar5 * 8 + 0x48c); iVar4 != 0;
              iVar4 = *(int *)(iVar4 + 0xec)) {
            uVar3 = uVar3 + 1;
          }
          uVar5 = uVar5 + 1 & 0xffff;
        } while (uVar5 < 4);
        if (uVar2 < uVar3) {
          uVar6 = *(undefined1 *)(iVar8 + 0x67c);
          uVar2 = uVar3;
        }
        iVar8 = *(int *)(iVar8 + 0xd60);
      } while (iVar8 != 0);
      if (DAT_ram_8002c8cc < uVar2) {
        FUN_ram_000efe3c(0xd,uVar6,**(undefined2 **)(param_1 + 0x3a04),0);
        return iVar7;
      }
    }
    return iVar7;
  }
  FUN_ram_000ee260(s_qtn_framedesc_acquire__corrupt_f_ram_001c016c);
  *(undefined4 *)(param_1 + 0x3d90) = 0;
  FUN_ram_000e7da8(iVar8);
  DAT_ram_80037850 = DAT_ram_80037850 + 1;
  DAT_ram_80037854 = DAT_ram_80037854 | param_3;
  return 0;
}


