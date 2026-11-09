/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000efbbc */

void FUN_ram_000efbbc(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_ram_000ee260(s_Resetting_host_interface__s__fla_ram_001bdcb0,param_1 + 4,
                   *(undefined2 *)(param_1 + 0xe));
  uVar2 = *(ushort *)(param_1 + 0xe);
  FUN_ram_000e82dc(param_1,0x24);
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x44);
      iVar5 = *(int *)(param_1 + 0x44) + iVar6 * 0x20;
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar1 = *(undefined1 *)(iVar4 + 1 + iVar6 * 0x20);
      *(undefined4 *)(iVar5 + 0xc) = 0;
      iVar4 = FUN_ram_000f1ae8(uVar1);
      while (iVar4 == 0) {
        iVar4 = FUN_ram_000f1ae8(uVar1);
      }
      iVar4 = *(int *)(param_1 + 0x44);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar6 * 4) = 0;
      FUN_ram_000f1b6c(*(undefined1 *)(iVar6 * 0x20 + 1 + iVar4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x30));
  }
  if ((uVar2 & 4) == 0) {
    uVar3 = 0;
    if ((uVar2 & 0x20) != 0) {
      uVar3 = 0x20;
    }
  }
  else if ((uVar2 & 0x20) == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = 0x24;
  }
  FUN_ram_000e82a4(param_1,uVar3);
  return;
}


