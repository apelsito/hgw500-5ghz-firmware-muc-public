/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156560 */

void FUN_ram_00156560(uint param_1)

{
  DAT_ram_0018c254 = (ushort)param_1 & 0xfff;
  DAT_ram_0018c258 = (byte)(param_1 >> 0x18) & 1;
  DAT_ram_0018c256 = (undefined2)((param_1 & 0xfff000) >> 0xc);
  FUN_ram_000ee260(s_set_auc_aggressive_agg_params__c_ram_001c72ec);
  return;
}


