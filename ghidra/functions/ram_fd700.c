/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd700 */

void FUN_ram_000fd700(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x203c) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x203c);
  return;
}


