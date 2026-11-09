/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f3a90 */

int FUN_ram_000f3a90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_000ee73c(0x10,0);
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_uc_host_fops_alloc_req_couldn_t_a_ram_001be338);
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    if ((param_2 != 0) && (param_1 != 0)) {
      iVar2 = FUN_ram_000ee73c(param_2,0);
      if (iVar2 == 0) {
        FUN_ram_000ee834(iVar1);
        FUN_ram_000ee260(s_uc_host_fops_alloc_req_couldn_t_a_ram_001be338);
        iVar1 = 0;
      }
      else {
        if (param_3 != 0) {
          FUN_ram_0039fe00(iVar2,param_1,param_2);
        }
        *(int *)(iVar1 + 0xc) = iVar2;
      }
    }
  }
  return iVar1;
}


