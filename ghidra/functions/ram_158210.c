/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158210 */

void FUN_ram_00158210(uint param_1)

{
  FUN_ram_00156f44(param_1 >> 0x18,(param_1 & 0xf00000) >> 0x14,(param_1 & 0xf0000) >> 0x10,
                   (param_1 & 0xff00) >> 8,param_1 & 0xff);
  return;
}


