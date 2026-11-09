/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d0fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0010d0fc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar1 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  iVar1 = FUN_ram_000e2000(*(undefined4 *)(iVar1 + 0x9c));
  *(undefined4 *)(*(int *)(*piVar2 + 0x1c) + 0x40a4) = param_2;
  if (*(int *)(iVar1 + 4) == 0) {
    FUN_ram_000ee260(s_no_null_frame_descriptor__ram_001c0b04);
  }
  else {
    *(undefined4 *)(param_1 + 0x120) = 0;
    FUN_ram_80025588(*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 8));
    FUN_ram_0010cd5c(piVar2,*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 8),
                     *(undefined2 *)(iVar1 + 10),4,&LAB_ram_0010ec34,param_1,0);
  }
  return;
}


