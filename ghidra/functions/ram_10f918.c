/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010f918 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0010f918(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 0x1c);
  iVar2 = *(int *)(param_1[5] + 0xc);
  uVar3 = 0;
  if (*(short *)(iVar4 + 0x4058) != 0) {
    uVar3 = FUN_ram_0010da64(param_1,*param_2,param_2[1],1,0);
    FUN_ram_0010cd00(param_1);
    *(uint *)(iVar4 + 0x4060) = *(uint *)(iVar4 + 0x4060) & 0xfffffff7;
    if (0 < *(int *)(iVar4 + 0x5b80)) {
      FUN_ram_000ee260(s_REMAIN_CHANNEL__Return_to_base_c_ram_001c11a8,param_2[1] & 0xff);
      FUN_ram_000ee260(0x1c0000);
    }
    FUN_ram_000e7d50(iVar2 + 0x3884);
    iVar1 = FUN_ram_00119258(iVar2 + 0x3880,param_2 + 8);
    FUN_ram_000e7da8(iVar2 + 0x3884);
    if (iVar1 == 0) {
      if (0 < *(int *)(iVar4 + 0x5b80)) {
        FUN_ram_000ee260(s_REMAIN_CHANNEL__Fail_to_find_nod_ram_001c11ec,param_2 + 8);
        FUN_ram_000ee260(0x1c0000);
      }
    }
    else {
      FUN_ram_0010f89c(iVar1);
    }
    param_2[7] = 4;
    _DAT_ram_e000002c = 0x4000400;
    sync();
  }
  return uVar3;
}


