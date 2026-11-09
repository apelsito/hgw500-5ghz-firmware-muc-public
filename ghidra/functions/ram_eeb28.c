/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eeb28 */

void FUN_ram_000eeb28(uint param_1,undefined4 param_2,uint param_3)

{
  if (((param_1 & 0x1f) == 0) && ((param_3 & 0x1f) == 0)) {
    FUN_ram_000eea80();
    FUN_ram_000ed004(param_1,param_3);
  }
  else {
    FUN_ram_80030314();
  }
  return;
}


