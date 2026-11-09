/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110768 */

undefined4 FUN_ram_00110768(int param_1)

{
  if (*(char *)(param_1 + 0x40be) == '\0') {
    FUN_ram_001126f8();
  }
  else {
    FUN_ram_00110240();
  }
  return 0;
}


