/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd718 */

void FUN_ram_000fd718(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = *(uint *)(iVar2 + 0x2000);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1 & 0x39e07a75;
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(uint *)(iVar2 + 0x2000) = uVar1 | 0x39e07a75;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2028) = *(uint *)(*(int *)(param_1 + 0xc) + 0x2028) | 0x100;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = *(uint *)(iVar2 + 0x202c);
  if (param_2 != (uint *)0x0) {
    param_2[1] = uVar1 & 0x79f;
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(uint *)(iVar2 + 0x202c) = uVar1 | 0x79f;
  return;
}


