/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014dd68 */

void FUN_ram_0014dd68(int param_1)

{
  if (*(char *)(param_1 + 0x4e8) == '\x02') {
    FUN_ram_0014d848(param_1);
    FUN_ram_0011bdb8(param_1);
  }
  return;
}


