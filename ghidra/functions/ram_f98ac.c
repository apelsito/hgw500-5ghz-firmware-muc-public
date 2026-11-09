/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f98ac */

int FUN_ram_000f98ac(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x808);
  iVar2 = 0;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    *(int *)(param_1 + 0x808) = iVar1;
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x80c) = param_1 + 0x808;
    }
    iVar2 = *(int *)*param_2;
    if (iVar2 != 0) {
      FUN_ram_000eea80(iVar2,0,0x6c);
    }
  }
  return iVar2;
}


