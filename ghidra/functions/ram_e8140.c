/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e8140 */

undefined4 FUN_ram_000e8140(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1[7] & 2) == 0) {
    *(undefined4 *)(&DAT_ram_001cb2d8 + (uint)*param_1 * 4) = 0;
    uVar1 = STATUS32;
    if ((uVar1 & 2) != 0) {
      STATUS32 = uVar1 & 0xfffffffd;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar2 + -1;
    STATUS32 = uVar1;
    if (iVar2 + -1 == 0) {
      FUN_ram_000ee834(param_1);
      return 0;
    }
  }
  else {
    FUN_ram_000ee260(s__s__Error___destroying_netdev_be_ram_001bc908,
                     s_uc_netdev_destroy_ram_001a54b0);
  }
  return 1;
}


