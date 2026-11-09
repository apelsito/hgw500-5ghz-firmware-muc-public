/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00160020 */

void FUN_ram_00160020(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 < 5) {
      if (*(char *)(param_1 + 0x108) == '\0') {
        return;
      }
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x108) != '\0') {
        return;
      }
      uVar1 = 0;
    }
    FUN_ram_0015ff28(param_1 + 0x104,uVar1);
  }
  return;
}


