/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001831a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001831a8(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  _DAT_ram_e6091024 = 1 << (param_3 & 0x1f);
  _DAT_ram_e6091000 = 7;
  do {
    uVar1 = FUN_ram_00183bdc(&DAT_ram_e6000320,0x180,7);
  } while ((uVar1 & 1) != 1);
  FUN_ram_00183bec(&DAT_ram_e6000320,0x180,7,1);
  _DAT_ram_e6091000 = 0xc;
  uVar1 = _DAT_ram_e609110c >> (param_3 & 0x1f) & 0xfff;
  if (0x7ff < uVar1) {
    uVar1 = uVar1 - 0x1000;
  }
  uVar2 = _DAT_ram_e609111c >> (param_3 & 0x1f);
  *param_1 = uVar1;
  uVar2 = uVar2 & 0xfff;
  if (0x7ff < uVar2) {
    uVar2 = uVar2 - 0x1000;
  }
  uVar1 = _DAT_ram_e6091110 >> (param_3 & 0x1f);
  *param_2 = uVar2;
  uVar1 = uVar1 & 0xfff;
  if (0x7ff < uVar1) {
    uVar1 = uVar1 - 0x1000;
  }
  uVar2 = _DAT_ram_e6091120 >> (param_3 & 0x1f);
  param_1[1] = uVar1;
  uVar2 = uVar2 & 0xfff;
  if (0x7ff < uVar2) {
    uVar2 = uVar2 - 0x1000;
  }
  uVar1 = _DAT_ram_e6091114 >> (param_3 & 0x1f);
  param_2[1] = uVar2;
  uVar1 = uVar1 & 0xfff;
  if (0x7ff < uVar1) {
    uVar1 = uVar1 - 0x1000;
  }
  uVar2 = _DAT_ram_e6091124 >> (param_3 & 0x1f);
  param_1[2] = uVar1;
  uVar2 = uVar2 & 0xfff;
  if (0x7ff < uVar2) {
    uVar2 = uVar2 - 0x1000;
  }
  uVar1 = _DAT_ram_e6091118 >> (param_3 & 0x1f);
  param_2[2] = uVar2;
  uVar1 = uVar1 & 0xfff;
  if (0x7ff < uVar1) {
    uVar1 = uVar1 - 0x1000;
  }
  uVar2 = _DAT_ram_e6091128 >> (param_3 & 0x1f);
  param_1[3] = uVar1;
  uVar2 = uVar2 & 0xfff;
  if (0x7ff < uVar2) {
    uVar2 = uVar2 - 0x1000;
  }
  param_2[3] = uVar2;
  return;
}


