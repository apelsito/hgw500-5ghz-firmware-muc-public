/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014a618 */

void FUN_ram_0014a618(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x4028) = (uint)(param_2 << 10) / 1000;
  FUN_ram_000f7da0(*(undefined4 *)(param_1 + 0x464c));
  return;
}


