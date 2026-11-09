/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00155e44 */

undefined4 FUN_ram_00155e44(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_00155e14();
  if ((iVar1 + 0x18 == 0x18) || (*(int *)(iVar1 + 0x18 + param_2 * 4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_000e2000();
  }
  return uVar2;
}


