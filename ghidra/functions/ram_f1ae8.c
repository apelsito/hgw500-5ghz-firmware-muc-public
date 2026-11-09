/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_000f1ae8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  uVar2 = 1 << (param_1 & 0x1f);
  _DAT_ram_e0000098 = _DAT_ram_e0000098 | uVar2;
  sync();
  STATUS32 = uVar1;
  return (_DAT_ram_e0000098 & uVar2) != 0;
}


