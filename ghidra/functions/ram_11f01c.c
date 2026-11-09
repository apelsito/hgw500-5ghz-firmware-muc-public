/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011f01c */

void FUN_ram_0011f01c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort local_1c [2];
  
  iVar5 = *(int *)(param_2 + 0xc);
  uVar3 = param_3 >> 0x18;
  uVar4 = (param_3 & 0xff0000) >> 0x10;
  iVar1 = FUN_ram_001054cc(uVar3,uVar4,local_1c);
  if ((iVar1 < 0) || ((param_3 & 0xffff) == (uint)local_1c[0])) {
    return;
  }
  iVar1 = FUN_ram_00105550(uVar3,uVar4,param_3 & 0xffff);
  if (iVar1 < 0) {
    FUN_ram_000ee260(s_fail_to_set_dynamic_sifs_ram_001c3040);
    return;
  }
  if ((uVar4 == 3) && (*(byte *)(*(int *)(iVar5 + 0x387c) + 8) < 0xf)) {
    uVar2 = 3;
  }
  else {
    uVar2 = (undefined1)DAT_ram_8002c8dc;
    if ((uVar3 == 2) && (DAT_ram_0018c0ec == 0)) {
      FUN_ram_0010560c();
      return;
    }
  }
  FUN_ram_0010526c(*(undefined4 *)(param_1 + 0x3b20),uVar2);
  return;
}


