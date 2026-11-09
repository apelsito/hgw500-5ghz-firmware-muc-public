/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7da0 */

void FUN_ram_000f7da0(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((((param_1 & 0xfffff000) != 0) && ((param_1 & 0xfff) < 0x200)) &&
      (iVar1 = (param_1 & 0xfff) * 0x24,
      (param_1 & 0xfffff000) == (*(uint *)(&DAT_ram_001fbed4 + iVar1) & 0xfffff000))) &&
     (iVar1 != -0x1fbebc)) {
    *(undefined4 *)(&DAT_ram_001fbed0 + iVar1) = param_2;
    return;
  }
  FUN_ram_000ee260(s_WARNING_at__s__d__timer_0x_x_exp_ram_001beafc,
                   s_os_os_uC_timerevent_c_ram_001beb30,0xb0,param_1);
  return;
}


