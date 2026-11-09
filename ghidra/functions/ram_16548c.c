/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016548c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0016548c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar2 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar2 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = _DAT_ram_e00000bc + 0xe0000000;
  }
  puVar3 = *(undefined2 **)(uVar2 + 0x188);
  if ((param_2 & 0xff) == 0) {
    if (*(int *)(param_1 + 0x5b94) == 0) {
      return;
    }
    FUN_ram_000fd7a0(*(undefined4 *)(param_1 + 0x3b20),&DAT_ram_0018c2ac);
    FUN_ram_000f7d60(DAT_ram_0018c2a8);
    if (DAT_ram_0018c2b4 != 0) {
      FUN_ram_000ee834();
    }
    FUN_ram_00165230(param_1);
    return;
  }
  *(uint *)(param_1 + 0x5b90) = param_2 >> 0x10;
  uVar2 = ((param_2 >> 0x10) * (param_2 >> 8 & 0xff)) / 100;
  *(uint *)(param_1 + 0x5b8c) = uVar2;
  if (*(int *)(param_1 + 0x5b94) == 0) {
    iVar1 = FUN_ram_001652cc(param_1,param_1 + 0x3928,&DAT_ram_001c87b8);
    if (iVar1 != 0) {
      FUN_ram_000ee260(s_Failed_NAC_monitor_mode_initiali_ram_001c87bc);
      return;
    }
    FUN_ram_000fd718(*(undefined4 *)(param_1 + 0x3b20),&DAT_ram_0018c2ac);
    *(undefined4 *)(param_1 + 0x5b94) = 1;
    puVar3[2] = 1;
    *(undefined4 *)(param_1 + 0x5b98) = 1;
    DAT_ram_0018c2a8 =
         FUN_ram_000f7c10(*(undefined4 *)(param_1 + 0x5b8c),param_1,0,&LAB_ram_00165650,1);
    uVar2 = *(uint *)(param_1 + 0x5b8c);
  }
  puVar3[1] = (short)(param_2 >> 0x10);
  *puVar3 = (short)uVar2;
  return;
}


