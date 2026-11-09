/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014a144 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0014a144(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar8 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar8 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar8 = 0;
      }
    }
  }
  else {
    uVar8 = _DAT_ram_e00000bc + 0xe0000000;
  }
  uVar4 = **(uint **)(uVar8 + 0x84);
  iVar10 = 1 - uVar4;
  if (1 < uVar4) {
    iVar10 = 0;
  }
  puVar7 = *(uint **)(uVar8 + 0x84) + iVar10 * 0x1b2 + 1;
  FUN_ram_00149e9c(param_1,puVar7);
  FUN_ram_000e7d50(param_1 + 0x3884);
  iVar9 = *(int *)(param_1 + 0x388c);
  uVar4 = 0;
  while (iVar9 != 0) {
    if (*(int *)(iVar9 + 0x78c) == 0) {
      FUN_ram_0014f404(iVar9,0);
    }
    uVar3 = *(uint *)(iVar9 + 0x7a8);
    uVar6 = *(uint *)(iVar9 + 0x790);
    if (0xb < uVar4) break;
    DAT_ram_8002c25c = DAT_ram_8002c25c + uVar3;
    puVar1 = (ushort *)(iVar9 + 0x18);
    iVar9 = *(int *)(iVar9 + 0x114);
    puVar5 = puVar7 + uVar4 * 3 + 0x18e;
    *puVar5 = (uint)*puVar1;
    puVar5[1] = uVar3;
    puVar5[2] = uVar6;
    uVar4 = uVar4 + 1;
  }
  puVar7[0x18d] = uVar4;
  FUN_ram_000e7da8(param_1 + 0x3884);
  FUN_ram_00149fdc(param_1,&local_50);
  puVar7[0x181] = *(uint *)(param_1 + 0x467c);
  puVar7[0x182] = local_50;
  puVar7[0x183] = local_4c;
  puVar7[0x184] = local_48;
  puVar7[0x186] = local_40;
  puVar7[0x187] = local_3c;
  puVar7[0x188] = local_38;
  puVar7[0x189] = local_34;
  puVar7[0x185] = local_44;
  puVar7[0x18b] = DAT_ram_8002c25c;
  puVar7[0x18c] = DAT_ram_8002c260;
  uVar2 = *(ushort *)(param_1 + 0x4022);
  puVar7[0x18a] = DAT_ram_8002c264;
  if (2 < uVar2) {
    FUN_ram_000ee260(s_SCS__raw_cca_try__u_pri__u_sec___ram_001c61fc,DAT_ram_8002c248,
                     DAT_ram_8002c234,DAT_ram_8002c238,DAT_ram_8002c23c,DAT_ram_8002c240,
                     DAT_ram_8002c244,DAT_ram_8002c24c,DAT_ram_8002c258);
    FUN_ram_000ee260(s_SCS__scaled_cca_bw__u_try__u_bus_ram_001c6248,puVar7[0x181],puVar7[0x182],
                     puVar7[0x183],puVar7[0x184],puVar7[0x186],puVar7[0x185],DAT_ram_8002c260 / 1000
                     ,DAT_ram_8002c25c / 1000);
  }
  **(int **)(uVar8 + 0x84) = iVar10;
  FUN_ram_0014f4e8(param_1,&LAB_ram_0014f4bc,0);
  FUN_ram_0039fe00(&DAT_ram_00192bb4,&DAT_ram_0018cd50,0x3c);
  DAT_ram_8002c25c = 0;
  DAT_ram_8002c260 = 0;
  DAT_ram_8002c264 = 0;
  DAT_ram_8002c268 = 0;
  FUN_ram_000eea80(&DAT_ram_8002c26c,0,0x600);
  return;
}


