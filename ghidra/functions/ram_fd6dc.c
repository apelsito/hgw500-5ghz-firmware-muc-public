/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd6dc */

void FUN_ram_000fd6dc(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2000);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffffefff;
  }
  else {
    uVar1 = uVar1 | 0x1000;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) = uVar1;
  return;
}


