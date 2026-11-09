/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ee73c */

uint FUN_ram_000ee73c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_000ee4c8(param_1,param_2,5);
  if (uVar2 == 0) {
    return 0;
  }
  uVar1 = DC_CTRL;
  if (((uVar1 ^ 1) & 1) == 0) {
    return uVar2;
  }
  uVar1 = uVar2;
  if ((uVar2 < 0x60000000) || (0x6007ffff < uVar2)) {
    if ((uVar2 < 0x40000000) || (0x47ffffff < uVar2)) {
      if (0xbfffffff < uVar2) goto joined_r0x000ee7b4;
    }
    else if (uVar2 != 0x40000000) goto joined_r0x000ee7b4;
  }
  else if (uVar2 != 0xe0000000) goto joined_r0x000ee7b4;
  if ((uVar2 < 0x80000000) || (0x8007ffff < uVar2)) {
    if (uVar2 < 0x8000000) {
      uVar1 = uVar2 + 0x40000000;
    }
    else if (uVar2 < 0xc0000000) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = uVar2 + 0xe0000000;
  }
joined_r0x000ee7b4:
  if (uVar1 == 0) {
    FUN_ram_80030314();
  }
  FUN_ram_000ecf70(uVar2,param_1 + 0x1fU & 0xffffffe0);
  return uVar1;
}


