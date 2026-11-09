/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011d93c */

undefined4 FUN_ram_0011d93c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  if (iVar5 == 0) {
    FUN_ram_000ee260(s_qtn_ioctl_node_update__no_ni_arg_ram_001c2c9c);
  }
  else {
    iVar2 = FUN_ram_0011a598(*(int *)(param_1 + 0x1c),iVar5);
    if (iVar2 == 0) {
      FUN_ram_000ee260(s_qtn_ioctl_node_update__new_node___ram_001c2cc0,iVar5);
    }
    else if ((*(byte *)(iVar2 + 0x458) & 6) == 0) {
      uVar3 = *(uint *)(iVar5 + 0x108);
      if (*(char *)(iVar2 + 0x65) != *(char *)(iVar5 + 0xa7)) {
        *(char *)(iVar2 + 0x65) = *(char *)(iVar5 + 0xa7);
      }
      cVar1 = *(char *)(iVar5 + 0xa8);
      if (((uVar3 ^ *(uint *)(iVar2 + 0x38c)) & 0x80) != 0) {
        uVar3 = *(uint *)(iVar2 + 0x38c) & 0xffffff7f;
        *(uint *)(iVar2 + 0x38c) = uVar3;
        *(uint *)(iVar2 + 0x38c) = *(uint *)(iVar5 + 0x108) & 0x80 | uVar3;
      }
      if ((*(char *)(iVar2 + 0x67) != cVar1) && (*(char *)(iVar2 + 0x67) = cVar1, cVar1 != '\0')) {
        FUN_ram_0014dd68(iVar2);
      }
      FUN_ram_00158c3c(uVar4,iVar2);
      return 0;
    }
  }
  return 1;
}


