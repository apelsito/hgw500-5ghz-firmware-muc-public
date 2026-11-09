/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015cc94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0015cc94(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (DAT_ram_8002c8bc != '\x03') {
      *(undefined1 **)(param_1 + 0x3f80) = &LAB_ram_00114968;
      return;
    }
    if ((DAT_ram_8002c934 == '\0') || (DAT_ram_8002c943 != '\0')) {
      if (_DAT_ram_0046e000 != 0) {
        _DAT_ram_0046e000 = 0;
        FUN_ram_000e9534();
      }
      *(undefined1 **)(param_1 + 0x3f80) = &LAB_ram_80020000;
    }
    else {
      if ((_DAT_ram_0046e000 == 0) && (iVar1 = FUN_ram_000e95b0(), iVar1 != 0)) {
        _DAT_ram_0046e000 = 1;
      }
      *(undefined1 **)(param_1 + 0x3f80) = &LAB_ram_80020000;
    }
    FUN_ram_000ee260(s__RX_data_path_optimal_flag__d_ram_001c7fa0,_DAT_ram_0046e000);
    return;
  }
  if ((DAT_ram_0018c29c + 20000) - DAT_ram_80038ee0 < 0) {
    DAT_ram_0018c29c = DAT_ram_80038ee0;
    if (_DAT_ram_0046e000 == 0) {
      iVar1 = FUN_ram_000e95b0();
      if (iVar1 != 0) {
        _DAT_ram_0046e000 = 1;
      }
    }
    else {
      _DAT_ram_0046e000 = 0;
      FUN_ram_000e9534();
    }
    *(undefined1 **)(param_1 + 0x3f80) = &LAB_ram_80020000;
    return;
  }
  return;
}


