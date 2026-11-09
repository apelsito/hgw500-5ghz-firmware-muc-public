/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00104f84 */

void FUN_ram_00104f84(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x478);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffffffdf;
  }
  else {
    uVar1 = uVar1 | 0x20;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x478) = uVar1;
  return;
}


