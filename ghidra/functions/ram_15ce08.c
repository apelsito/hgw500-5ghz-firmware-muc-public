/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015ce08 */

void FUN_ram_0015ce08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 3;
  do {
    FUN_ram_80023fd0(param_1,iVar2,param_2,0);
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar1 != 0);
  return;
}


