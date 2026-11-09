/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103f88 */

void FUN_ram_00103f88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  iVar1 = 0;
  LP_START = 0x103f94;
  LP_END = 0x103fb0;
  do {
    if (param_2 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4 + 0x100400) = 0x40000000;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


