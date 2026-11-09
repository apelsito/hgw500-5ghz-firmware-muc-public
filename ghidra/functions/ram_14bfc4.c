/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014bfc4 */

void FUN_ram_0014bfc4(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2 >> 8 & 0xf;
  if (4 < uVar2) {
    uVar2 = 4;
  }
  uVar3 = *param_2 >> 0xc & 0xf;
  if (3 < uVar3) {
    uVar3 = 4;
  }
  iVar1 = 4;
  if (uVar2 + 1 < 4) {
    iVar1 = uVar2 + 1;
  }
  *(int *)(param_1 + 0xd40) = iVar1 + *(int *)(param_1 + 0xd40);
  *(uint *)(param_1 + 0xd44) = *(int *)(param_1 + 0xd44) + uVar2;
  *(uint *)(param_1 + 0xd48) = *(int *)(param_1 + 0xd48) + uVar3;
  *(uint *)(param_1 + 0xd4c) = (uint)(byte)param_2[7] + *(int *)(param_1 + 0xd4c);
  return;
}


