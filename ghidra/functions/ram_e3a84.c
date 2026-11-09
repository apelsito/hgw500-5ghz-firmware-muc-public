/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e3a84 */

uint FUN_ram_000e3a84(uint param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    if ((param_1 & 0x7f) < 0x4d) {
      bVar1 = (&DAT_ram_001a5254)[param_1 & 0x7f];
      goto LAB_ram_000e3acc;
    }
  }
  else {
    if ((param_1 & 0x40) == 0) {
      return (int)(param_1 & 0x7f) >> 4;
    }
    uVar2 = (param_1 & 0xffffffbf) + 0x21;
    if ((uVar2 & 0xff) < 0x6d) {
      bVar1 = (&DAT_ram_001a5254)[uVar2 & 0x7f];
LAB_ram_000e3acc:
      return bVar1 - 1 & 0xff;
    }
  }
  return 4;
}


