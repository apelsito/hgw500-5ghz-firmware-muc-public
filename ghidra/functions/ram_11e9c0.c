/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e9c0 */

void FUN_ram_0011e9c0(int param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_24 = 0;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  if ((int)(uint)(byte)(&DAT_ram_0018c16c)[DAT_ram_8002c8e8] < (int)param_2) {
    pcVar1 = s_Invalid_tx_scale_index__u_ram_001c2ed8;
  }
  else {
    if (param_2 == DAT_ram_0018c14c) {
      return;
    }
    if ((int)param_2 < 0) {
      DAT_ram_0018c14c = 0xffffffff;
      FUN_ram_0011ba78(&DAT_ram_0018d1fc,&local_24,&local_20,&uStack_1c,&local_18);
      uVar3 = 0;
    }
    else {
      uVar3 = param_2 & 0xff;
      DAT_ram_0018c14c = param_2;
    }
    FUN_ram_00158374(local_24,local_20,uStack_1c);
    FUN_ram_000e7d50(param_1 + 0x3884);
    for (iVar2 = *(int *)(param_1 + 0x388c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x114)) {
      if (iVar2 != 0) {
        FUN_ram_0011c894(iVar2,uVar3);
      }
    }
    FUN_ram_000e7da8(param_1 + 0x3884);
    pcVar1 = s_Set_g_fixed_tx_scale_index__d_ram_001c2ef4;
    param_2 = DAT_ram_0018c14c;
  }
  FUN_ram_000ee260(pcVar1,param_2);
  return;
}


