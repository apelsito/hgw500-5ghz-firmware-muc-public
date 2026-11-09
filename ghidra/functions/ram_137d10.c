/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137d10 */

void FUN_ram_00137d10(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    FUN_ram_0018a8f8();
    return;
  }
  FUN_ram_0018a90c();
  return;
}


