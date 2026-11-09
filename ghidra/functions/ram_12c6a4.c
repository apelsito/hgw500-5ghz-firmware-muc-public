/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012c6a4 */

void FUN_ram_0012c6a4(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = &local_98;
  local_98 = DAT_ram_001a64a0;
  local_94 = DAT_ram_001a64a4;
  local_90 = DAT_ram_001a64a8;
  local_8c = DAT_ram_001a64ac;
  local_88 = DAT_ram_001a64b0;
  local_84 = DAT_ram_001a64b4;
  local_80 = DAT_ram_001a64b8;
  local_7c = DAT_ram_001a64bc;
  local_78 = DAT_ram_001a64c0;
  local_74 = DAT_ram_001a64c4;
  local_70 = DAT_ram_001a64c8;
  local_6c = DAT_ram_001a64cc;
  local_68 = DAT_ram_001a64d0;
  local_64 = DAT_ram_001a64d4;
  local_60 = DAT_ram_001a64d8;
  local_5c = DAT_ram_001a64dc;
  local_58 = DAT_ram_001a64e0;
  local_54 = DAT_ram_001a64e4;
  local_50 = DAT_ram_001a64e8;
  local_4c = DAT_ram_001a64ec;
  local_48 = DAT_ram_001a64f0;
  local_44 = DAT_ram_001a64f4;
  local_40 = DAT_ram_001a64f8;
  local_3c = DAT_ram_001a64fc;
  local_38 = DAT_ram_001a6500;
  local_34 = DAT_ram_001a6504;
  local_30 = DAT_ram_001a6508;
  local_2c = DAT_ram_001a650c;
  local_28 = DAT_ram_001a6510;
  local_24 = DAT_ram_001a6514;
  local_20 = DAT_ram_001a6518;
  local_1c = DAT_ram_001a651c;
  local_18 = DAT_ram_001a6520;
  local_14 = DAT_ram_001a6524;
  local_10 = DAT_ram_001a6528;
  local_c = DAT_ram_001a652c;
  if (param_1 == 1) {
    puVar1 = &local_68;
  }
  else if (param_1 == 2) {
    puVar1 = &local_38;
  }
  else {
    param_1 = 0;
  }
  FUN_ram_0039fe00(&DAT_ram_0020fcb4,puVar1,0x30);
  if (param_1 != 0) {
    FUN_ram_000ee260(s_TX_QoS_schedule__d_ram_001c4280,param_1);
  }
  return;
}


