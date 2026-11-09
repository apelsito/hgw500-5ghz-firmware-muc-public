/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001192fc */

undefined4 FUN_ram_001192fc(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[2];
  iVar4 = *param_1;
  FUN_ram_000e7d50(iVar5 + 4);
  if (param_1[0x45] == 0) {
    *(int *)(iVar5 + 0x10) = param_1[0x46];
  }
  else {
    *(int *)(param_1[0x45] + 0x118) = param_1[0x46];
  }
  *(int *)param_1[0x46] = param_1[0x45];
  piVar2 = (int *)param_1[0x4a];
  iVar3 = 0;
  if (param_1[0x49] != 0) {
    *(int **)(param_1[0x49] + 0x128) = piVar2;
    iVar3 = param_1[0x49];
  }
  *piVar2 = iVar3;
  FUN_ram_000e7da8(iVar5 + 4);
  if (((*(char *)(iVar4 + 0x2c) == '\x06') && ((*(ushort *)(param_1 + 3) & 0x10) != 0)) &&
     (*(short *)(iVar4 + 0x30) != 0)) {
    uVar1 = *(short *)(iVar4 + 0x30) - 1;
    DAT_ram_800370a0 = (uint)uVar1;
    *(ushort *)(iVar4 + 0x30) = uVar1;
  }
  return 0;
}


