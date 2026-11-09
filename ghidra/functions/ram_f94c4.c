/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f94c4 */

void FUN_ram_000f94c4(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0xc) + 0x548) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x548) & 0xfc0000ff | 0x461a800;
  return;
}


