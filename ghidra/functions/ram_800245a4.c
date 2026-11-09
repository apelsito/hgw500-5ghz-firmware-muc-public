/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800245a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_800245a4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = STATUS32;
    if ((uVar1 & 2) != 0) {
      STATUS32 = uVar1 & 0xfffffffd;
    }
    if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
      bVar2 = false;
      iVar3 = 0;
      do {
        iVar4 = 0;
        do {
          sync();
          iVar4 = iVar4 + 1;
        } while (iVar4 < 10);
        if ((!bVar2) && (iVar3 = iVar3 + 1, iVar3 == 0x3e9)) {
          FUN_ram_000ee260(s_MuC___s_ram_001c7e3c,s___topaz_hbm_wait_timeout_ram_001c7f84);
          bVar2 = true;
        }
      } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
    }
    _DAT_ram_e1020114 = 6;
    sync();
    bVar2 = false;
    iVar3 = 0;
    do {
      iVar4 = 0;
      do {
        sync();
        iVar4 = iVar4 + 1;
      } while (iVar4 < 10);
      if ((!bVar2) && (iVar3 = iVar3 + 1, iVar3 == 0x3e9)) {
        FUN_ram_000ee260(s_MuC___s_ram_001c7e3c,s___topaz_hbm_wait_timeout_ram_001c7f84);
        bVar2 = true;
      }
    } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
    STATUS32 = uVar1;
    if (_DAT_ram_e1020144 == 0) {
      *(int *)(&DAT_ram_80037310 + param_2 * 4) = *(int *)(&DAT_ram_80037310 + param_2 * 4) + 1;
      return 0xffffffff;
    }
    *(int *)(param_3 + 4) = _DAT_ram_e1020144;
  }
  FUN_ram_80024250(param_1,param_2,param_3,param_4);
  return 0;
}


