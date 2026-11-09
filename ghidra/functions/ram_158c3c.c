/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158c3c */

void FUN_ram_00158c3c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_2 + 0x67c));
  FUN_ram_00156738(iVar1 + 0x80,1,*(undefined1 *)(param_2 + 0x65),2);
  FUN_ram_80025e54(iVar1 + 100,*(undefined4 *)(param_2 + 0x38c),2);
  *(undefined4 *)(param_2 + 0x390) = *(undefined4 *)(param_2 + 0x38c);
  return;
}


