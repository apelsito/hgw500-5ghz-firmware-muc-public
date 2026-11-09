/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001032e0 */

void FUN_ram_001032e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 >> 1) >> 0x1e;
  iVar1 = ((uVar2 + param_2 & 3) - uVar2) * 4 + 0x410;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1) = 0;
  return;
}


