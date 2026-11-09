/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00171308 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00171308(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_ram_00183c8c();
  if (0xff < param_1) {
    uVar2 = 0xffffffff;
    goto LAB_ram_001713ac;
  }
  if (param_1 == 0x9a) {
    DAT_ram_0018c384 = param_2;
    uVar1 = 0x5a;
LAB_ram_00171380:
    param_1 = uVar1;
    DAT_ram_0018c384 = DAT_ram_0018c384 & 0xffffffbf;
    DAT_ram_0018c398 = DAT_ram_0018c384;
    DAT_ram_0018c39c = DAT_ram_0018c384;
    _DAT_ram_e6040168 = DAT_ram_0018c384;
  }
  else if (0x7f < param_1) {
    uVar1 = param_1 - 0x40;
    if (param_1 - 0x40 < 0x80) goto LAB_ram_00171380;
    param_1 = param_1 - 0x80;
    DAT_ram_0018c384 = DAT_ram_0018c384 | 0x40;
    DAT_ram_0018c398 = DAT_ram_0018c384;
    _DAT_ram_e6040168 = DAT_ram_0018c384;
  }
  *(uint *)(param_1 * 4 + -0x19fc0000) = param_2 & 0xffffff;
  uVar2 = 0;
LAB_ram_001713ac:
  FUN_ram_00183cd0();
  return uVar2;
}


