/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00166404 */

void FUN_ram_00166404(uint param_1)

{
  int iVar1;
  
  iVar1 = 1 - param_1;
  if (1 < param_1) {
    iVar1 = 0;
  }
  if (DAT_ram_00192e08 == -1) {
    FUN_ram_000ee260(s_bbrf_hal_gain_adapt_init_needs_c_ram_001c8978);
    FUN_ram_000ee260(&DAT_ram_001c89a0);
  }
  DAT_ram_00192e08 = iVar1;
  if (param_1 == 0) {
    DAT_ram_00192e1c = 0x1e;
    FUN_ram_00183ee0();
    FUN_ram_00183ee0(DAT_ram_00192e1c);
  }
  return;
}


