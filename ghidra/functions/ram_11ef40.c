/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ef40 */

void FUN_ram_0011ef40(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x478);
  uVar3 = uVar4 & 0xff3fffff;
  if (param_2 == 0x14) {
    uVar3 = uVar3 | 0x400000;
    uVar1 = 0x10;
  }
  else if (param_2 == 0x28) {
    uVar3 = uVar3 | 0x800000;
    uVar1 = 0x11;
  }
  else {
    uVar1 = 2;
  }
  DAT_ram_0018c140 = param_2;
  FUN_ram_0011e35c(param_1,uVar1);
  FUN_ram_000ee260(s_IEEE80211_PARAM_SET_CTS_BW___d_t_ram_001c3008,param_2,uVar3);
  iVar2 = *(int *)(param_1 + 0x3b20);
  *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) = uVar3;
  *(uint *)(*(int *)(iVar2 + 0xc) + 0x100478) = uVar3 & 0xfffffbff | 0x3c00300;
  if ((uVar4 != uVar3) && ((uVar3 & 0xc00000) != 0)) {
    FUN_ram_0018b084(param_1,0);
  }
  return;
}


