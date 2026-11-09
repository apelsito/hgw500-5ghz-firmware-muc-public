/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ffd8 */

void FUN_ram_0016ffd8(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_001710d0(0x298,0x1c000,0xe,param_1);
  FUN_ram_001710d0(0x2a0,0xc,2,param_2);
  DAT_ram_0018c1cc = (char)param_1;
  DAT_ram_0018c1cd = (char)param_2;
  return;
}


