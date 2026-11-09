/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018ade0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018ade0(int param_1)

{
  if (param_1 < 4) {
    param_1 = param_1 * 0x20;
    _DAT_ram_e6090184 = *(undefined4 *)(&DAT_ram_0019d520 + param_1);
    _DAT_ram_e6090188 = *(undefined4 *)(&DAT_ram_0019d524 + param_1);
    _DAT_ram_e609018c = *(undefined4 *)(&DAT_ram_0019d528 + param_1);
    _DAT_ram_e6090190 = *(undefined4 *)(&DAT_ram_0019d52c + param_1);
    _DAT_ram_e6090194 = *(undefined4 *)(&DAT_ram_0019d530 + param_1);
    _DAT_ram_e6090198 = *(undefined4 *)(&DAT_ram_0019d534 + param_1);
    _DAT_ram_e609019c = *(undefined4 *)(&DAT_ram_0019d538 + param_1);
    _DAT_ram_e60901a0 = *(undefined4 *)(&DAT_ram_0019d53c + param_1);
  }
  else {
    FUN_ram_000ee260(s_error__the_pppc_step_size_option_ram_001cb0e8,3);
  }
  return;
}


