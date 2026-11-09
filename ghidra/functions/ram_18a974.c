/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018a974(void)

{
  undefined4 local_14;
  
  local_14 = 0;
  FUN_ram_00124df0(2,&local_14,s_hal_bb_qt4_qt4_bb_api_c_ram_001cb08c,0xcc0);
  _DAT_ram_e6010068 = 0;
  _DAT_ram_e6000008 = 0;
  FUN_ram_000e4fa0(5);
  FUN_ram_00125d98(2,&local_14,s_hal_bb_qt4_qt4_bb_api_c_ram_001cb08c,0xcca);
  return;
}


