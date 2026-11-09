/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ed2b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000ed2b4(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar2 = DC_CTRL;
  if (((uVar2 ^ 1) & 1) != 0) {
    uVar2 = DC_CTRL;
    DC_CTRL = uVar2 | 0x40;
    if ((_DAT_ram_e0000014 & 0xff) == 0x40) {
      DC_IVDC = 1;
      iVar3 = -0x60000000;
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 0x800;
        iVar5 = 0;
        do {
          DC_LDL = iVar3;
          iVar3 = iVar3 + 0x20;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x40);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
    else {
      DC_IVDC = 1;
    }
    do {
      uVar2 = DC_CTRL;
    } while ((uVar2 & 0x100) != 0);
    uVar2 = DC_CTRL;
    DC_CTRL = uVar2 | 1;
  }
  STATUS32 = uVar1;
  return;
}


