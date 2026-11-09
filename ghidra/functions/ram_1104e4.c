/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001104e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001104e4(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*param_1 + 0x1c);
  bVar1 = *(byte *)(iVar5 + 0x416d);
  iVar4 = *(int *)(iVar5 + 0x4168);
  *(int *)(iVar5 + 0x4164) = *(int *)(iVar5 + 0x4164) + 1;
  *(undefined2 *)(iVar4 + 0x24) = 1;
  *(undefined2 *)(iVar4 + 0x26) = *(undefined2 *)(iVar5 + 0x416e + (uint)bVar1 * 2);
  _DAT_ram_e000002c = 0x2000200;
  sync();
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3014);
  *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3018)
  ;
  *(undefined4 *)(iVar4 + 0x38) = uVar3;
  iVar2 = FUN_ram_0010da64(param_1,*(undefined4 *)(iVar5 + 0x4674),*(undefined4 *)(iVar5 + 0x4678),0
                           ,1);
  if (iVar2 != 0) {
    *(int *)(iVar5 + 0x4130) = *(int *)(iVar5 + 0x4130) + 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3018);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3014)
  ;
  *(undefined4 *)(iVar4 + 0x44) = uVar3;
  return;
}


