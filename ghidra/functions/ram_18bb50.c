/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018bb50 */

void FUN_ram_0018bb50(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x3b20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x28);
  FUN_ram_0010252c(uVar1,*param_2,param_3,param_2 + 0x20);
  return;
}


