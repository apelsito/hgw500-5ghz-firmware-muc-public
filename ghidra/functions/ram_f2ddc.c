/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f2ddc */

void FUN_ram_000f2ddc(void)

{
  FUN_ram_000eea80(&DAT_ram_001d4444,0,0x8000);
  DAT_ram_0018c050 = 0;
  FUN_ram_000f2ccc(s_Event_log_init_ram_001be194);
  return;
}


