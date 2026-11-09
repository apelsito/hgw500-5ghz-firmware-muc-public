/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103428 */

void FUN_ram_00103428(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4 + 0x420) = 0;
  return;
}


