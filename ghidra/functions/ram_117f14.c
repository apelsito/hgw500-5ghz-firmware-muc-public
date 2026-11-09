/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00117f14 */

void FUN_ram_00117f14(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x28) == 8) {
    iVar1 = *(int *)(param_1 + 0x24) + 0x10;
  }
  else {
    if (*(short *)(param_1 + 0x28) != -0x227a) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24) + 0x18;
  }
  iVar1 = FUN_ram_00117d54(iVar1);
  if (iVar1 != 0) {
    FUN_ram_0039fe00(param_1 + 6,iVar1 + 0x14,6);
  }
  return;
}


