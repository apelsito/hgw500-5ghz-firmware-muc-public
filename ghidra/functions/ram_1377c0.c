/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001377c0 */

void FUN_ram_001377c0(uint param_1,uint param_2)

{
  DAT_ram_8003788c = param_1 | DAT_ram_8003788c << 8;
  DAT_ram_80037890 = param_2 | DAT_ram_80037890 << 8;
  return;
}


