/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f8f5c */

undefined4 FUN_ram_000f8f5c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x10c);
  FUN_ram_000eea80(iVar4,0,0x1440);
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(int *)(param_1 + 0x468) = param_1 + 0x464;
  piVar5 = (int *)(param_1 + 0x224);
  iVar2 = 0x30;
  iVar3 = iVar4;
  do {
    FUN_ram_000eea80(piVar5,0,0xc);
    *piVar5 = iVar3;
    piVar5[1] = 0;
    iVar2 = iVar2 + -1;
    **(undefined4 **)(param_1 + 0x468) = piVar5;
    *(int **)(param_1 + 0x468) = piVar5 + 1;
    piVar5 = piVar5 + 3;
    iVar3 = iVar3 + 0x6c;
  } while (iVar2 != 0);
  FUN_ram_000ee260(s_WMAC0__hal_fd_start__p_count__d_s_ram_001becdc,iVar4,0x30,0x6c,iVar4 + 0x1440);
  DAT_ram_0018c068 = iVar4;
  DAT_ram_0018c06c = iVar4 + 0x1440;
  FUN_ram_000eea80(&DAT_ram_002006bc,0,0x1000);
  iVar4 = *(int *)(param_1 + 0x4b0);
  DAT_ram_0018c070 = 0;
  FUN_ram_000eea80(iVar4,0,0x2a0);
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(int *)(param_1 + 0x80c) = param_1 + 0x808;
  piVar5 = (int *)(param_1 + 0x5c8);
  iVar2 = 8;
  iVar3 = iVar4;
  do {
    FUN_ram_000eea80(piVar5,0,0xc);
    *piVar5 = iVar3;
    piVar5[1] = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x80c);
    *(undefined1 *)(piVar5 + 2) = 1;
    iVar2 = iVar2 + -1;
    *puVar1 = piVar5;
    *(int **)(param_1 + 0x80c) = piVar5 + 1;
    piVar5 = piVar5 + 3;
    iVar3 = iVar3 + 0x54;
  } while (iVar2 != 0);
  FUN_ram_000ee260(s_WMAC1__hal_fd_start__p_count__d_s_ram_001bed0c,iVar4,8,0x54,iVar4 + 0x2a0);
  return 8;
}


