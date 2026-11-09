/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018a644(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_ram_00189924();
  uVar1 = (param_1 & 3) << 0xe | _DAT_ram_e6000000 & 0xffff3fb7;
  uVar2 = _DAT_ram_e6090530 & 0xfffffffc;
  if (param_2 == 0x50) {
    uVar2 = uVar2 | 2;
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c4)(0);
      _DAT_ram_e60903c8 = 0x20;
    }
    else {
      FUN_ram_001710d0(0x2a0,3,0,0);
    }
    uVar1 = uVar1 | 0x40;
    DAT_ram_0018c410 = 2;
  }
  else if (param_2 == 0x28) {
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c4)(1);
      _DAT_ram_e60903c8 = 0x22;
    }
    else {
      FUN_ram_001710d0(0x2a0,3,0,1);
    }
    uVar1 = uVar1 | 8;
    DAT_ram_0018c410 = 1;
  }
  else {
    uVar2 = uVar2 | 2;
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c4)(2);
      _DAT_ram_e60903c8 = 0x24;
    }
    else {
      FUN_ram_001710d0(0x2a0,3,0,3);
    }
    DAT_ram_0018c410 = 0;
  }
  _DAT_ram_e6090608 = 1;
  if ((0x100 < *(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2)) &&
     (*(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2) < &UNK_auxregs_0104)) {
    DAT_ram_0018c410 = 0;
  }
  _DAT_ram_e6090530 = uVar2;
  FUN_ram_00188fc0(param_2,param_1);
  FUN_ram_0018972c(param_2,param_1);
  _DAT_ram_e60002fc = 1;
  _DAT_ram_e6000000 = uVar1;
  FUN_ram_000e4f98(2000);
  _DAT_ram_e60002fc = 0;
  return;
}


