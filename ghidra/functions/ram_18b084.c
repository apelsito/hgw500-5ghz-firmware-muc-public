/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018b084 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0018b084(undefined4 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_1c [4];
  
  uVar1 = FUN_ram_00134144();
  param_2 = param_2 | uVar1;
  if (DAT_ram_0018c414 == 0) {
    if (DAT_ram_0018c420 == 0) goto LAB_ram_0018b110;
    if (param_2 != 0) goto LAB_ram_0018b0f8;
    pcVar2 = &DAT_ram_001cb1ac;
  }
  else {
    DAT_ram_0018c414 = 0;
    DAT_ram_0018c418 = DAT_ram_0018c418 + 1;
    FUN_ram_000ee260(s_wds_interference_value__d__ram_001cb160);
    param_2 = 1;
    if (DAT_ram_0018c420 == 0) goto LAB_ram_0018b110;
LAB_ram_0018b0f8:
    pcVar2 = s___hard_ram_001cb1a4;
  }
  FUN_ram_000ee260(s_qtn_bb_tasklet_____BB_MAC_soft_s_ram_001cb17c,pcVar2);
LAB_ram_0018b110:
  DAT_ram_800371fc = DAT_ram_800371fc + 1;
  FUN_ram_00124df0(2,auStack_1c,s_hal_bb_qt4_qt4_bb_api_c_ram_001cb08c,0x4d7);
  FUN_ram_001340f0(param_1,param_2);
  FUN_ram_0018b004(param_1,1);
  FUN_ram_000e4fa0(0x14);
  _DAT_ram_e6000004 = _DAT_ram_e6000004 & 0xfffffff0;
  FUN_ram_00125d98(2,auStack_1c,s_hal_bb_qt4_qt4_bb_api_c_ram_001cb08c,0x4df);
  DAT_ram_80037200 = DAT_ram_80037200 + 1;
  return 0;
}


