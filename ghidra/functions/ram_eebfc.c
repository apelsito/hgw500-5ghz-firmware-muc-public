/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eebfc */

void FUN_ram_000eebfc(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *pcVar3;
  }
  FUN_ram_0039fe00(param_1,param_2,iVar2 + 1);
  return;
}


