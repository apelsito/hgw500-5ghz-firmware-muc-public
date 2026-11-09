/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f94ec */

void FUN_ram_000f94ec(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2000);
  if (param_2 == 4) {
    uVar1 = uVar1 | 0x100;
  }
  else {
    uVar1 = uVar1 & 0xfffffeff;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) = uVar1;
  return;
}


