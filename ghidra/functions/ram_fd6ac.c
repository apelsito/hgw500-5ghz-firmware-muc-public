/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd6ac */

void FUN_ram_000fd6ac(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(*(int *)(param_1 + 0xc) + 0x2000);
  if (param_2 != 0) {
    uVar1 = *puVar2;
    *param_3 = uVar1;
    *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) = uVar1 | 0x10;
    return;
  }
  *puVar2 = *param_3;
  return;
}


