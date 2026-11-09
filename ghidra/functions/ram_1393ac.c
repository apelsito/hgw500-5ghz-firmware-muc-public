/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001393ac */

void FUN_ram_001393ac(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 5;
  LP_START = 0x1393b8;
  LP_END = 0x1393e0;
  do {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x24) < 0) {
        iVar1 = iVar1 + ((1 << (param_2 & 0x1f)) + -1) * *(int *)(param_1 + 0x24) >>
                (param_2 & 0x1f);
      }
      *(int *)(param_1 + 0x24) = iVar1;
    }
    param_1 = param_1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


