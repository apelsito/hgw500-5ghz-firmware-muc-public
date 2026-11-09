/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ed374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000ed374(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar5 = DC_CTRL;
  if (((uVar5 ^ 1) & 1) != 0) {
    STATUS32 = uVar1;
    return;
  }
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar5 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar5 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if ((uVar5 != 0) && (*(int *)(uVar5 + 0x38) == 4)) {
    uVar5 = DC_CTRL;
    DC_CTRL = uVar5 & 0xfffffffe;
    iVar2 = -0x60000000;
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 0x800;
      iVar4 = 0;
      do {
        DC_LDL = iVar2;
        iVar2 = iVar2 + 0x20;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x40);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    STATUS32 = uVar1;
    return;
  }
  uVar5 = DC_CTRL;
  DC_CTRL = uVar5 & 0xfffffffe;
  STATUS32 = uVar1;
  return;
}


