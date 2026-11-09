/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146d30 */

void FUN_ram_00146d30(void)

{
  FUN_ram_00146bc0();
  FUN_ram_0018aaf4(0x20);
  FUN_ram_0018ae6c();
  FUN_ram_0018ae60();
  FUN_ram_0018aa8c(DAT_ram_8002c901 != '\0');
  DAT_ram_0020fda8 = FUN_ram_0018ae6c();
  DAT_ram_0020fdac = 1;
  DAT_ram_0020fdb0 = 0x20;
  return;
}


