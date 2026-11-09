/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ecf3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000ecf3c(void)

{
  uint uVar1;
  
  uVar1 = STATUS32;
  STATUS32 = uVar1 & 0xfffffff9;
  AUX_IRQ_LV12 = 0;
  _DAT_ram_e000005c = 0;
  AUX_IRQ_LEV = 0x4018;
  AUX_IENABLE = 0x1000000;
  FUN_ram_000ece88();
  return;
}


