/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121dd4 */

void FUN_ram_00121dd4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0x1c);
  iVar5 = **(int **)(param_2 + 0x10);
  iVar2 = FUN_ram_0011c26c(*(int *)(param_1 + 0x1c),*(int **)(param_2 + 0x10) + 1);
  if (iVar2 == 0) {
    return;
  }
  if (iVar5 == 0) {
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xffef | 0x40;
    FUN_ram_001594cc(iVar4,iVar2,3);
    if (*(int *)(iVar4 + 0x5b80) < 1) {
      cVar1 = *(char *)(iVar2 + 0x40e);
      goto joined_r0x00121ec8;
    }
    pcVar3 = s_qtn_ioctl_power_save__Device__pM_ram_001c378c;
  }
  else {
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) | 0x10;
    FUN_ram_001594cc(iVar4,iVar2,2);
    if (*(int *)(iVar4 + 0x5b80) < 1) {
      cVar1 = *(char *)(iVar2 + 0x40e);
      goto joined_r0x00121ec8;
    }
    pcVar3 = s_qtn_ioctl_power_save__Device__pM_ram_001c374c;
  }
  FUN_ram_000ee260(pcVar3,iVar2 + 0x96,DAT_ram_80038ee0,DAT_ram_80038ee4);
  FUN_ram_000ee260(&LAB_ram_001c37cc);
  cVar1 = *(char *)(iVar2 + 0x40e);
joined_r0x00121ec8:
  if (cVar1 == '\x03') {
    FUN_ram_0012c830(iVar2,0);
  }
  return;
}


