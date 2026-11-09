/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014a640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0014a640(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_2 != 0) && (param_2 < 0xff)) {
    iVar3 = FUN_ram_000fd670(*(undefined4 *)(param_1 + 0x3b20));
    iVar4 = FUN_ram_000fd684(*(undefined4 *)(param_1 + 0x3b20));
    iVar5 = FUN_ram_000fd65c(*(undefined4 *)(param_1 + 0x3b20));
    *(int *)(param_1 + 0x4698) = *(int *)(param_1 + 0x4698) + iVar3;
    *(int *)(param_1 + 0x469c) = *(int *)(param_1 + 0x469c) + iVar4;
    *(int *)(param_1 + 0x4694) = *(int *)(param_1 + 0x4694) + iVar5;
    if (DAT_ram_80038ee4 - *(int *)(param_1 + 0x4688) ==
        (uint)(DAT_ram_80038ee0 < *(uint *)(param_1 + 0x4684)) &&
        DAT_ram_80038ee0 - *(uint *)(param_1 + 0x4684) < 1000) {
      if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
        if (_DAT_ram_e00000bc < 0x8000000) {
          uVar6 = _DAT_ram_e00000bc + 0x40000000;
        }
        else {
          uVar6 = _DAT_ram_e00000bc;
          if (_DAT_ram_e00000bc < 0xc0000000) {
            uVar6 = 0;
          }
        }
      }
      else {
        uVar6 = _DAT_ram_e00000bc + 0xe0000000;
      }
      puVar7 = (undefined4 *)(*(int *)(uVar6 + 0x84) + 0xd94 + param_2 * 0x34);
      FUN_ram_00149de8();
      FUN_ram_00149fdc(param_1,&uStack_40);
      *puVar7 = param_3;
      uVar2 = DAT_ram_8002c264;
      puVar7[10] = iVar5;
      puVar7[0xb] = iVar4;
      puVar7[0xc] = iVar3;
      puVar7[9] = uVar2;
      uVar1 = *(ushort *)(param_1 + 0x4022);
      puVar7[2] = local_3c;
      puVar7[1] = local_38;
      puVar7[4] = local_30;
      puVar7[3] = local_34;
      puVar7[5] = uStack_40;
      puVar7[6] = local_2c;
      puVar7[7] = local_28;
      puVar7[8] = local_24;
      if (2 < uVar1) {
        FUN_ram_000ee260(s_SCS__raw_cca__chan__u_bw__u_try__ram_001c6298,param_2,param_3,
                         DAT_ram_8002c248,DAT_ram_8002c234,DAT_ram_8002c238,DAT_ram_8002c23c,
                         DAT_ram_8002c240,DAT_ram_8002c244,DAT_ram_8002c24c,DAT_ram_8002c258);
        FUN_ram_000ee260(s_SCS__cca_stats__chan__u_try__u_b_ram_001c62f4,param_2,uStack_40,local_3c,
                         local_38,local_30,local_2c,local_28,local_24,local_34);
      }
    }
  }
  FUN_ram_00149d1c(param_1);
  return;
}


