/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141e0c */

void FUN_ram_00141e0c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 4;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x130) = 0;
  *(undefined4 *)(iVar1 + 0x23c) = 0;
  *(undefined4 *)(iVar1 + 0x348) = 0;
  *(undefined1 *)(param_2 + param_1 + 0x454) = 0;
  return;
}


