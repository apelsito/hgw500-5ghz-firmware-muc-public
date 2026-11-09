/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001034c0 */

void FUN_ram_001034c0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x478);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffffbfff;
  }
  else {
    uVar1 = uVar1 | 0x4000;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x478) = uVar1;
  return;
}


