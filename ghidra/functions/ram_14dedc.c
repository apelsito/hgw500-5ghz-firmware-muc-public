/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014dedc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0014dedc(uint param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = param_1;
  if ((*(byte *)(param_2 + 0x458) & 7) == 0) {
    FUN_ram_000f7d60(*(undefined4 *)(param_2 + 0x540),*(byte *)(param_2 + 0x458) & 7);
    uVar3 = FUN_ram_000f7c10(1000,param_1,param_2,&LAB_ram_0014e704,2);
    *(undefined4 *)(param_2 + 0x540) = uVar3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    if ((*(ushort *)(param_2 + 0xc) & 0x10) == 0) {
      uVar1 = STATUS32;
      if ((uVar1 & 2) != 0) {
        STATUS32 = uVar1 & 0xfffffffd;
      }
      if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
        bVar2 = false;
        iVar6 = 0;
        do {
          iVar5 = 0;
          do {
            sync();
            iVar5 = iVar5 + 1;
          } while (iVar5 < 10);
          if ((!bVar2) && (iVar6 = iVar6 + 1, iVar6 == 0x3e9)) {
            FUN_ram_000ee260(s_MuC___s_ram_001c6850,s___topaz_hbm_wait_timeout_ram_001c6b5c);
            bVar2 = true;
          }
        } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
      }
      _DAT_ram_e1020114 = 2;
      uVar4 = 2;
      sync();
      bVar2 = false;
      iVar6 = 0;
      do {
        iVar5 = 0;
        do {
          sync();
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        if ((!bVar2) && (iVar6 = iVar6 + 1, iVar6 == 0x3e9)) {
          uVar4 = FUN_ram_000ee260(s_MuC___s_ram_001c6850,s___topaz_hbm_wait_timeout_ram_001c6b5c);
          bVar2 = true;
        }
        iVar5 = _DAT_ram_e1020144;
      } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
      STATUS32 = uVar1;
      if (_DAT_ram_e1020144 != 0) {
        FUN_ram_0012cd8c(param_2,_DAT_ram_e1020144);
        uVar4 = FUN_ram_00155ec8(param_1,iVar5,0x1e,*(undefined1 *)(param_2 + 0x67c),1,1,0,0,1);
        *(char *)(param_2 + 0x531) = *(char *)(param_2 + 0x531) + '\x01';
      }
    }
  }
  return uVar4;
}


