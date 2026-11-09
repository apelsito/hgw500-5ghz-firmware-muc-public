/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017b260 */

void FUN_ram_0017b260(undefined4 *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (10 < param_2) {
    param_2 = 10;
  }
  if (DAT_ram_0018c3b8 == '\x02') {
    FUN_ram_000ee260(s_fine_adj_gain_i____d__ram_001ca20c,param_2);
  }
  *(short *)((int)param_1 + 0x22) = (short)param_2;
  FUN_ram_0017b1b4(*param_1,(int)(short)param_2);
  if (*(char *)(param_1 + 0xb) == '\x04') {
    *(undefined1 *)(param_1 + 0xb) = 6;
  }
  return;
}


