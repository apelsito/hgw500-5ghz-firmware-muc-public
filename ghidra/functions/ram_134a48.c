/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00134a48 */

void FUN_ram_00134a48(int param_1)

{
  if (param_1 == 0x28) {
    DAT_ram_0018c184 = 0xc;
    return;
  }
  if (param_1 != 0x50) {
    DAT_ram_0018c184 = 4;
    return;
  }
  DAT_ram_0018c184 = 0x8000000c;
  return;
}


