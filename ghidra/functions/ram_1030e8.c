/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001030e8 */

int FUN_ram_001030e8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_2 * 4 + 0x410 + *(int *)(param_1 + 0xc));
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + param_2 * 4 + 0x420);
  }
  return (int)((uVar1 & 0xf) + 1) >> 1;
}


