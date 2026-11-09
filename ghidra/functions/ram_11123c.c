/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011123c */

int FUN_ram_0011123c(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  iVar3 = *(int *)(*param_1 + 0x1c);
  if (uVar2 == 1) {
    uVar2 = *(uint *)(iVar3 + 0x4060);
    if (uVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x4060) = 8;
      iVar3 = FUN_ram_0011106c(param_1,param_2);
      if (iVar3 != 0) {
        FUN_ram_0010faec(param_1,param_2);
        return iVar3;
      }
      return 0;
    }
    if ((uVar2 & 8) != 0) {
      if (*(uint *)(param_2 + 8) != *(uint *)(param_2 + 4)) {
        if (*(int *)(iVar3 + 0x5b80) < 1) goto LAB_ram_001112cc;
        pcVar1 = s_REMAIN_CHANNEL__failed_for_alrea_ram_001c16d8;
        uVar2 = *(uint *)(param_2 + 8) & 0xff;
        goto LAB_ram_001112b4;
      }
    }
    if (*(int *)(iVar3 + 0x5b80) < 1) goto LAB_ram_001112cc;
    pcVar1 = s_REMAIN_CHANNEL__failed_for_other_ram_001c16a0;
  }
  else {
    if (*(int *)(iVar3 + 0x5b80) < 1) goto LAB_ram_001112cc;
    pcVar1 = s_REMAIN_CHANNEL__status__u__is_no_ram_001c1674;
  }
LAB_ram_001112b4:
  FUN_ram_000ee260(pcVar1,uVar2);
  FUN_ram_000ee260(0x1c0000);
LAB_ram_001112cc:
  FUN_ram_0010faec(param_1,param_2);
  return -0xb;
}


