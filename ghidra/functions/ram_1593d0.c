/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001593d0 */

void FUN_ram_001593d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_00155e44();
  if (iVar2 != 0) {
    if (param_3 == 0) {
      iVar1 = 0xa0;
      param_5 = *(int *)(iVar2 + 0xa0) + param_4;
    }
    else {
      FUN_ram_80025e54(iVar2 + 0x9c,*(int *)(iVar2 + 0x9c) + param_4,2);
      iVar1 = 0xa4;
      param_5 = *(int *)(iVar2 + 0xa4) + param_5;
    }
    FUN_ram_80025e54(iVar2 + iVar1,param_5,2);
  }
  return;
}


