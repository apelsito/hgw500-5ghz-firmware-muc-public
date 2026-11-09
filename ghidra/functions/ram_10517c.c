/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010517c */

void FUN_ram_0010517c(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(iVar3 + 0x300c);
  *param_2 = (char)uVar2;
  param_2[1] = (char)((uint)uVar2 >> 8);
  param_2[2] = (char)((uint)uVar2 >> 0x10);
  uVar1 = *(undefined4 *)(iVar3 + 0x3010);
  param_2[3] = (char)((uint)uVar2 >> 0x18);
  param_2[4] = (char)uVar1;
  param_2[5] = (char)((uint)uVar1 >> 8);
  return;
}


