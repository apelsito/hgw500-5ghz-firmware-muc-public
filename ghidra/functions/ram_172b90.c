/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00172b90 */

void FUN_ram_00172b90(int param_1)

{
  FUN_ram_001710d0(0x2d4,0x20,5,1 - param_1);
  FUN_ram_001710d0(0x2d4,0x800,0xb,1 - param_1);
  FUN_ram_001710d0(0x2d4,0x20000,0x11,1 - param_1);
  FUN_ram_001710d0(0x2d4,0x800000,0x17,1 - param_1);
  return;
}


