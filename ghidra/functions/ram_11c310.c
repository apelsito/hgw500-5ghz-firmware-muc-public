/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c310 */

void FUN_ram_0011c310(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x690) != 0)) {
    FUN_ram_000f7d60();
    *(undefined4 *)(param_1 + 0x690) = 0;
    FUN_ram_0013d720(param_1,param_1 + 0x694);
    FUN_ram_0013d720(param_1,param_1 + 0x6a4);
    iVar2 = param_1 + 0x6c8;
    iVar1 = 8;
    do {
      FUN_ram_0013d720(param_1,iVar2);
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 != 0);
  }
  return;
}


