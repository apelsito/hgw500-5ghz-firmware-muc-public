/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011da28 */

void FUN_ram_0011da28(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x394));
    *(undefined4 *)(param_1 + 0x394) = 0;
    iVar1 = 4;
    do {
      FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x398));
      *(undefined4 *)(param_1 + 0x398) = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 4;
    } while (iVar1 != 0);
  }
  return;
}


