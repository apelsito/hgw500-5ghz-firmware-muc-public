/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146e40 */

void FUN_ram_00146e40(undefined4 param_1,uint param_2)

{
  if (param_2 == 0) {
    FUN_ram_000ee260(s_DYNAMIC_AC__invalid_debug_value_ram_001c5a58);
  }
  else {
    DAT_ram_0020fdb4 = param_2 >> 0x18;
    DAT_ram_0020fdbc = param_2 >> 8 & 0xff;
    DAT_ram_0020fdb8 = -(param_2 >> 0x10 & 0xff);
  }
  FUN_ram_000ee260(s_DYNAMIC_AC__debug__d__rssi_min___ram_001c5a7c,DAT_ram_0020fdb4,DAT_ram_0020fdb8
                   ,DAT_ram_0020fdbc);
  return;
}


