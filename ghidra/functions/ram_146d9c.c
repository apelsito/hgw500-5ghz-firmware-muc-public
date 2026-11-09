/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146d9c */

void FUN_ram_00146d9c(void)

{
  DAT_ram_0020fdac = FUN_ram_0018aab8();
  DAT_ram_0020fdb0 = FUN_ram_0018aae0();
  DAT_ram_0020fda8 = FUN_ram_0018ae54();
  FUN_ram_0018aaf4(0x20);
  FUN_ram_0018ae6c();
  FUN_ram_0018ae60();
  FUN_ram_0018aa8c(DAT_ram_8002c901 != '\0');
  return;
}


