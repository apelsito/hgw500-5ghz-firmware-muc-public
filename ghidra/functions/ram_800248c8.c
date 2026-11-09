/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800248c8 */

void FUN_ram_800248c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 3;
  do {
    iVar2 = FUN_ram_80024744(param_1,iVar3);
    if (iVar2 != 0) {
      return;
    }
    iVar1 = iVar1 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar1 != 0);
  return;
}


