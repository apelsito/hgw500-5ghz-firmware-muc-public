/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001711e0 */

undefined4 FUN_ram_001711e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_00183c8c();
  uVar2 = FUN_ram_00171128(param_1,param_2,param_3);
  FUN_ram_00183cd0(uVar1);
  return uVar2;
}


