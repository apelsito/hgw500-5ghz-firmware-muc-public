/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010da64 */

undefined4
FUN_ram_0010da64(int *param_1,undefined4 param_2,undefined4 param_3,ushort param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  uVar1 = FUN_ram_000fd684(*(undefined4 *)(iVar2 + 0x3b20));
  *(undefined4 *)(iVar2 + 0x4070) = uVar1;
  uVar1 = FUN_ram_000fd670(*(undefined4 *)(iVar2 + 0x3b20));
  *(undefined4 *)(iVar2 + 0x4074) = uVar1;
  uVar1 = FUN_ram_000fd65c(*(undefined4 *)(iVar2 + 0x3b20));
  *(undefined4 *)(iVar2 + 0x406c) = uVar1;
  *(undefined2 *)(iVar2 + 0x4058) = 0;
  if (*(short *)(iVar2 + 0x4672) == 0) {
    param_4 = param_4 | 4;
    if (*(char *)(iVar2 + 0x465c) != '\0') {
      param_4 = 1;
    }
    uVar1 = FUN_ram_0010be58(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined2 *)(iVar2 + 0x4672) = 0;
    uVar1 = FUN_ram_0010be58(param_1,*(undefined4 *)(iVar2 + 0x4668),*(undefined4 *)(iVar2 + 0x466c)
                             ,*(undefined2 *)(iVar2 + 0x4670));
    DAT_ram_800378bc = DAT_ram_800378bc + 1;
  }
  DAT_ram_800378b4 = DAT_ram_800378b4 + 1;
  if (param_5 != 0) {
    FUN_ram_0016fe74(DAT_ram_0018c090);
  }
  *(int *)(iVar2 + 0x4078) = DAT_ram_0018cd6c - *(int *)(iVar2 + 0x4078);
  *(int *)(iVar2 + 0x407c) = DAT_ram_0018cd70 - *(int *)(iVar2 + 0x407c);
  *(int *)(iVar2 + 0x4080) = DAT_ram_0018cd74 - *(int *)(iVar2 + 0x4080);
  *(int *)(iVar2 + 0x4084) = DAT_ram_0018cd78 - *(int *)(iVar2 + 0x4084);
  *(int *)(iVar2 + 0x4088) = DAT_ram_0018cd7c - *(int *)(iVar2 + 0x4088);
  *(int *)(iVar2 + 0x408c) = DAT_ram_0018cd84 - *(int *)(iVar2 + 0x408c);
  FUN_ram_0010d9e4(iVar2 + 0x4064);
  return uVar1;
}


