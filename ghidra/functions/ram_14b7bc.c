/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014b7bc */

void FUN_ram_0014b7bc(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  FUN_ram_000ee260(s_SFS_Feature__d___ram_001c64e0);
  iVar6 = param_2 * 0x30 + param_1 + 0x5abc;
  if (*(int *)(param_1 + 0x5abc + param_2 * 0x30) != 0) {
    FUN_ram_000ee260(&DAT_ram_001c64f4);
  }
  FUN_ram_000ee260(&DAT_ram_001c64f8);
  FUN_ram_000ee260(s_MODE___d__ram_001c64fc,2);
  if ((*(byte *)(iVar6 + 4) & 1) == 0) {
    pcVar2 = &DAT_ram_001c6514;
  }
  else {
    pcVar2 = s__AP__ram_001c650c;
  }
  FUN_ram_000ee260(&DAT_ram_001c64f4,pcVar2);
  if ((*(byte *)(iVar6 + 4) & 2) == 0) {
    pcVar2 = &DAT_ram_001c6514;
  }
  else {
    pcVar2 = s__STA__ram_001c6518;
  }
  FUN_ram_000ee260(&DAT_ram_001c64f4,pcVar2);
  if ((*(byte *)(iVar6 + 4) & 4) == 0) {
    pcVar2 = &DAT_ram_001c6514;
  }
  else {
    pcVar2 = s__PMP_ONLY__ram_001c6520;
  }
  FUN_ram_000ee260(&DAT_ram_001c64f4,pcVar2);
  if ((*(byte *)(iVar6 + 4) & 8) == 0) {
    pcVar2 = &DAT_ram_001c6514;
  }
  else {
    pcVar2 = s__WDS_DISABLE__ram_001c652c;
  }
  FUN_ram_000ee260(&DAT_ram_001c64f4,pcVar2);
  if ((*(byte *)(iVar6 + 4) & 0x10) == 0) {
    pcVar2 = &DAT_ram_001c6514;
  }
  else {
    pcVar2 = s__USE_DEFERS__ram_001c653c;
  }
  FUN_ram_000ee260(&DAT_ram_001c64f4,pcVar2);
  cVar1 = *(char *)(iVar6 + 4);
  if (cVar1 == '\0') {
    FUN_ram_000ee260(s_DISABLED_ram_001c654c);
    cVar1 = *(char *)(iVar6 + 4);
  }
  FUN_ram_000ee260(s___d__ram_001c6558,cVar1);
  FUN_ram_000ee260(s_TX_min_stats__d____d_ram_001c6560,5,*(undefined2 *)(iVar6 + 6));
  uVar5 = 100 >> (*(byte *)(iVar6 + 8) & 0x1f);
  uVar4 = (100 >> (*(byte *)(iVar6 + 9) & 0x1f)) + uVar5;
  if (*(byte *)(iVar6 + 9) == 0) {
    uVar4 = uVar5;
  }
  FUN_ram_000ee260(s_hw_retry_hi_thresh__d____d_ram_001c658c,3,uVar4 & 0xff);
  uVar5 = 100 >> (*(byte *)(iVar6 + 10) & 0x1f);
  uVar4 = (100 >> (*(byte *)(iVar6 + 0xb) & 0x1f)) + uVar5;
  if (*(byte *)(iVar6 + 0xb) == 0) {
    uVar4 = uVar5;
  }
  FUN_ram_000ee260(s_hw_retry_lo_thresh__d____d_ram_001c65b8,3,uVar4 & 0xff);
  uVar5 = 100 >> (*(byte *)(iVar6 + 0xc) & 0x1f);
  uVar4 = (100 >> (*(byte *)(iVar6 + 0xd) & 0x1f)) + uVar5;
  if (*(byte *)(iVar6 + 0xd) == 0) {
    uVar4 = uVar5;
  }
  FUN_ram_000ee260(s_defers_hi_thresh__d____d_ram_001c65e4,8,uVar4 & 0xff);
  uVar5 = 100 >> (*(byte *)(iVar6 + 0xe) & 0x1f);
  uVar4 = (100 >> (*(byte *)(iVar6 + 0xf) & 0x1f)) + uVar5;
  if (*(byte *)(iVar6 + 0xf) == 0) {
    uVar4 = uVar5;
  }
  FUN_ram_000ee260(s_defers_lo_thresh__d____d_ram_001c6610,8,uVar4 & 0xff);
  FUN_ram_000ee260(s_RX_min_stats__d____d_ram_001c663c,5,*(undefined2 *)(iVar6 + 0x10));
  uVar5 = 100 >> (*(byte *)(iVar6 + 0x12) & 0x1f);
  uVar4 = (100 >> (*(byte *)(iVar6 + 0x13) & 0x1f)) + uVar5;
  if (*(byte *)(iVar6 + 0x13) == 0) {
    uVar4 = uVar5;
  }
  FUN_ram_000ee260(s_retry_hi_thresh__d____d_ram_001c6668,4,uVar4 & 0xff);
  uVar5 = 100 >> (*(byte *)(iVar6 + 0x14) & 0x1f);
  uVar4 = (100 >> (*(byte *)(iVar6 + 0x15) & 0x1f)) + uVar5;
  if (*(byte *)(iVar6 + 0x15) == 0) {
    uVar4 = uVar5;
  }
  FUN_ram_000ee260(s_retry_lo_thresh__d____d_ram_001c6694,4,uVar4 & 0xff);
  FUN_ram_000ee260(s_Debounce_hi__d____d_ram_001c66c0,6,*(undefined1 *)(iVar6 + 0x16));
  FUN_ram_000ee260(s_lo__d____d_ram_001c66ec,6,*(undefined1 *)(iVar6 + 0x17));
  FUN_ram_000ee260(s_Lo_Switch_Delay__d____d_ram_001c6718,7,*(undefined1 *)(iVar6 + 0x18));
  if (*(char *)(iVar6 + 0x29) == '\0') {
    puVar3 = &DAT_ram_001c6774;
  }
  else {
    puVar3 = &DAT_ram_001c6770;
  }
  FUN_ram_000ee260(s_Status___s_ram_001c6744,puVar3);
  return;
}


