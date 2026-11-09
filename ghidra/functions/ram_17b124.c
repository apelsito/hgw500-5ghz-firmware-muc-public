/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017b124 */

void FUN_ram_0017b124(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x17 < param_2) {
    param_2 = 0x17;
  }
  if (DAT_ram_0018c3b8 == '\x02') {
    FUN_ram_000ee260(s_coarse_adj_gain_i____d__ram_001ca1c4,param_2);
  }
  *(short *)(param_1 + 0x20) = (short)param_2;
  FUN_ram_0017ac74(param_1);
  if (*(char *)(param_1 + 0x2c) == '\x04') {
    *(undefined1 *)(param_1 + 0x2c) = 5;
  }
  return;
}


