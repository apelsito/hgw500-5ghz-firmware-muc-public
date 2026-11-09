/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00136614 */

undefined4 FUN_ram_00136614(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3b20);
  FUN_ram_0039fe00(param_1 + 0x24,param_2,6);
  FUN_ram_00104fa4(uVar1,0,param_1 + 0x24,1);
  return 0;
}


