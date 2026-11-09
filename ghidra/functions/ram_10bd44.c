/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010bd44 */

void FUN_ram_0010bd44(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x3b20);
  FUN_ram_0011bb78(param_2);
  uVar1 = FUN_ram_0011bc70(0,0,0);
  FUN_ram_001292bc(param_1,uVar1);
  uVar1 = FUN_ram_0011bc70(0,0,0);
  FUN_ram_00103db8(uVar2,uVar1);
  return;
}


