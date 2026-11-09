/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119d20 */

bool FUN_ram_00119d20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[3];
  iVar2 = *param_1;
  iVar3 = *(int *)(*piVar4 + 0x1c);
  FUN_ram_000e7d50(piVar4 + 1);
  param_1[1] = 0;
  piVar1 = (int *)piVar4[6];
  param_1[2] = (int)piVar1;
  *piVar1 = (int)param_1;
  piVar4[6] = (int)(param_1 + 1);
  FUN_ram_000e7da8(piVar4 + 1);
  if ((char)param_1[0xb] == '\x06' || (char)param_1[0xb] == '\0') {
    iVar3 = iVar3 + 0x3fe0 + (uint)*(byte *)(param_1 + 4) * 4;
    if (*(int *)(iVar3 + -0x4c) == 0) {
      *(int **)(iVar3 + -0x4c) = param_1;
      FUN_ram_00128cfc(param_1);
    }
    else {
      FUN_ram_000ee260(s_QVP_with_vapid__d_already_exists_ram_001c2418);
      FUN_ram_000eaac4(0,s_>>>>_WARNING_at__s__d___s__val_0_ram_001c2448,
                       s_qtn_if_qtn_vap_c_ram_001c2474,0x1dc,s__QVP_Error_n__ram_001c2488);
      FUN_ram_000ec0ec();
      FUN_ram_000eaac4(0,s_<<<<_ram_001c2498);
    }
  }
  if (((iVar2 + 0x24U & 1) == 0) && (((uint)(param_1 + 6) & 1) == 0)) {
    *(short *)(iVar2 + 0x24) = (short)param_1[6];
    *(undefined2 *)(iVar2 + 0x26) = *(undefined2 *)((int)param_1 + 0x1a);
    *(short *)(iVar2 + 0x28) = (short)param_1[7];
  }
  else {
    FUN_ram_0039fe00(iVar2 + 0x24U,param_1 + 6,6);
  }
  *(ushort *)(iVar2 + 0xe) = *(ushort *)(iVar2 + 0xe) | (ushort)*(byte *)(param_1 + 0xb) << 8;
  *(undefined2 *)((int)param_1 + 0x2e) = 0x80;
  *(undefined2 *)(param_1 + 0xd) = 0x10;
  iVar3 = FUN_ram_000ee4c8(0x10,0,2);
  if (iVar3 == 0) {
    param_1[0x1e] = 0;
    iVar3 = FUN_ram_000e7e20(iVar2);
  }
  else {
    FUN_ram_000eea80(iVar3,0,0x10);
    param_1[0x1e] = iVar3;
    iVar3 = FUN_ram_000e7e20(iVar2);
  }
  if (iVar3 == 0) {
    FUN_ram_00119bf0(param_1);
  }
  else {
    FUN_ram_000ee260(s__s__unable_to_register_device_ram_001c24a4,iVar2 + 4);
  }
  return iVar3 != 0;
}


