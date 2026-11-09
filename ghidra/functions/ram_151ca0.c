/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00151ca0 */

void FUN_ram_00151ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 18000);
  if (iVar2 == 0) {
    return;
  }
  if ((param_2 != 0x10 && param_2 != 0x11) && (param_2 != 0x12)) {
    return;
  }
  iVar1 = (&DAT_ram_00192d34)[param_2];
  if (iVar1 == 0) {
    return;
  }
  if (-1 < *(int *)(iVar2 + 0x14) - (DAT_ram_80038ee0 + iVar1)) {
    return;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    return;
  }
  *(int *)(iVar2 + 0x14) = DAT_ram_80038ee0 + iVar1;
  return;
}


