/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001026e4 */

void FUN_ram_001026e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 4 + 0x400;
  *(uint *)(*(int *)(param_1 + 0xc) + iVar2) =
       *(uint *)(*(int *)(param_1 + 0xc) + iVar2) | 0x80000000;
  iVar2 = param_2 * 0x10;
  iVar3 = param_2 * 4 + 0x100400;
  iVar1 = *(int *)(param_1 + 0xc);
  *(byte *)(param_1 + iVar2 + 0x11) = *(byte *)(param_1 + iVar2 + 0x11) | 1;
  *(uint *)(iVar1 + iVar3) = *(uint *)(iVar3 + iVar1) | 0x80000000;
  *(byte *)(iVar2 + param_1 + 0x3f8 + 0x75) = *(byte *)(param_1 + 0x3f8 + iVar2 + 0x75) | 1;
  return;
}


