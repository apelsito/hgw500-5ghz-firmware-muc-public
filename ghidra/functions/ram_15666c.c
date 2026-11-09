/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015666c */

void FUN_ram_0015666c(int param_1)

{
  DAT_ram_0018c268 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x18));
  DAT_ram_0018c27c = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x24));
  DAT_ram_0018c274 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x1c));
  DAT_ram_0018c278 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x20));
  DAT_ram_0018c280 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x2c));
  DAT_ram_0018c284 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x30));
  DAT_ram_0018c26c = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x34));
  DAT_ram_0018c270 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x38));
  DAT_ram_0018c288 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x14));
  DAT_ram_0018c28c = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x40));
  DAT_ram_8002c9d0 = FUN_ram_000e2000(*(undefined4 *)(param_1 + 0x3c));
  FUN_ram_000ee260(s_AuC_enabled__p__p_il__p__p_stats_ram_001c7334,DAT_ram_0018c268,DAT_ram_0018c27c
                   ,DAT_ram_0018c280,DAT_ram_0018c284,DAT_ram_0018c26c,DAT_ram_0018c270,
                   DAT_ram_8002c9d0);
  return;
}


