/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183bec */

void FUN_ram_00183bec(uint *param_1,uint param_2,uint param_3,int param_4)

{
  *param_1 = param_2 & param_4 << (param_3 & 0x1f) | *param_1 & ~param_2;
  return;
}


