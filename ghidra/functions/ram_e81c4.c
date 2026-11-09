/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e81c4 */

undefined4 FUN_ram_000e81c4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x13) {
    uVar1 = *(undefined4 *)(&DAT_ram_001cb2d8 + param_1 * 4);
  }
  else {
    FUN_ram_000ee260(s__s__devid__d_exceeds_max_devid___ram_001bc83c,s_uc_netdev_get_ram_001a53cc,
                     param_1,0x12);
    uVar1 = 0;
  }
  return uVar1;
}


