/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015db98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0015db98(int param_1,undefined1 param_2)

{
  uint uVar1;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  uVar1 = *(uint *)(uVar1 + 0x9c);
  if ((0x7fffffff < uVar1) && (uVar1 < 0x80080000)) {
    (&DAT_ram_e000000c)[uVar1] = param_2;
    *(undefined1 *)(param_1 + 4) = param_2;
    return;
  }
  if (uVar1 < 0x8000000) {
    *(undefined1 *)(uVar1 + 0x4000000c) = param_2;
    *(undefined1 *)(param_1 + 4) = param_2;
    return;
  }
  if (uVar1 < 0xc0000000) {
    uRam0000000c = param_2;
    *(undefined1 *)(param_1 + 4) = param_2;
    return;
  }
  *(undefined1 *)(uVar1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}


