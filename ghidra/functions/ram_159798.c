/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159798 */

void FUN_ram_00159798(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_ram_00155e44();
  if (iVar1 != 0 && param_3 != 0) {
    FUN_ram_80025e54(iVar1 + 0xd4,*(int *)(iVar1 + 0xd4) + param_4,2);
    FUN_ram_80025e54(iVar1 + 0xd8,*(int *)(iVar1 + 0xd8) + param_5,2);
  }
  return;
}


