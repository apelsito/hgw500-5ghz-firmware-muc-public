/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016fd88 */

void FUN_ram_0016fd88(void)

{
  undefined4 in_r4;
  
  FUN_ram_00189984();
  FUN_ram_00171acc(0);
  FUN_ram_001715c8(0);
  DAT_ram_0018c378 = 1;
  FUN_ram_0016fd10(&DAT_ram_0018c370);
  FUN_ram_001663e8(in_r4);
  return;
}


