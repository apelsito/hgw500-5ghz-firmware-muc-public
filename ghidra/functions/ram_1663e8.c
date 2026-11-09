/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001663e8 */

void FUN_ram_001663e8(undefined4 param_1)

{
  if (DAT_ram_00192e08 != -1) {
    return;
  }
  DAT_ram_00192e08 = param_1;
  return;
}


