/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00188ae8(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  _DAT_ram_e609114c = *param_2;
  _DAT_ram_e6091150 = param_2[1];
  _DAT_ram_e6091154 = param_2[2];
  _DAT_ram_e6091158 = param_2[3];
  return;
}


