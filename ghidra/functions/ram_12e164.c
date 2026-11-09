/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e164 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0012e164(undefined4 param_1,int param_2,byte param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
    bVar2 = false;
    iVar5 = 0;
    do {
      iVar6 = 0;
      do {
        sync();
        iVar6 = iVar6 + 1;
      } while (iVar6 < 10);
      if ((!bVar2) && (iVar5 = iVar5 + 1, iVar5 == 0x3e9)) {
        FUN_ram_000ee260(s_MuC___s_ram_001c4054,s___topaz_hbm_wait_timeout_ram_001c42cc);
        bVar2 = true;
      }
    } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
  }
  _DAT_ram_e1020114 = 2;
  sync();
  bVar2 = false;
  iVar5 = 0;
  do {
    iVar6 = 0;
    do {
      sync();
      iVar6 = iVar6 + 1;
    } while (iVar6 < 10);
    if ((!bVar2) && (iVar5 = iVar5 + 1, iVar5 == 0x3e9)) {
      FUN_ram_000ee260(s_MuC___s_ram_001c4054,s___topaz_hbm_wait_timeout_ram_001c42cc);
      bVar2 = true;
    }
    pbVar3 = _DAT_ram_e1020144;
  } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
  STATUS32 = uVar1;
  if (_DAT_ram_e1020144 == (byte *)0x0) {
    uVar4 = 0xfffffff4;
  }
  else {
    FUN_ram_0039fe00(_DAT_ram_e1020144,&LAB_ram_001a6530,0x1e);
    FUN_ram_0012cae4(pbVar3,param_2);
    if ((*(ushort *)(param_2 + 0xc) & 2) == 0) {
      uVar4 = 0x1c;
      *pbVar3 = *pbVar3 & 0xf | 0x40;
    }
    else {
      param_3 = pbVar3[0x18] & 0xf0 | param_3;
      pbVar3[0x18] = param_3;
      if (param_4 != 0) {
        pbVar3[0x18] = param_3 | 0x10;
      }
      uVar4 = 0x1e;
    }
    FUN_ram_00155ec8(param_1,pbVar3,uVar4,*(undefined1 *)(param_2 + 0x67c),1,1,0,0,0);
    uVar4 = 0;
  }
  return uVar4;
}


