/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010a024 */

void FUN_ram_0010a024(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x10;
  do {
    if (*(int *)(param_2 + 0x7f0 + iVar3 * 0x4c) == 0) {
      uVar1 = DAT_ram_8002c22c / 1000;
      if (0x7ffffffe < uVar1) {
        uVar1 = 0x7ffffffe;
      }
      FUN_ram_000f7da0(0,uVar1);
    }
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar2 != 0);
  return;
}


