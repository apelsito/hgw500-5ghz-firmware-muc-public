/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001170f8 */

void FUN_ram_001170f8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x40) != 0) {
    DAT_ram_800371b8 = DAT_ram_800371b8 + 1;
    DAT_ram_8002c9bc = DAT_ram_80038ee0;
    DAT_ram_8002c9c0 = DAT_ram_80038ee4;
  }
  if ((param_2 & 0x80) == 0) {
    return;
  }
  DAT_ram_800371bc = DAT_ram_800371bc + 1;
  return;
}


