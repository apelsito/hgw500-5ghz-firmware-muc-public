/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ee48 */

void FUN_ram_0011ee48(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  ushort local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  
  FUN_ram_000ee260(s_IEEE80211_PARAM_SET_DUP_RTS__ni__ram_001c2fdc,param_3);
  uVar1 = DAT_ram_0018c130;
  if ((param_3 & 0x10) == 0) {
    DAT_ram_0018c130 = DAT_ram_0018c13c;
    DAT_ram_0018c10c = DAT_ram_0018c138;
  }
  else {
    DAT_ram_0018c130 = 1;
    DAT_ram_0018c13c = uVar1;
    DAT_ram_0018c138 = DAT_ram_0018c10c;
    DAT_ram_0018c10c = 1;
  }
  FUN_ram_00104120(*(undefined4 *)(param_1 + 0x3b20));
  if ((param_2 + 0x18U & 1) == 0) {
    local_20 = *(ushort *)(param_2 + 0x18);
    local_1e = *(undefined2 *)(param_2 + 0x1a);
    local_1c = *(undefined2 *)(param_2 + 0x1c);
  }
  else {
    FUN_ram_0039fe00(&local_20,param_2 + 0x18U,6);
  }
  if ((param_3 & 1) != 0) {
    local_20 = local_20 | 1;
  }
  FUN_ram_00103a8c(*(undefined4 *)(param_1 + 0x3b20),&local_20);
  FUN_ram_001589e0(param_3 & 0x10);
  return;
}


