/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103230 */

void FUN_ram_00103230(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  param_4 = param_4 + param_3;
  if (DAT_ram_0018c084 != 0) {
    FUN_ram_000ee260(s__Starting_ndp__d__d__x_ram_001bfa00,param_2,param_3,param_4);
  }
  iVar1 = param_2 * 0x10;
  *(int *)(iVar1 + 0x480 + *(int *)(param_1 + 0xc)) = param_4;
  *(int *)(iVar1 + 0x484 + *(int *)(param_1 + 0xc)) = param_3;
  *(int *)(*(int *)(param_1 + 0xc) + iVar1 + 0x488) = param_4 - param_5;
  iVar1 = param_2 * 4 + 0x410;
  *(uint *)(*(int *)(param_1 + 0xc) + iVar1) =
       *(uint *)(iVar1 + *(int *)(param_1 + 0xc)) & 0xffffff3f | 0x80000190;
  return;
}


