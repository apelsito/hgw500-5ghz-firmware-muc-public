/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e433c */

void FUN_ram_000e433c(void)

{
  undefined4 uVar1;
  uint in_r7;
  
  uVar1 = DAT_ram_0018c12c;
  if ((in_r7 & 0xc) != 8) {
    DAT_ram_0018c12c = 0;
  }
  FUN_ram_000e3c5c();
  DAT_ram_0018c12c = uVar1;
  return;
}


