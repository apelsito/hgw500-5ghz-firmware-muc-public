/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0011e220(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_lp_count;
  char in_is_in_loop;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  
  uVar1 = param_1 - 1;
  if (uVar1 < 4) {
    local_28[0] = DAT_ram_001a646c;
    local_28[1] = DAT_ram_001a6470;
    local_28[2] = DAT_ram_001a6474;
    local_28[3] = DAT_ram_001a6478;
    local_18[0] = DAT_ram_001a647c;
    local_18[1] = DAT_ram_001a6480;
    local_18[2] = DAT_ram_001a6484;
    local_18[3] = DAT_ram_001a6488;
    uVar3 = 0;
    uVar2 = DAT_ram_001a6488;
    if (param_1 < 1) goto LAB_ram_0011e2c0;
    uVar2 = 0xc000;
    param_4 = &DAT_ram_00300030;
    uVar1 = 0;
    LP_START = 0x11e2a0;
    LP_END = 0x11e2c0;
    in_is_in_loop = '\x01';
    do {
      local_28[uVar1] = uVar2;
      local_18[uVar1] = param_4;
      uVar3 = uVar3 | 8 << (uVar1 * 4 & 0x1f);
      uVar1 = uVar1 + 1;
      in_lp_count = param_1;
LAB_ram_0011e2c0:
    } while ((in_is_in_loop != '\0') && (param_1 = in_lp_count + -1, param_1 != 0));
    FUN_ram_00171308(0x90,local_28[0]);
    FUN_ram_00171308(0x91,local_28[1]);
    FUN_ram_00171308(0x92,local_28[2]);
    FUN_ram_00171308(0x93,local_28[3]);
    _DAT_ram_e60905dc = uVar3;
    FUN_ram_00171308(0x94,local_18[0]);
    FUN_ram_00171308(0x95,local_18[1]);
    FUN_ram_00171308(0x96,local_18[2]);
    FUN_ram_00171308(0x97,local_18[3]);
    FUN_ram_000ee260(s____ok_ram_001c2d90);
  }
  else {
    FUN_ram_000ee260(s_qtn_set_antenna_usage__unexpecte_ram_001c2d98);
  }
  return;
}


