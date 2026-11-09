/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015f748 */

void FUN_ram_0015f748(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1c [4];
  
  iVar3 = FUN_ram_001501bc(2,s_qtn_if_qtn_sta_pwrsave_c_ram_001c81d8,0x71);
  if (iVar3 != 0) {
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c0)(0);
    }
    else {
      FUN_ram_001714f8(&DAT_ram_001aa668,3,&DAT_ram_0020fe00,&DAT_ram_001aa65c);
    }
    FUN_ram_00124df0(2,auStack_1c,s_qtn_if_qtn_sta_pwrsave_c_ram_001c81d8,0x7b);
    FUN_ram_00133c1c(param_1,&DAT_ram_0020d9d4,param_3);
    DAT_ram_0018c2a4 = 1;
    uVar2 = AUX_IENABLE;
    AUX_IENABLE = 8;
    uVar1 = STATUS32;
    STATUS32 = uVar1 | 6;
    while (-param_2 < 0) {
      sleep(0);
    }
    uVar1 = STATUS32;
    STATUS32 = uVar1 & 0xfffffff9;
    AUX_IENABLE = uVar2;
    FUN_ram_00134f70(param_1,&DAT_ram_0020d9d4,1);
    FUN_ram_00125d98(2,auStack_1c,s_qtn_if_qtn_sta_pwrsave_c_ram_001c81d8,0x82);
    FUN_ram_0018b384(param_1,0);
    DAT_ram_0018c2a4 = 0;
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c0)(1);
    }
    else {
      FUN_ram_001714f8(&DAT_ram_001aa668,3,0,&DAT_ram_0020fe00);
    }
    FUN_ram_00151098(2,s_qtn_if_qtn_sta_pwrsave_c_ram_001c81d8,0x8d);
  }
  return;
}


