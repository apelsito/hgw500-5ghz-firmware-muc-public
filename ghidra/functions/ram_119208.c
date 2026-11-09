/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119208 */

undefined4 FUN_ram_00119208(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_001191b4(param_1,param_3);
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_qtn_vap_delete_ioctl_cannot_find_ram_001c22fc,param_3);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x39f0))();
  }
  return uVar2;
}


