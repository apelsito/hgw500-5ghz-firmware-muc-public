/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011037c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_0011037c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*param_1 + 0x1c);
  iVar5 = *(int *)(iVar4 + 0x4168);
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x3b20) + 0xc) + 0x3018);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x3b20) + 0xc) + 0x3014)
  ;
  *(undefined4 *)(iVar5 + 0x2c) = uVar3;
  iVar1 = FUN_ram_0010e084(param_1,*(undefined4 *)(iVar4 + 0x40d4),*(undefined4 *)(iVar4 + 0x40d0),0
                           ,1);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x3b20) + 0xc) + 0x3014);
    uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x3b20) + 0xc) + 0x3018);
    *(undefined2 *)(iVar5 + 0x24) = 2;
    *(undefined4 *)(iVar5 + 0x30) = uVar2;
    *(undefined4 *)(iVar5 + 0x34) = uVar3;
    *(int *)(iVar4 + 0x4160) = *(int *)(iVar4 + 0x4160) + 1;
    _DAT_ram_e000002c = 0x2000200;
    sync();
    iVar1 = 0;
  }
  else {
    *(int *)(iVar4 + 0x4130) = *(int *)(iVar4 + 0x4130) + 1;
  }
  return iVar1;
}


