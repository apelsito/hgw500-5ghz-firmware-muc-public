/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e68a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e68a4(void)

{
  uint uVar1;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) goto LAB_ram_000e6900;
    }
  }
  else {
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if (uVar1 != 0) {
    FUN_ram_0039fe00(uVar1 + 0x40,&DAT_ram_0018c034,4);
    return;
  }
LAB_ram_000e6900:
  FUN_ram_000f7c10(15000,5,0,&LAB_ram_000eacc8,2);
  return;
}


