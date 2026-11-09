/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001793f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001793f0(void)

{
  int iVar1;
  uint uVar2;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar2 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar2 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = _DAT_ram_e00000bc + 0xe0000000;
  }
  iVar1 = FUN_ram_000e5038();
  if (*(int *)(uVar2 + 0x170) == 1) {
    DAT_ram_0018c3e0 = &PTR_DAT_ram_0019b204_ram_0019b354;
    return;
  }
  if (iVar1 == 8) {
    DAT_ram_0018c3e0 = &PTR_DAT_ram_0019b284_ram_0019b39c;
    return;
  }
  if (iVar1 != 0x11) {
    DAT_ram_0018c3e0 = &PTR_DAT_ram_0019b204_ram_0019b30c;
    return;
  }
  DAT_ram_0018c3e0 = &PTR_DAT_ram_0019b244_ram_0019b2c4;
  return;
}


