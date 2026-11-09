/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010252c */

void FUN_ram_0010252c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x10 + param_2 * 0x10;
  if (DAT_ram_0018c024 == 0) {
    iVar1 = param_2 * 4 + 0x400;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = 0x40000000;
    iVar3 = param_2 * 0x10 + param_1 + 0x46c;
    if ((*(byte *)(iVar2 + 1) & 1) != 0) goto LAB_ram_001025c4;
    if (DAT_ram_0018c024 == 0) goto LAB_ram_00102610;
    if (1 < param_2) goto LAB_ram_00102638;
    if ((*(byte *)(iVar3 + 1) & 1) == 0) {
      return;
    }
  }
  else {
    if (1 < param_2) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4 + 0x400) = 0x40000000;
    }
    iVar3 = param_2 * 0x10 + param_1 + 0x46c;
    if ((*(byte *)(iVar2 + 1) & 1) == 0) {
      if (DAT_ram_0018c024 == 0) {
        iVar1 = param_2 * 4 + 0x400;
LAB_ram_00102610:
        iVar1 = iVar1 + 0x100000;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = 0x40000000;
        if ((*(byte *)(iVar3 + 1) & 1) == 0) {
          return;
        }
        goto LAB_ram_00102678;
      }
      if (param_2 < 2) {
        if ((*(byte *)(iVar3 + 1) & 1) == 0) {
          return;
        }
        goto LAB_ram_00102670;
      }
LAB_ram_00102638:
      *(undefined4 *)(param_2 * 4 + 0x100400 + *(int *)(param_1 + 0xc)) = 0x40000000;
      if ((*(byte *)(iVar3 + 1) & 1) == 0) {
        return;
      }
    }
    else {
      iVar1 = param_2 * 4 + 0x400;
LAB_ram_001025c4:
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = 0x80000000;
      if (DAT_ram_0018c024 == 0) goto LAB_ram_00102610;
      if (1 < param_2) goto LAB_ram_00102638;
      if ((*(byte *)(iVar3 + 1) & 1) == 0) {
        return;
      }
    }
  }
LAB_ram_00102670:
  iVar1 = param_2 * 4 + 0x100400;
LAB_ram_00102678:
  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = 0x80000000;
  return;
}


