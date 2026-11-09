/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00105680 */

void FUN_ram_00105680(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2000);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffbffff;
  }
  else {
    uVar1 = uVar1 | 0x40000;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) = uVar1;
  return;
}


