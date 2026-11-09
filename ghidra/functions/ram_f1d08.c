/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1d08 */

void FUN_ram_000f1d08(uint param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
  DAT_ram_001cb298 = DAT_ram_001cb298 & ~(1 << (param_1 & 0x1f));
  return;
}


