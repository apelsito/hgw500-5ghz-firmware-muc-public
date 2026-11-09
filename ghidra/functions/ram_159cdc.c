/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159cdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00159cdc(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 == 0) {
    FUN_ram_000ee260(s_NULL_feedback_buffer_received_fr_ram_001c75fc);
    FUN_ram_000ee260(&DAT_ram_001c75b0);
    DAT_ram_0018c294 = DAT_ram_0018c294 + 1;
    if (((cRam00000022 == '\0') || (pcVar4 = *(code **)(param_1 + 0x4094), pcVar4 == (code *)0x0))
       || (*(int *)(param_1 + 0x40a0) != iRam00000014)) goto LAB_ram_00159d88;
  }
  else {
    DAT_ram_0018c294 = DAT_ram_0018c294 + 1;
    if (((*(char *)(iVar5 + 0x22) == '\0') ||
        (pcVar4 = *(code **)(param_1 + 0x4094), pcVar4 == (code *)0x0)) ||
       (*(int *)(param_1 + 0x40a0) != *(int *)(iVar5 + 0x14))) goto LAB_ram_00159d88;
  }
  (*pcVar4)(iVar5,*(undefined4 *)(param_1 + 0x4098),*(undefined4 *)(param_1 + 0x409c));
LAB_ram_00159d88:
  FUN_ram_00159a18(param_1,iVar5);
  iVar3 = *(int *)(param_1 + 0x3b54 + (uint)*(byte *)(iVar5 + 0x58) * 4);
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x458) & 7) != 0)) {
    FUN_ram_0010b568(param_1,iVar3,*(byte *)(iVar3 + 0x458) & 7);
  }
  FUN_ram_80025588(iVar5,0x5c);
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
    iVar3 = 0;
    bVar2 = false;
    do {
      iVar6 = 0;
      do {
        sync();
        iVar6 = iVar6 + 1;
      } while (iVar6 < 10);
      if ((!bVar2) && (iVar3 = iVar3 + 1, iVar3 == 0x3e9)) {
        FUN_ram_000ee260(s_MuC___s_ram_001c7098,s___topaz_hbm_wait_timeout_ram_001c71f8);
        bVar2 = true;
      }
    } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
  }
  _DAT_ram_e1020144 = iVar5;
  sync();
  _DAT_ram_e1020114 = 9;
  sync();
  STATUS32 = uVar1;
  return 9;
}


