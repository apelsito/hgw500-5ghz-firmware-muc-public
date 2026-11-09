/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146bc0 */

void FUN_ram_00146bc0(void)

{
  if (DAT_ram_0020fdb4 != 0) {
    FUN_ram_000ee260(s_Dynamic_AC__clear_hist_ram_001c59e8);
  }
  FUN_ram_000eea80(&DAT_ram_0020fd6c,0,0x10);
  FUN_ram_000eea80(&DAT_ram_0020fd7c,0,4);
  FUN_ram_000eea80(&DAT_ram_0020fd80,0,4);
  DAT_ram_0020fd84 = 0;
  DAT_ram_0020fd88 = 0;
  DAT_ram_0020fd8c = 0;
  DAT_ram_0020fd90 = 0;
  DAT_ram_0020fd94 = 0;
  DAT_ram_0020fd98 = 0;
  DAT_ram_0020fda0 = 0;
  return;
}


