/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00155e14 */

undefined4 FUN_ram_00155e14(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_ram_0018c268 + param_1 * 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_ram_000e2000();
  }
  return uVar1;
}


