/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd5c4 */

void FUN_ram_000fd5c4(int param_1)

{
  if (DAT_ram_8002c8bc != '\x03') {
    return;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) | 0x80000;
  return;
}


