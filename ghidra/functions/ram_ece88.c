/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ece88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000ece88(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar3 = DC_CTRL;
  DC_CTRL = uVar3 | 0x40;
  if ((_DAT_ram_e0000014 & 0xff) == 0x40) {
    DC_IVDC = 1;
    iVar4 = -0x60000000;
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 0x800;
      iVar6 = 0;
      do {
        DC_LDL = iVar4;
        iVar4 = iVar4 + 0x20;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x40);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
  }
  else {
    DC_IVDC = 1;
  }
  do {
    uVar3 = DC_CTRL;
  } while ((uVar3 & 0x100) != 0);
  Auxregs0010 = 1;
  uVar2 = CHE_MODE;
  MMU_PID_and_MPUEN = 0x80000000;
  STATUS32 = uVar1;
  return;
}


