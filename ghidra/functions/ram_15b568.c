/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015b568 */

uint FUN_ram_0015b568(uint param_1,uint param_2)

{
  if (param_1 == 2000) {
    param_1 = 0x800;
  }
  else if (param_1 != 0x2000) {
    FUN_ram_000ee260(s_Unsupported_cca_threshold__0x_08_ram_001c7a1c,param_1);
    param_1 = 0x2000;
  }
  for (; 2 < param_2; param_2 = param_2 - 3) {
    param_1 = param_1 * 2;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    param_1 = (param_1 >> 6) + (param_1 >> 2) + param_1;
  }
  return param_1;
}


