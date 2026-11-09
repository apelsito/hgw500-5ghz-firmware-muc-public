/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121ef0 */

void FUN_ram_00121ef0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*(int *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c) + 0x46a5 +
                   (uint)*(byte *)(param_2 + 0xc) * 0x50);
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  **(undefined4 **)(param_2 + 0x10) = uVar2;
  return;
}


