/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013f05c */

void FUN_ram_0013f05c(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint in_r6;
  ushort in_stack_00000004;
  
  *(uint *)(param_2 + 0x24e8) = in_r6;
  uVar1 = (uint)in_stack_00000004 << 5;
  if (in_r6 < (uint)in_stack_00000004 << 5) {
    uVar1 = in_r6;
  }
  *(uint *)(param_2 + 0x24ec) = uVar1;
  return;
}


