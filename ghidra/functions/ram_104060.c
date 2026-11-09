/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00104060 */

void FUN_ram_00104060(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_3 << 0x13;
  iVar2 = *(int *)(param_1 + 0x120);
  *(uint *)(*(int *)(param_1 + 0x11c) + 8) =
       *(uint *)(*(int *)(param_1 + 0x11c) + 8) & 0xffe7ffff | uVar1;
  iVar3 = *(int *)(param_1 + 0x124);
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffe7ffff | uVar1;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffe7ffff | uVar1;
  FUN_ram_000f9510(param_1,1);
  *(uint *)(*(int *)(param_1 + 0xc) + 0x202c) = *(uint *)(*(int *)(param_1 + 0xc) + 0x202c) | 0x20;
  FUN_ram_000ee260(s_hal_set_rts_bw_dyn__bw__d_dyn__d_ram_001bfa90,param_2,param_3,
                   *(undefined4 *)(iVar3 + 8),**(undefined4 **)(param_1 + 0x16c),
                   **(undefined4 **)(param_1 + 0x170),**(undefined4 **)(param_1 + 0x174));
  return;
}


