/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011cd14 */

void FUN_ram_0011cd14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = FUN_ram_0011c26c(*(int *)(param_1 + 0x1c),iVar2);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar2 + 0xc) * 0x4c;
    iVar3 = iVar2 + iVar1 + 0x7e0;
    if (*(char *)(iVar1 + 0x7e0 + iVar2 + 0x40) == '\x01') {
      FUN_ram_0010a0e0(uVar4,iVar3,0);
    }
    *(undefined1 *)(iVar3 + 0x40) = 0;
  }
  return;
}


