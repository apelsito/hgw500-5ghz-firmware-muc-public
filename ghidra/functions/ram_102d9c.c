/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102d9c */

void FUN_ram_00102d9c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x54c);
  *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | uVar1;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x54c) = uVar1;
  return;
}


