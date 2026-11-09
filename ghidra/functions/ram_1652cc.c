/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001652cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_001652cc(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar4 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar4 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = _DAT_ram_e00000bc + 0xe0000000;
  }
  puVar6 = *(undefined2 **)(uVar4 + 0x188);
  *param_2 = param_1;
  param_2[1] = 0;
  puVar7 = puVar6 + 4;
  param_2[2] = (int)(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = param_3;
  puVar1 = (undefined4 *)FUN_ram_000ee734(0xe00,0,param_3,param_4,param_2 + 0x23);
  DAT_ram_0018c2b4 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_ram_000ee260(s_Failed_allocate_memory_ram_001c87a0);
    uVar2 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x39b8) = 0;
    *(int *)(param_1 + 0x39bc) = param_1 + 0x39b8;
    iVar5 = 0x80;
    do {
      FUN_ram_000eea80(puVar1,0,0x1c);
      puVar1[6] = puVar7;
      *puVar1 = 0;
      puVar3 = *(undefined4 **)(param_1 + 0x39bc);
      iVar5 = iVar5 + -1;
      puVar1[1] = puVar3;
      *puVar3 = puVar1;
      *(undefined4 **)(param_1 + 0x39bc) = puVar1;
      puVar7 = puVar7 + 10;
      puVar1 = puVar1 + 7;
    } while (iVar5 != 0);
    puVar6[2] = 0;
    *puVar6 = 100;
    puVar6[1] = &UNK_auxregs_03e8;
    uVar2 = 0;
  }
  return uVar2;
}


