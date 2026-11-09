/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018afb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018afb8(uint param_1)

{
  _DAT_ram_e60504a0 = param_1 & 0x7fff;
  return;
}


