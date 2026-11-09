/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00171128 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00171128(uint param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = param_1;
  if (0x1ff < param_1) {
    if (0x3ff < param_1) {
      DAT_ram_0018c37c = param_1;
      return 0;
    }
    uVar2 = param_1 - 0x100;
    uVar1 = (undefined2)uVar2;
    uVar3 = (undefined1)param_3;
    if (uVar2 < 0x200) {
      DAT_ram_0018c384 = DAT_ram_0018c384 & 0xffffffbf;
      DAT_ram_0018c388 = uVar1;
      DAT_ram_0018c390 = uVar3;
      DAT_ram_0018c398 = DAT_ram_0018c384;
      DAT_ram_0018c39c = DAT_ram_0018c384;
      _DAT_ram_e6040168 = DAT_ram_0018c384;
    }
    else {
      DAT_ram_0018c384 = DAT_ram_0018c384 | 0x40;
      uVar2 = param_1 - 0x200;
      DAT_ram_0018c38a = uVar1;
      DAT_ram_0018c391 = uVar3;
      DAT_ram_0018c398 = DAT_ram_0018c384;
      _DAT_ram_e6040168 = DAT_ram_0018c384;
      if (0x1ff < uVar2) {
        DAT_ram_0018c37c = uVar2;
        return 0;
      }
    }
  }
  return (*(uint *)(uVar2 + 0xe6040000) >> 7 & param_2) >> (param_3 & 0x1f);
}


