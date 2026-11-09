/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016c73c */

void FUN_ram_0016c73c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (DAT_ram_0018c354 >> 0x10) * 0x41a7;
  uVar2 = (DAT_ram_0018c354 & 0xffff) * 0x41a7 + (uVar1 & 0x7fff) * 0x10000;
  if (0x7fffffff < uVar2) {
    uVar2 = (uVar2 & 0x7fffffff) + 1;
  }
  DAT_ram_0018c354 = uVar2 + (uVar1 >> 0xf);
  if (0x7fffffff < DAT_ram_0018c354) {
    DAT_ram_0018c354 = (DAT_ram_0018c354 & 0x7fffffff) + 1;
  }
  return;
}


