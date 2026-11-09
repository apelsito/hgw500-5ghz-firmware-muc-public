/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800213a0 */

void FUN_ram_800213a0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 & 0xfffff000) != 0) && ((param_1 & 0xfff) < 0x200)) {
    iVar1 = (param_1 & 0xfff) * 0x24;
    if (((param_1 & 0xfffff000) == (*(uint *)(&DAT_ram_001fbed4 + iVar1) & 0xfffff000)) &&
       ((int *)(&DAT_ram_001fbebc + iVar1) != (int *)0x0)) {
      iVar2 = DAT_ram_80038ee4 + (uint)CARRY4(*(uint *)(&DAT_ram_001fbed0 + iVar1),DAT_ram_80038ee0)
      ;
      *(uint *)(&DAT_ram_001fbebc + iVar1) = *(uint *)(&DAT_ram_001fbed0 + iVar1) + DAT_ram_80038ee0
      ;
      *(int *)(&DAT_ram_001fbec0 + iVar1) = iVar2;
      return;
    }
  }
  FUN_ram_000ee260(s_WARNING_at__s__d__timer_0x_x_exp_ram_001beafc,
                   s_os_os_uC_timerevent_c_ram_001beb30,0xa3,param_1);
  return;
}


