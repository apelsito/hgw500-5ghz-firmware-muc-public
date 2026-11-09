/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001135a0 */

void FUN_ram_001135a0(int param_1)

{
  if (param_1 != 2) {
    (&DAT_ram_8002c98c)[param_1 * 3] = 0;
    *(undefined4 *)(&DAT_ram_8002c990 + param_1 * 0xc) = 0;
    return;
  }
  DAT_ram_8002c9a4 = 0;
  DAT_ram_8002c9a8 = 0;
  DAT_ram_8002c9b0 = 0;
  DAT_ram_8002c9b4 = 0;
  return;
}


