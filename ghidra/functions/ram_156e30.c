/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156e30 */

void FUN_ram_00156e30(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_ram_0018c260;
  if (DAT_ram_0018c25c != 0) {
    if (param_2 == 0) {
      *DAT_ram_0018c260 = 0x1e;
      iVar2 = *piVar1;
      while (iVar2 != 0) {
        iVar2 = 100;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar2 = *piVar1;
      }
    }
    else {
      FUN_ram_001563ac(0x1d,0,0,0,0);
    }
  }
  return;
}


