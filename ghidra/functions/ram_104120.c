/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00104120 */

void FUN_ram_00104120(int param_1)

{
  FUN_ram_000f9510(param_1,1);
  *(uint *)(*(int *)(param_1 + 0xc) + 0x202c) = *(uint *)(*(int *)(param_1 + 0xc) + 0x202c) | 0x20;
  return;
}


