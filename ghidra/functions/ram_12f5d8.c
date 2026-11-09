/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012f5d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0012f5d8(int param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  if (param_2 == 0) {
    return 0;
  }
  cVar1 = *(char *)(iVar6 + 0x1d);
  if (cVar1 == '\x0e') {
    if ((*(ushort *)(param_2 + 0xc) & 0x4000) == 0) goto LAB_ram_0012f648;
LAB_ram_0012f624:
    bVar3 = true;
  }
  else {
    if (cVar1 == '\r') {
      uVar2 = *(ushort *)(param_2 + 0xc);
    }
    else if (cVar1 == '\f') {
      uVar2 = *(ushort *)(param_2 + 0xc);
    }
    else {
      if (cVar1 != '\v') goto LAB_ram_0012f648;
      uVar2 = *(ushort *)(param_2 + 0xc);
    }
    if ((uVar2 & 0x4000) != 0) goto LAB_ram_0012f624;
LAB_ram_0012f648:
    bVar3 = false;
  }
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar5 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar5 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if ((uVar5 == 0) || (*(int *)(uVar5 + 0x38) < 5)) {
    FUN_ram_000ee260(s_TXBF__11ac_BF_not_supported_on_h_ram_001c4310);
    return 0;
  }
  iVar4 = FUN_ram_0012e384(iVar6,param_2);
  if (-1 < iVar4) {
    iVar4 = FUN_ram_0012e4b4(iVar6,param_2,0);
    if (iVar4 < 0) {
      if (*(int *)(param_2 + 0xd28) != 0) {
        *(undefined4 *)(*(int *)(param_2 + 0xd28) + 0x14) = 0;
        FUN_ram_00109920(iVar6,*(undefined4 *)(param_2 + 0xd28));
        *(undefined4 *)(param_2 + 0xd28) = 0;
      }
    }
    else if (bVar3) {
      FUN_ram_0012e884(param_2);
      if (*(int *)(param_2 + 0xd2c) != 0) {
LAB_ram_0012f7c0:
        if (bVar3) {
          FUN_ram_0012ee88(iVar6,param_3,param_2,*(undefined1 *)(iVar6 + 0x3f84));
        }
        else {
          FUN_ram_0012f294(iVar6,param_3,*(undefined4 *)(param_2 + 0xd28),param_2);
        }
        FUN_ram_000f7c10(2000,iVar6,0,FUN_ram_0012fa50,2);
        return 0;
      }
      FUN_ram_0012d030(iVar6,param_2);
      if (*(int *)(param_2 + 0xd28) != 0) {
        *(undefined4 *)(*(int *)(param_2 + 0xd28) + 0x14) = 0;
        FUN_ram_00109920(iVar6,*(undefined4 *)(param_2 + 0xd28));
        *(undefined4 *)(param_2 + 0xd28) = 0;
      }
    }
    else {
      FUN_ram_0012eb74(param_3,param_2);
      if (*(int *)(param_3 + 300) != 0) goto LAB_ram_0012f7c0;
      FUN_ram_0012d030(iVar6,param_2);
      if (*(int *)(param_2 + 0xd28) != 0) {
        *(undefined4 *)(*(int *)(param_2 + 0xd28) + 0x14) = 0;
        FUN_ram_00109920(iVar6,*(undefined4 *)(param_2 + 0xd28));
        *(undefined4 *)(param_2 + 0xd28) = 0;
      }
    }
  }
  return 0xfffffff4;
}


