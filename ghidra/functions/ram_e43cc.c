/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e43cc */

void FUN_ram_000e43cc(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  LP_START = 0xe43e4;
  LP_END = 0xe43ec;
  puVar1 = (undefined4 *)(param_1 + -0x19f00000);
  do {
    *puVar1 = *param_3;
    param_2 = param_2 + -1;
    puVar1 = puVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_2 != 0);
  return;
}


