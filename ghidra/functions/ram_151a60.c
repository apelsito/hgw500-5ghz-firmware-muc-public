/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00151a60 */

undefined4 FUN_ram_00151a60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  if (DAT_ram_00192d34 < DAT_ram_00192d38) {
    iVar2 = *(int *)(*(int *)(param_1 + 18000) + 0x14);
    iVar3 = DAT_ram_00192d5c;
    uVar4 = DAT_ram_00192d58;
    if (DAT_ram_00192d34 < DAT_ram_00192d4c) {
      iVar3 = 0;
      uVar4 = 0;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 18000) + 0x14);
    iVar3 = 0;
    uVar4 = DAT_ram_00192d44;
  }
  if (-1 < DAT_ram_80038ee0 - iVar2) {
    iVar2 = FUN_ram_001501bc(2,s_qtn_if_qtn_pwr_duty_c_ram_001c6fd0,0x154);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = STATUS32;
    if ((uVar1 & 6) != 0) {
      STATUS32 = uVar1 & 0xfffffff9;
    }
    DAT_ram_8003727c = DAT_ram_8003727c + 1;
    if (iVar3 != 0) {
      DAT_ram_80037280 = DAT_ram_80037280 + 1;
      if (DAT_ram_0018c010 == 3) {
        (*DAT_ram_002017c0)(0);
      }
      else {
        FUN_ram_001714f8(&DAT_ram_001aa408,3,auStack_30,&DAT_ram_001aa3fc);
      }
    }
    FUN_ram_00124df0(2,auStack_3c,s_qtn_if_qtn_pwr_duty_c_ram_001c6fd0,0x167);
    FUN_ram_00133c1c(param_1,&DAT_ram_0020d9d4,uVar4);
    FUN_ram_00150e98(*(undefined4 *)(*(int *)(param_1 + 18000) + 0xc));
    FUN_ram_00134f70(param_1,&DAT_ram_0020d9d4,1);
    FUN_ram_00125d98(2,auStack_3c,s_qtn_if_qtn_pwr_duty_c_ram_001c6fd0,0x16f);
    FUN_ram_0018b384(param_1,0);
    if (iVar3 != 0) {
      if (DAT_ram_0018c010 == 3) {
        (*DAT_ram_002017c0)(1);
      }
      else {
        FUN_ram_001714f8(&DAT_ram_001aa408,3,0,auStack_30);
      }
    }
    STATUS32 = uVar1;
    FUN_ram_00151098(2,s_qtn_if_qtn_pwr_duty_c_ram_001c6fd0,0x17e);
    if (*(int *)(*(int *)(param_1 + 18000) + 4) == 1) {
      FUN_ram_001519fc(param_1);
      return 1;
    }
  }
  return 1;
}


