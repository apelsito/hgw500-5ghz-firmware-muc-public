/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f6bf8 */

void FUN_ram_000f6bf8(void)

{
  DAT_ram_0018c054 = FUN_ram_000f6b50(&LAB_ram_80020000,0x1869);
  DAT_ram_0018c058 = FUN_ram_000f6b50(FUN_ram_000e2000,0x2a6e4);
  return;
}


