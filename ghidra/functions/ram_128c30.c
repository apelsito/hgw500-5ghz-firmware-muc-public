/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128c30 */

undefined4 FUN_ram_00128c30(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3b20) + 0xc);
  uVar2 = *(uint *)(iVar1 + 0x2000);
  if (param_2 == 0) {
    uVar2 = uVar2 & 0xffffffbf;
  }
  else {
    uVar2 = uVar2 | 0x40;
  }
  *(uint *)(iVar1 + 0x2000) = uVar2;
  return 0;
}


