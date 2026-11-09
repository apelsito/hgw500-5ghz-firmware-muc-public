/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013452c */

void FUN_ram_0013452c(undefined4 param_1,uint param_2)

{
  FUN_ram_0018b384(param_1,1);
  DAT_ram_0020fc94 = (uint)(DAT_ram_0020fca4 != 0);
  DAT_ram_0020fc98 = (uint)(DAT_ram_0020fca8 != 0);
  DAT_ram_0020fca0 = 0;
  DAT_ram_0020fcac = DAT_ram_80038ee0;
  DAT_ram_0020fcb0 = DAT_ram_80038ee4;
  if ((param_2 & 4) == 0) {
    DAT_ram_800371f0 = DAT_ram_800371f0 + 1;
  }
  else {
    DAT_ram_800371f4 = DAT_ram_800371f4 + 1;
  }
  if (DAT_ram_0018c420 != 0) {
    FUN_ram_000ee260(s_bb_hang_wdog_triggered__deferred_ram_001c4478,param_2);
  }
  return;
}


