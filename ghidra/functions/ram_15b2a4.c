/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015b2a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0015b2a4(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    DAT_ram_8002c9dc = _DAT_ram_e6090268;
  }
  if (((DAT_ram_8002c91c & 1) != 0) && (DAT_ram_8002c936 == '\0')) {
    if ((param_1 == 0) && (DAT_ram_8002c9dc != 0)) {
      _DAT_ram_e6090268 = DAT_ram_8002c9dc;
      if ((DAT_ram_8002c91c & 2) != 0) {
        FUN_ram_000ee260(s_AutoCCA__cca_th__reset_to_0x_08x_ram_001c78e8);
      }
    }
    DAT_ram_8002ca70 = 0;
    DAT_ram_8002ca74 = 0;
    FUN_ram_0015b10c(1);
    if ((DAT_ram_8002c91c & 2) != 0) {
      FUN_ram_000ee260(s_AutoCCA__reset_to_default__cca_t_ram_001c7930,DAT_ram_8002c9dc,param_2);
    }
  }
  return;
}


