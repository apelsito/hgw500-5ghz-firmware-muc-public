/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e43f0 */

int FUN_ram_000e43f0(int param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  
  if ((param_4 == *param_2) && (param_5 == *param_3)) {
    iVar3 = param_1 * 0x100 + 0xf6c0;
  }
  else {
    if (param_5 == 0) {
      iVar3 = param_1 * 0x100 + 0xf6c0;
      uVar1 = 4;
      ppuVar2 = (undefined **)(&DAT_ram_0018c5c8 + param_4 * 0x10);
    }
    else if (param_5 == 1) {
      iVar3 = param_1 * 0x100 + 0xf6c0;
      ppuVar2 = &PTR_DAT_ram_002d002d_ram_0018c6e8 + param_4 * 8;
      uVar1 = 8;
    }
    else {
      if (param_5 != 2) {
        return 0;
      }
      iVar3 = param_1 * 0x100 + 0xf6c0;
      ppuVar2 = &PTR_DAT_ram_00250025_ram_0018c928 + param_4 * 0xc;
      uVar1 = 0xc;
    }
    FUN_ram_000e43cc(iVar3,uVar1,ppuVar2);
    *param_2 = (byte)param_4;
    *param_3 = (byte)param_5;
  }
  return iVar3 >> 6;
}


