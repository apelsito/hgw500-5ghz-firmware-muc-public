/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014d910 */

void FUN_ram_0014d910(undefined4 param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x536) = param_3;
  uVar1 = FUN_ram_000f7c10(param_4,param_1,param_2,&LAB_ram_0014e1a8,2);
  *(undefined4 *)(param_2 + 0x53c) = uVar1;
  return;
}


