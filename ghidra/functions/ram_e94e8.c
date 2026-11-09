/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e94e8 */

void FUN_ram_000e94e8(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_ram_000ed230();
    if (iVar1 == 0) {
      pcVar2 = s_uc_icache_lock_addr_lock_addr__x_ram_001bcc60;
    }
    else {
      pcVar2 = s_uc_icache_lock_addr_error__addr___ram_001bcc24;
    }
    FUN_ram_000ee260(pcVar2,param_1,param_2);
  }
  return;
}


