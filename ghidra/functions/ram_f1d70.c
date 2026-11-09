/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000f1d70(void)

{
  uint uVar1;
  bool bVar2;
  
  if (DAT_ram_001cb2ac != 0) {
    do {
      bVar2 = false;
      if ((_DAT_ram_f0000014 & 0x40) != 0) {
        uVar1 = STATUS32;
        if ((uVar1 & 2) != 0) {
          STATUS32 = uVar1 & 0xfffffffd;
        }
        if (DAT_ram_001cb2a4 != DAT_ram_001cb2a8) {
          _DAT_ram_f0000000 = (uint)*(byte *)(DAT_ram_001cb2ac + DAT_ram_001cb2a8);
          DAT_ram_001cb2a8 = DAT_ram_001cb2a8 + 1;
          if (DAT_ram_001cb2a0 <= DAT_ram_001cb2a8) {
            DAT_ram_001cb2a8 = 0;
          }
          bVar2 = true;
        }
        STATUS32 = uVar1;
      }
    } while (bVar2);
  }
  return;
}


