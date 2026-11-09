/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001071b4 */

void FUN_ram_001071b4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  *param_2 = param_1;
  FUN_ram_000e7d40(param_2 + 1,1);
  FUN_ram_000e7d40(param_2 + 0x26,1);
  param_2[0x25] = param_3;
  param_2[0x29] = param_4;
  param_2[3] = 0;
  param_2[4] = param_2 + 3;
  param_2[0x28] = 1;
  return;
}


