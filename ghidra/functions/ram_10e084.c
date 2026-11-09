/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010e084 */

int FUN_ram_0010e084(int *param_1,undefined4 param_2,uint param_3,ushort param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 0x1c);
  if (param_5 != 0) {
    FUN_ram_0016fe74(0);
  }
  iVar1 = FUN_ram_0010be58(param_1,param_2,param_3,param_4 | 2);
  if (iVar1 != 0) {
    if (param_5 == 0) {
      return iVar1;
    }
    FUN_ram_0016fe74(DAT_ram_0018c090);
    return iVar1;
  }
  iVar1 = FUN_ram_000fd670(*(undefined4 *)(iVar4 + 0x3b20));
  *(int *)(iVar4 + 0x4698) = iVar1 + *(int *)(iVar4 + 0x4698);
  iVar1 = FUN_ram_000fd684(*(undefined4 *)(iVar4 + 0x3b20));
  *(int *)(iVar4 + 0x469c) = iVar1 + *(int *)(iVar4 + 0x469c);
  iVar1 = FUN_ram_000fd65c(*(undefined4 *)(iVar4 + 0x3b20));
  iVar3 = param_1[0xe1f];
  *(int *)(iVar4 + 0x4694) = iVar1 + *(int *)(iVar4 + 0x4694);
  *(uint *)(iVar4 + 0x4064) = (uint)*(byte *)(iVar3 + 8);
  if ((param_3 & 0x800000) == 0) {
    uVar2 = 0x28;
    if ((param_3 & 0x40000000) == 0) {
      uVar2 = 0x14;
    }
  }
  else {
    uVar2 = 0x50;
  }
  *(undefined4 *)(iVar4 + 0x4068) = uVar2;
  *(undefined4 *)(iVar4 + 0x4090) = 0;
  *(undefined4 *)(iVar4 + 0x4078) = DAT_ram_0018cd6c;
  *(undefined4 *)(iVar4 + 0x407c) = DAT_ram_0018cd70;
  *(undefined4 *)(iVar4 + 0x4080) = DAT_ram_0018cd74;
  *(undefined4 *)(iVar4 + 0x4084) = DAT_ram_0018cd78;
  *(undefined4 *)(iVar4 + 0x4088) = DAT_ram_0018cd7c;
  uVar2 = DAT_ram_0018cd84;
  *(undefined1 *)(iVar4 + 0x465c) = 0;
  *(undefined2 *)(iVar4 + 0x4058) = 1;
  *(undefined4 *)(iVar4 + 0x408c) = uVar2;
  DAT_ram_800378b0 = DAT_ram_800378b0 + 1;
  return 0;
}


