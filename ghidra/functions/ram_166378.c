/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00166378 */

undefined4 FUN_ram_00166378(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (DAT_ram_00192e08 == -1) {
    FUN_ram_000ee260(s_bbrf_hal_gain_adapt_init_needs_c_ram_001c8978);
    FUN_ram_000ee260(&DAT_ram_001c89a0);
  }
  *param_1 = DAT_ram_00192e14;
  *param_2 = DAT_ram_00192e1c;
  *param_3 = DAT_ram_6003b3dc;
  return 0;
}


