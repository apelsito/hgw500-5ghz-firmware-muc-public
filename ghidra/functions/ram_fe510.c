/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fe510 */

void FUN_ram_000fe510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_ram_0018c420 != 0) {
    FUN_ram_000ee260(s__s__entry_ram_001bf7fc,s_hal_txq_init_ram_001a5eb4);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 2;
  *(undefined4 *)(param_1 + 0xf4) = 3;
  if (DAT_ram_0018c024 != 0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  iVar3 = 0;
  iVar6 = param_1 + 0x46c;
  iVar5 = 4;
  iVar4 = param_1;
  do {
    iVar4 = iVar4 + 0x10;
    iVar2 = iVar3 * 0x10;
    FUN_ram_000eea80(iVar4,0,0x10);
    iVar1 = param_1 + iVar2;
    *(undefined1 *)(iVar1 + 0x10) = 4;
    *(undefined2 *)(iVar1 + 0x12) = 8;
    *(int *)(iVar1 + 0x18) = iVar3 * 8 + -0x1afd0000;
    *(undefined1 *)(iVar1 + 0x11) = 2;
    FUN_ram_000eea80(iVar6,0,0x10);
    iVar1 = param_1 + 0x3f8 + iVar2;
    *(undefined1 *)(iVar1 + 0x74) = 4;
    *(undefined2 *)(param_1 + 0x46e + iVar2) = 8;
    *(int *)(iVar2 + param_1 + 0x474) = iVar3 * 8 + -0x1aed0000;
    *(undefined1 *)(iVar1 + 0x75) = 2;
    iVar6 = iVar6 + 0x10;
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar5 != 0);
  iVar5 = param_1 + 0x50;
  iVar3 = 4;
  iVar4 = 0;
  do {
    FUN_ram_000eea80(iVar5,0,0x10);
    iVar6 = iVar4 * 0x10 + param_1;
    *(undefined1 *)(iVar6 + 0x50) = 4;
    *(undefined2 *)(iVar6 + 0x52) = 0x80;
    *(int *)(iVar6 + 0x58) = iVar4 * 0x80 + -0x1afcffe0;
    *(undefined1 *)(iVar6 + 0x51) = 2;
    iVar5 = iVar5 + 0x10;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  iVar5 = param_1 + 0x90;
  iVar3 = 4;
  iVar4 = 0;
  do {
    FUN_ram_000eea80(iVar5,0,0x10);
    iVar6 = iVar4 * 0x10 + param_1;
    *(undefined1 *)(iVar6 + 0x90) = 4;
    *(undefined2 *)(iVar6 + 0x92) = 8;
    *(int *)(iVar6 + 0x98) = iVar4 * 8 + -0x1afcfde0;
    *(undefined1 *)(iVar6 + 0x91) = 2;
    iVar5 = iVar5 + 0x10;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x440) = 0x240;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x444) = 0x123c;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x100440) = 0x20;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x100444) = 0xffc;
  return;
}


