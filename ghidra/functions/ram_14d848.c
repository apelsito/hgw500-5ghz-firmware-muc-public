/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014d848 */

void FUN_ram_0014d848(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x53c) != 0)) {
    iVar3 = *(int *)(**(int **)(param_1 + 4) + 0x1c);
    FUN_ram_000f7d60();
    *(undefined4 *)(param_1 + 0x53c) = 0;
    FUN_ram_000f7d60(*(undefined4 *)(param_1 + 0x540));
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined1 *)(param_1 + 0x535) = 0;
    iVar4 = param_1 + 0x544;
    iVar2 = 6;
    do {
      FUN_ram_0013d720(param_1,iVar4);
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + 0x10;
    } while (iVar2 != 0);
    uVar1 = (uint)*(byte *)(param_1 + 0x52c);
    if ((uVar1 != 0) && (uVar1 < 10)) {
      *(undefined1 *)(uVar1 + iVar3 + 0x3fed) = 0;
    }
    *(undefined1 *)(param_1 + 0x52c) = 0;
  }
  return;
}


