/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015ffec */

void FUN_ram_0015ffec(int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    FUN_ram_0015ff28(param_1 + 0x104);
  }
  return;
}


