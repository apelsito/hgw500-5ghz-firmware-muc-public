/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00116b84 */

void FUN_ram_00116b84(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_000ee260(s_rxvect__ll__x_rxg__x_dagg__x_MCS_ram_001c1e68,*(undefined2 *)param_1,
                     *(undefined1 *)((int)param_1 + 2),*(undefined1 *)((int)param_1 + 3),
                     (param_1[1] & 0x7f00) >> 8,(param_1[1] & 0x70000) >> 0x10,
                     *(undefined2 *)(param_1 + 3));
    FUN_ram_000ee260(s__x__x__x__x__x__x_ram_001c1e9c,*param_1,param_1[1],param_1[2],param_1[3],
                     param_1[4],param_1[5]);
  }
  return;
}


