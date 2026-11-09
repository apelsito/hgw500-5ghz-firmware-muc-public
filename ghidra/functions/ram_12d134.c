/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012d134 */

void FUN_ram_0012d134(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xd28) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xd28) + 0x14) = 0;
    FUN_ram_00109920(param_1,*(undefined4 *)(param_2 + 0xd28));
    *(undefined4 *)(param_2 + 0xd28) = 0;
  }
  return;
}


