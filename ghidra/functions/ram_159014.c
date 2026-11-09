/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159014 */

void FUN_ram_00159014(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10,undefined2 param_11,undefined2 param_12,
                     undefined1 param_13,byte param_14,byte param_15,undefined4 param_16,
                     undefined4 param_17)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_5 & 0x40) == 0) {
    iVar2 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x14);
LAB_ram_00159074:
      uVar1 = FUN_ram_000e2000(iVar2);
      goto LAB_ram_001590a0;
    }
  }
  else if (DAT_ram_0018c28c != 0) {
    iVar2 = DAT_ram_0018c28c + (uint)param_14 * 0x3c + 0x10;
    if (iVar2 != 0x10) {
      iVar2 = *(int *)(iVar2 + (uint)param_15 * 4);
      if (iVar2 != 0) goto LAB_ram_00159074;
    }
  }
  uVar1 = 0;
LAB_ram_001590a0:
  FUN_ram_00158d64(param_1,uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11,param_12,param_13,param_16,param_17);
  return;
}


