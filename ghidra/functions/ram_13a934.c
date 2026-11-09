/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013a934 */

void FUN_ram_0013a934(void)

{
  DAT_ram_0018c1dc = 0;
  if (DAT_ram_0018c1e0 == 0) {
    FUN_ram_0018a8f8();
  }
  else {
    FUN_ram_0018a90c();
  }
  return;
}


