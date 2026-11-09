/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb55c */

void FUN_ram_000fb55c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = 2;
  do {
    FUN_ram_000fb300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,cVar2);
    cVar2 = cVar2 + '\x01';
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


