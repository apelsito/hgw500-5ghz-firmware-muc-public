/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1120 */

void FUN_ram_000f1120(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (param_2 + 2) * 0x20;
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x44) + 1 + iVar4);
  iVar2 = FUN_ram_000f1ae8(uVar1);
  while (iVar2 == 0) {
    iVar2 = FUN_ram_000f1ae8(uVar1);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x2c) + (param_2 + 2) * 4);
  if (*piVar3 == -1) {
    *piVar3 = 0;
  }
  else if (*piVar3 != 0) {
    FUN_ram_000ee260(s_uc_hostif_init_mailbox_node__une_ram_001bdf8c,*piVar3,param_2);
  }
  FUN_ram_000f1b6c(*(undefined1 *)(*(int *)(param_1 + 0x44) + 1 + iVar4));
  return;
}


