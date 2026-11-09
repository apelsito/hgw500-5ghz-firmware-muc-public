/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110004 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00110004(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != 0) {
    if ((param_2 < 0x6ec400) || (0x26ec3ff < param_2)) {
      if ((param_2 < 0x26fc400) || (0x48fc3ff < param_2)) {
        uVar3 = FUN_ram_000ee260(s_OCS__release_buf__x_not_from_hbm_ram_001c13c4);
        return uVar3;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 < 4) {
      uVar4 = 0;
      if (uVar3 == 1) {
        uVar4 = (param_2 + 0xfd903c00) % 0x4400;
      }
      else if (uVar3 == 0) {
        uVar4 = param_2 - 0x6ec400 & 0xfff;
      }
      uVar1 = STATUS32;
      if ((uVar1 & 2) != 0) {
        STATUS32 = uVar1 & 0xfffffffd;
      }
      if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
        iVar6 = 0;
        bVar2 = false;
        do {
          iVar5 = 0;
          do {
            sync();
            iVar5 = iVar5 + 1;
          } while (iVar5 < 10);
          if ((!bVar2) && (iVar6 = iVar6 + 1, iVar6 == 0x3e9)) {
            FUN_ram_000ee260(s_MuC___s_ram_001bfea8,s___topaz_hbm_wait_timeout_ram_001c0ae8);
            bVar2 = true;
          }
        } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
      }
      _DAT_ram_e1020144 = (param_2 - uVar4) + 0x40;
      sync();
      _DAT_ram_e1020114 = uVar3 << 2 | 1;
      sync();
      STATUS32 = uVar1;
      return _DAT_ram_e1020114;
    }
  }
  return param_1;
}


