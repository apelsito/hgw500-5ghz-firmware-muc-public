/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e424 */

void FUN_ram_0011e424(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_ram_000e6c28(0x11);
  if (iVar1 != 0) {
    FUN_ram_000e7d50(param_1 + 0x3884);
    for (piVar2 = *(int **)(param_1 + 0x388c); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x45]) {
      if (((*piVar2 != 0) && (piVar2 != *(int **)(*piVar2 + 0x3c))) &&
         ((*(uint *)((int)piVar2 + 0x3c2) & 0x100000) != 0)) {
        FUN_ram_0013d37c(piVar2);
      }
    }
    FUN_ram_000e7da8(param_1 + 0x3884);
  }
  return;
}


