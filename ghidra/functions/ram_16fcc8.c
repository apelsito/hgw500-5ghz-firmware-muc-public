/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016fcc8 */

bool FUN_ram_0016fcc8(undefined4 param_1)

{
  bool bVar1;
  
  FUN_ram_001679b4();
  DAT_ram_0018c35c = 0xff;
  bVar1 = DAT_ram_0018c378 != '\0';
  if (bVar1) {
    FUN_ram_0017a240(param_1);
  }
  return bVar1;
}


