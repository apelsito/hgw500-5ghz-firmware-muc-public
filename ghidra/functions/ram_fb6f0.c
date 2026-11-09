/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb6f0 */

void FUN_ram_000fb6f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = 2;
  do {
    FUN_ram_000fb688(param_1,param_2,cVar2);
    cVar2 = cVar2 + '\x01';
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


