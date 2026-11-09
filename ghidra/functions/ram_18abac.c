/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018abac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0018abac(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  if (-1 < param_3) {
    return 0xffffffff;
  }
  if (param_3 < -199) {
    return 0xffffffff;
  }
  uVar3 = _DAT_ram_e609036c;
  if ((DAT_ram_800261c0 & 2) == 0) {
    uVar3 = _DAT_ram_e609036c + 10;
  }
  if (0x2d < uVar3) {
    FUN_ram_000ee260(s_bb_get_max_gain__QT4_BB_TD_MAX_G_ram_001cb0a4,uVar3,0x2d);
    return 0xffffffff;
  }
  param_1 = param_1 + -1;
  local_10 = *(undefined4 *)(&DAT_ram_001ab938 + uVar3 * 4);
  if (param_1 == 0) {
LAB_ram_0018ac1c:
    uVar1 = 1;
  }
  else {
    if (param_1 != 1 && param_1 != 2) {
      if (param_1 != 3) {
        return 0xffffffff;
      }
      goto LAB_ram_0018ac1c;
    }
    uVar1 = 2;
  }
  iVar2 = FUN_ram_0018ab04(uVar1,param_2,param_3,local_10,&local_14);
  if (-1 < iVar2) {
    switch(param_1) {
    case 0:
      _DAT_ram_e6090268 = local_14;
      break;
    case 1:
      _DAT_ram_e609043c = local_14;
      break;
    case 2:
      _DAT_ram_e6090578 = local_14;
      break;
    case 3:
      DAT_ram_0018c424 = local_14;
      _DAT_ram_e6090248 = local_14;
      break;
    default:
      goto LAB_ram_0018ac94;
    }
    return 0;
  }
LAB_ram_0018ac94:
  return 0xffffffff;
}


