/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001563ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_001563ac(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = DAT_ram_0018c260;
  uVar3 = 0;
  DAT_ram_0018c260[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = param_4;
  piVar1[4] = 0;
  *piVar1 = param_1;
  _DAT_ram_e0000178 = 1 << (param_5 & 0x1f) | 1 << (param_5 + 0x10 & 0x1f);
  sync();
  iVar2 = *DAT_ram_0018c260;
  while( true ) {
    if (iVar2 == 0) goto LAB_ram_0015652c;
    if (199999 < uVar3) break;
    iVar2 = 100;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = *DAT_ram_0018c260;
    uVar3 = uVar3 + 1;
  }
  uVar3 = 0;
  while( true ) {
    uVar3 = uVar3 + 1;
    FUN_ram_000ee260(s_qtn_mproc_sync_auc_ipc_wait_done_ram_001c7214,uVar3,DAT_ram_80038ee0,param_1)
    ;
    if ((DAT_ram_0018c280 == (undefined4 *)0x0) || (DAT_ram_0018c284 == (undefined4 *)0x0)) {
      FUN_ram_000ee260(s_AuC_last_ilink_addresses_are_not_ram_001c7274);
    }
    else {
      FUN_ram_000ee260(s_AuC_last_ilink1__p_ilink2__p_ram_001c7254,*DAT_ram_0018c280,
                       *DAT_ram_0018c284);
    }
    if (9 < uVar3) {
      FUN_ram_000ee260(s_qtn_mproc_sync_auc_ipc_wait_done_ram_001c72a4);
      FUN_ram_80030314();
    }
    if (*DAT_ram_0018c260 == 0) break;
    uVar4 = 0;
    while (uVar4 < 200000) {
      iVar2 = 100;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar4 = uVar4 + 1;
      if (*DAT_ram_0018c260 == 0) goto LAB_ram_0015652c;
    }
  }
LAB_ram_0015652c:
  return DAT_ram_0018c260[1];
}


