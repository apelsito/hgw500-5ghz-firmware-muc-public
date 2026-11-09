/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6c54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000e6c54(void)

{
  uint uVar1;
  
  uVar1 = _DAT_ram_e000016c & 7;
  if (uVar1 == 2) {
    uVar1 = (_DAT_ram_e000000c >> 0x1b & 3) << 4 | 2;
  }
  if (((uVar1 | 0x500) != 0x500) && ((uVar1 | 0x500) != 0x532)) {
    return 0;
  }
  return 1;
}


