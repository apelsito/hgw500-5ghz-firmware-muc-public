/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f99ec */

void FUN_ram_000f99ec(int param_1,uint param_2)

{
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) =
       param_2 & 3 | *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) & 0xfffffffc;
  return;
}


