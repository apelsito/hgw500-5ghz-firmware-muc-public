/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80025e54 */

void FUN_ram_80025e54(uint *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = param_2 | *param_1;
  }
  else {
    if (param_3 == 1) {
      *param_1 = *param_1 & ~param_2;
      return;
    }
    if (param_3 != 2) {
      return;
    }
  }
  *param_1 = param_2;
  return;
}


