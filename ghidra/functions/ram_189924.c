/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00189924 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00189924(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x28) {
    _DAT_ram_e6090448 = (uint)(param_1 == 0);
    return;
  }
  if (param_2 != 0x50) {
    return;
  }
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    if (param_1 == 1) {
      _DAT_ram_e6090448 = 1;
      _DAT_ram_e6090584 = 0;
      return;
    }
    if (param_1 == 2) {
      _DAT_ram_e6090448 = 1;
      _DAT_ram_e6090584 = 1;
      return;
    }
  }
  _DAT_ram_e6090448 = 0;
  _DAT_ram_e6090584 = uVar1;
  return;
}


