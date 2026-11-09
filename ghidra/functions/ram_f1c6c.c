/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1c6c */

int FUN_ram_000f1c6c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_000f1c10();
  if (iVar1 < 0) {
    FUN_ram_80030314();
  }
  return iVar1;
}


