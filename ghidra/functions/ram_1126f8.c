/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001126f8 */

undefined4 FUN_ram_001126f8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_ram_80038ee4 - param_1[0x11a2] == (uint)(DAT_ram_80038ee0 < (uint)param_1[0x11a1]) &&
      DAT_ram_80038ee0 - param_1[0x11a1] < 1000) {
    param_1[0x1042] = param_1[0x1042] + 1;
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1[0xec8] + 0xc) + 0x3014);
    iVar4 = *(int *)(*(int *)(param_1[0xec8] + 0xc) + 0x3018);
    uVar1 = (uint)*(ushort *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x416d) * 2 + 0x416e) *
            1000;
    uVar2 = uVar1 + uVar3;
    uVar2 = FUN_ram_0010de20(param_1,uVar3,iVar4,uVar2 + 0x251c,
                             iVar4 + (uint)CARRY4(uVar1,uVar3) + (uint)(0xffffdae3 < uVar2),3);
    if (uVar2 == 0) {
      iVar4 = FUN_ram_0011037c(param_1);
      if (iVar4 == 0) {
        iVar4 = FUN_ram_00108bfc(param_1[0xec8],1,
                                 (uint)*(ushort *)
                                        ((int)param_1 +
                                        (uint)*(byte *)((int)param_1 + 0x416d) * 2 + 0x416e) * 1000,
                                 0,FUN_ram_0011066c,0,0,0,0,param_1,0);
        if (iVar4 == 0) {
          return 0;
        }
        param_1[0x1048] = param_1[0x1048] + 1;
        FUN_ram_0011066c(param_1,0);
        return 0;
      }
    }
    else if ((uVar2 & 1) == 0) {
      param_1[0x104b] = param_1[0x104b] + 1;
    }
    else {
      param_1[0x104a] = param_1[0x104a] + 1;
    }
  }
  FUN_ram_0010cd00(param_1);
  iVar4 = *(int *)(*param_1 + 0x1c);
  *(uint *)(iVar4 + 0x4060) = *(uint *)(iVar4 + 0x4060) & 0xfffffffb;
  FUN_ram_000eea80(iVar4 + 0x416c,0,6);
  if (*(char *)(iVar4 + 0x40bd) == '\0') {
    return 0;
  }
  FUN_ram_001101c8(iVar4);
  return 0;
}


