/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000efe3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_000efe3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = DAT_ram_001cb2bc;
  FUN_ram_000efd2c();
  iVar2 = DAT_ram_001cb2b4;
  if (DAT_ram_001cb2b4 == 0) {
    uVar4 = 0xc;
  }
  else {
    if (*(int *)(DAT_ram_001cb2b4 + 0x24) == 0) {
      DAT_ram_001cb2b8 = &DAT_ram_001cb2b4;
    }
    puVar1 = (undefined4 *)(DAT_ram_001cb2b4 + 4);
    DAT_ram_001cb2b4 = *(int *)(DAT_ram_001cb2b4 + 0x24);
    *puVar1 = param_1;
    *(undefined4 *)(iVar2 + 8) = param_2;
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    *(undefined4 *)(iVar2 + 0x10) = param_4;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    iVar5 = FUN_ram_000f1ae8(DAT_ram_001cb2b0);
    while (iVar5 == 0) {
      iVar5 = FUN_ram_000f1ae8(DAT_ram_001cb2b0);
    }
    if (DAT_ram_6003a3c8 == 0) {
      DAT_ram_6003a3c8 = iVar2;
    }
    else {
      *(int *)(iVar3 + 0x1c) = iVar2;
    }
    DAT_ram_6003a3cc = iVar2;
    FUN_ram_000f1b6c(DAT_ram_001cb2b0);
    if (DAT_ram_0018c04c != 0) {
      FUN_ram_000ee260(s__s__msg__p_cmd__d_arg__p_arg1__x_ram_001bdd00,
                       s_uc_hostlink_send_ram_001a5844,iVar2,param_1,param_4,param_2,param_3,
                       DAT_ram_001cb2b0,DAT_ram_001cb2c0,DAT_ram_001cb2c4);
    }
    DAT_ram_001cb2bc = iVar2;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *DAT_ram_001cb2cc = iVar2;
    _DAT_ram_e000002c = 1 << (DAT_ram_001cb2c4 & 0x1f) | 1 << (DAT_ram_001cb2c4 + 0x10 & 0x1f);
    sync();
    uVar4 = 0;
    DAT_ram_001cb2cc = (int *)(iVar2 + 0x24);
  }
  return uVar4;
}


