/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fafac */

undefined4 FUN_ram_000fafac(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 39999;
  iVar3 = 39999;
  LP_START = 0xfafc8;
  LP_END = 0xfafec;
  while( true ) {
    if (param_2 == 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x301c);
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10301c);
    }
    if ((uVar1 & 0x80000000) != 0) break;
    uVar2 = uVar2 - 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      DAT_ram_8003795c = DAT_ram_8003795c + 1;
      FUN_ram_000ee260(s_hal_nc_csr_wait__CSR_not_done__c_ram_001bf2d0);
      return 1;
    }
  }
  if (DAT_ram_80037958 <= 40000 - uVar2) {
    DAT_ram_80037958 = 40000 - uVar2;
  }
  if (uVar2 < 20000) {
    FUN_ram_000ee260(s_hal_nc_csr_wait__CSR_done__retri_ram_001bf308);
  }
  return 0;
}


