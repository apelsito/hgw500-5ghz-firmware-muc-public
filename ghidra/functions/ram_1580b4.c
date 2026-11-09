/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001580b4 */

undefined4 FUN_ram_001580b4(void)

{
  if (DAT_ram_0018c25c == 0) {
    return 0;
  }
  return *DAT_ram_0018c274;
}


