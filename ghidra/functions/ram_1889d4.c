/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001889d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001889d4(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  _DAT_ram_e609112c = *param_1;
  _DAT_ram_e609113c = *param_2;
  _DAT_ram_e6091130 = param_1[1];
  _DAT_ram_e6091140 = param_2[1];
  _DAT_ram_e6091134 = param_1[2];
  _DAT_ram_e6091144 = param_2[2];
  _DAT_ram_e6091138 = param_1[3];
  _DAT_ram_e6091148 = param_2[3];
  return;
}


