/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108bfc */

uint FUN_ram_00108bfc(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                     int param_6,int param_7,int param_8,int param_9,undefined4 param_10,
                     undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_58;
  int local_54;
  
  uVar4 = 0;
  local_58 = 0;
  local_54 = 0;
  if (param_3 == 0 && param_4 == 0) {
    FUN_ram_000ee260(s_schedule_tsf_event__no_tsf_ram_001c0108);
  }
  else {
    uVar1 = STATUS32;
    if ((uVar1 & 2) != 0) {
      STATUS32 = uVar1 & 0xfffffffd;
    }
    uVar2 = param_3;
    iVar5 = param_4;
    if (param_2 == 0) {
      local_58 = *(uint *)(*(int *)(param_1 + 0xc) + 0x3014);
      local_54 = *(int *)(*(int *)(param_1 + 0xc) + 0x3018);
      uVar2 = param_3 - local_58;
      iVar5 = (param_4 - local_54) - (uint)(param_3 < local_58);
    }
    if (iVar5 == 0 && uVar2 < 0x3938701) {
      iVar5 = DAT_ram_80038ee0 + uVar2 / 1000;
      if (param_7 != 0) {
        uVar2 = FUN_ram_000f7c10((iVar5 - (uint)(param_6 << 10) / 1000) - DAT_ram_80038ee0,param_10,
                                 param_11,param_7,2);
        uVar4 = 1 - uVar2;
        if (1 < uVar2) {
          uVar4 = 0;
        }
      }
      uVar3 = FUN_ram_000f7c10(iVar5 - DAT_ram_80038ee0,param_10,param_11,param_5,2);
      uVar2 = 1 - uVar3;
      if (1 < uVar3) {
        uVar2 = 0;
      }
      uVar4 = uVar4 | uVar2;
      if (param_9 != 0) {
        uVar3 = FUN_ram_000f7c10(((uint)(param_8 << 10) / 1000 + iVar5) - DAT_ram_80038ee0,param_10,
                                 param_11,param_9,2);
        uVar2 = 1 - uVar3;
        if (1 < uVar3) {
          uVar2 = 0;
        }
        uVar4 = uVar4 | uVar2;
      }
      STATUS32 = uVar1;
      return uVar4;
    }
    STATUS32 = uVar1;
    FUN_ram_000ee260(s_schedule_tsf_event__invalid_tsf_d_ram_001c0124,iVar5,uVar2,local_54,local_58,
                     param_4,param_3);
  }
  DAT_ram_8003789c = DAT_ram_8003789c + 1;
  return 0xffffffea;
}


