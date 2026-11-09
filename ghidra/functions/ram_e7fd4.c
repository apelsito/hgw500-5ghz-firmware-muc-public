/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7fd4 */

undefined2 * FUN_ram_000e7fd4(int param_1,int param_2,undefined2 *param_3)

{
  char *pcVar1;
  int iVar2;
  
  if (0x11 < param_1) {
    FUN_ram_000ee260(s__s__devid__d_exceeds_max_devid___ram_001bc83c,s_uc_alloc_netdev_ram_001a54a0,
                     param_1,0x12);
    return (undefined2 *)0x0;
  }
  if (*(int *)(&DAT_ram_001cb2d8 + param_1 * 4) == 0) {
    iVar2 = FUN_ram_0018bb84();
    if (0 < iVar2) {
      if ((param_3 == (undefined2 *)0x0) &&
         (param_3 = (undefined2 *)FUN_ram_000ee734(param_2 + 0x84,1,iVar2),
         param_3 == (undefined2 *)0x0)) {
        FUN_ram_000ee260(s__s__Allocating_dev__u_from_DDR_ram_001bc8b0,
                         s_uc_alloc_netdev_ram_001a54a0,param_1);
        param_3 = (undefined2 *)FUN_ram_000ee734(param_2 + 0x84,0);
        if (param_3 == (undefined2 *)0x0) {
          pcVar1 = s__s__Error___no_space_avail_for_d_ram_001bc8d0;
          goto LAB_ram_000e8058;
        }
      }
      FUN_ram_000eea80(param_3,0,param_2 + 0x84);
      *(undefined2 **)(param_3 + 0xe) = param_3 + 0x42;
      param_3[7] = 1;
      *param_3 = (short)param_1;
      *(undefined4 *)(param_3 + 0xc) = 1;
      *(undefined2 **)(&DAT_ram_001cb2d8 + param_1 * 4) = param_3;
      return param_3;
    }
    pcVar1 = s__s__Error___no_semaphore_for_dev_ram_001bc884;
    param_1 = iVar2;
  }
  else {
    pcVar1 = s__s__devid__d_already_in_use_ram_001bc864;
  }
LAB_ram_000e8058:
  FUN_ram_000ee260(pcVar1,s_uc_alloc_netdev_ram_001a54a0,param_1);
  return (undefined2 *)0x0;
}


