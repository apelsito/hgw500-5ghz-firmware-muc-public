/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018aa18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018aa18(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_e6000000 = _DAT_ram_e6000000 & 0xfffffffe;
  }
  else {
    _DAT_ram_e6000000 = _DAT_ram_e6000000 | 1;
  }
  return;
}


