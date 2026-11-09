/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018bae8 */

void FUN_ram_0018bae8(void)

{
  int iVar1;
  
  if (DAT_ram_8002c8bc == '\x03') {
    if ((DAT_ram_8002c9c8 != 0) && (iVar1 = FUN_ram_00151a60(), iVar1 != 0)) {
      DAT_ram_8002c9c8 = 0;
    }
    if (DAT_ram_8002c9cc != 0) {
      sleep(0);
    }
  }
  return;
}


