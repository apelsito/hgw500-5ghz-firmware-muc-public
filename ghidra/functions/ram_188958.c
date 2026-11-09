/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00188958(int param_1)

{
  if (_DAT_ram_e609013c == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 * 4 + -0x19f6fed4);
}


