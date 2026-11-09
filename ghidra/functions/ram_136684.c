/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00136684 */

undefined4 FUN_ram_00136684(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3b20);
  FUN_ram_001143bc(param_1 + 0x24,param_2);
  FUN_ram_001050f8(uVar1,param_2);
  return 0;
}


