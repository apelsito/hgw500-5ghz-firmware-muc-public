/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121b60 */

void FUN_ram_00121b60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_2 + 0x10);
  iVar1 = FUN_ram_0011a598(*(undefined4 *)(param_1 + 0x1c),puVar3 + 4);
  if (iVar1 == 0) {
    puVar3[3] = 1;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x214);
    puVar3[2] = *(uint *)(*(int *)(iVar1 + 0x388) + 0xa0);
    puVar3[1] = uVar2 >> 0x1f;
    *puVar3 = uVar2 & 0x7f;
    puVar3[3] = 0;
  }
  return;
}


