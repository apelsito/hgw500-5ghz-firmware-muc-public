/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f12ec */

void FUN_ram_000f12ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 < 1) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  iVar1 = 0;
  LP_START = 0xf1308;
  LP_END = 0xf1318;
  do {
    iVar2 = iVar1 * 0x20;
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + iVar4) = *(byte *)(iVar4 + iVar2) | 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


