/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e7ec */

void FUN_ram_0012e7ec(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(**(int **)(param_1 + 0xc) + 0x1c);
  iVar2 = **(int **)(*(int *)((*(int **)(param_1 + 0xc))[5] + 0x3c) + 0xd28);
  uVar1 = (param_2 & 0x1ff) << 0x10 | 0x2000000;
  if (*(short *)(iVar3 + 0x5aa4) != 0) {
    FUN_ram_000ee260(s_qtn_update_mu_sounding_paid__0x__ram_001c42e8);
  }
  *(uint *)(iVar2 + 0x48) = uVar1;
  *(uint *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0x13c) + 0x48) = uVar1;
  return;
}


