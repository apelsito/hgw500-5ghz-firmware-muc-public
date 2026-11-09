/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102688 */

void FUN_ram_00102688(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 4 + 0x400;
  *(uint *)(*(int *)(param_1 + 0xc) + iVar2) =
       *(uint *)(*(int *)(param_1 + 0xc) + iVar2) & 0x7fffffff;
  iVar2 = param_2 * 0x10;
  iVar3 = param_2 * 4 + 0x100400;
  iVar1 = *(int *)(param_1 + 0xc);
  *(byte *)(param_1 + iVar2 + 0x11) = *(byte *)(param_1 + iVar2 + 0x11) & 0xfe;
  *(uint *)(iVar1 + iVar3) = *(uint *)(iVar3 + iVar1) & 0x7fffffff;
  *(byte *)(iVar2 + param_1 + 0x3f8 + 0x75) = *(byte *)(param_1 + 0x3f8 + iVar2 + 0x75) & 0xfe;
  return;
}


