/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ecd4 */

void FUN_ram_0011ecd4(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort local_28;
  undefined2 local_26;
  undefined2 local_24;
  
  uVar3 = param_3 & 0xf;
  uVar2 = param_3 >> 8 & 0xf;
  iVar4 = 1 - uVar2;
  if (1 < uVar2) {
    iVar4 = 0;
  }
  FUN_ram_000ee260(s_IEEE80211_PARAM_SET_RTS_BW_DYN__n_ram_001c2fac,param_3);
  uVar2 = param_3 >> 4 & 0xf;
  bVar1 = false;
  if (DAT_ram_0018c10c == iVar4) {
    if (uVar3 == 0) goto LAB_ram_0011ed44;
    if (iVar4 != 0) {
      if (DAT_ram_0018c12c != 0) {
        DAT_ram_0018c12c = 1;
        goto LAB_ram_0011ed84;
      }
      goto LAB_ram_0011ed80;
    }
  }
  else {
    bVar1 = true;
    DAT_ram_0018c10c = iVar4;
    if (uVar3 == 0) {
LAB_ram_0011ed44:
      if (iVar4 != 0) goto LAB_ram_0011ed84;
    }
    else if (iVar4 != 0) {
LAB_ram_0011ed80:
      bVar1 = true;
      DAT_ram_0018c12c = 1;
      goto LAB_ram_0011ed84;
    }
  }
  if (uVar2 == 0 && uVar3 == 0) {
    DAT_ram_0018c12c = 0;
  }
LAB_ram_0011ed84:
  if ((param_2 + 0x18U & 1) == 0) {
    local_28 = *(ushort *)(param_2 + 0x18);
    local_26 = *(undefined2 *)(param_2 + 0x1a);
    local_24 = *(undefined2 *)(param_2 + 0x1c);
  }
  else {
    FUN_ram_0039fe00(&local_28,param_2 + 0x18U,6);
  }
  if (uVar2 != 0) {
    local_28 = local_28 | 1;
  }
  FUN_ram_00103a8c(*(undefined4 *)(param_1 + 0x3b20),&local_28);
  FUN_ram_00104060(*(undefined4 *)(param_1 + 0x3b20),uVar2,uVar3);
  DAT_ram_0018c134 = (undefined1)uVar2;
  DAT_ram_0018c135 = (undefined1)uVar3;
  DAT_ram_0018c130 = (uint)(uVar2 != 0);
  if (bVar1) {
    FUN_ram_0011ec84(param_1);
  }
  return;
}


