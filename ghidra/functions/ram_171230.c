/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00171230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00171230(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0xffffff;
  FUN_ram_00183c8c();
  puVar2 = (uint *)0xffffffff;
  if (param_1 == 0x9a) {
    puVar2 = (uint *)&DAT_ram_e6040168;
    uVar1 = DAT_ram_0018c384;
  }
  else if (param_1 < 0x100) {
    uVar1 = param_1;
    if (0x7f < param_1) {
      uVar1 = param_1 - 0x40;
      if (uVar1 < 0x80) {
        DAT_ram_0018c384 = DAT_ram_0018c384 & 0xffffffbf;
        DAT_ram_0018c398 = DAT_ram_0018c384;
        DAT_ram_0018c39c = DAT_ram_0018c384;
        _DAT_ram_e6040168 = DAT_ram_0018c384;
      }
      else {
        uVar1 = param_1 - 0x80;
        DAT_ram_0018c384 = DAT_ram_0018c384 | 0x40;
        DAT_ram_0018c398 = DAT_ram_0018c384;
        _DAT_ram_e6040168 = DAT_ram_0018c384;
      }
    }
    puVar2 = (uint *)(uVar1 * 4 + -0x19fc0000);
    uVar1 = *puVar2 >> 7;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = puVar2;
  }
  FUN_ram_00183cd0();
  return uVar1;
}


