/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011cf9c */

void FUN_ram_0011cf9c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  iVar5 = *(int *)(param_2 + 0x10);
  iVar1 = FUN_ram_0011c26c(*(int *)(param_1 + 0x1c),iVar5);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar5 + 0xc);
    iVar3 = iVar1 + 0x7e0 + uVar2 * 0x4c;
    if (*(char *)(iVar1 + 0x7e0 + uVar2 * 0x4c + 0x3f) == '\x01') {
      FUN_ram_000eea80(iVar3 + 0x1e,0,0x20);
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      *(short *)(iVar3 + 0x44) = *(short *)(iVar3 + 0x44) + 1;
      uVar2 = *(uint *)(iVar5 + 0xc);
    }
    *(undefined1 *)(iVar3 + 0x3f) = 0;
    FUN_ram_0015813c(uVar4,iVar1,uVar2 & 0xff);
  }
  return;
}


