/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001051b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001051b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x3000);
  if (param_2 == 0) {
    uVar1 = uVar1 | 0x820000;
  }
  else {
    uVar1 = uVar1 | 0x60000;
  }
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar2 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar2 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if ((uVar2 == 0) || (*(int *)(uVar2 + 0x38) < 3)) {
    *(undefined1 *)(param_1 + 8) = 0;
    uVar1 = uVar1 & 0x7ffff7ff | 0x40400040;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar1 = uVar1 & 0xfffff7ff | 0xc0400040;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) = uVar1;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x103000) = uVar1;
  return;
}


