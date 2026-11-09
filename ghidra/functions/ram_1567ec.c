/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001567ec */

void FUN_ram_001567ec(int param_1,undefined1 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    do {
      FUN_ram_00156738(param_1,1,*param_2,2);
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


