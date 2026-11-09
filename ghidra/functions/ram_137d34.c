/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137d34 */

int FUN_ram_00137d34(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_000e7d50(param_1 + 0x3884);
  iVar3 = -1000;
  for (iVar2 = *(int *)(param_1 + 0x388c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x114)) {
    while (iVar1 = *(int *)(iVar2 + 0x164), iVar1 != -1000) {
      if ((iVar1 != 0) && ((iVar3 == -1000 || (iVar1 < iVar3)))) {
        iVar3 = iVar1;
      }
      iVar2 = *(int *)(iVar2 + 0x114);
      if (iVar2 == 0) goto LAB_ram_00137d90;
    }
  }
LAB_ram_00137d90:
  FUN_ram_000e7da8(param_1 + 0x3884);
  return iVar3;
}


