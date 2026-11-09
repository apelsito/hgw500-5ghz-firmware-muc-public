/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_000f1b6c(uint param_1)

{
  uint uVar1;
  
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  _DAT_ram_e0000098 = _DAT_ram_e0000098 & ~(1 << (param_1 & 0x1f));
  sync();
  STATUS32 = uVar1;
  return _DAT_ram_e0000098;
}


