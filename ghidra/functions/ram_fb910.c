/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb910 */

void FUN_ram_000fb910(int param_1,int param_2,uint param_3)

{
  *(uint *)(*(int *)(param_1 + 0xc) + 0x301c) =
       param_2 << 0x10 | 2U | *(uint *)(*(int *)(param_1 + 0xc) + 0x301c);
  FUN_ram_000fafac(param_1,0);
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3038) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x3038) & 0xffff803f | (param_3 & 0x1ff) << 6;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x301c) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x301c) | param_2 << 0x10 | 1U;
  FUN_ram_000fafac(param_1,0);
  return;
}


