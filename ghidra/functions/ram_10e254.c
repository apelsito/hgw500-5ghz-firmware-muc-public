/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010e254 */

int FUN_ram_0010e254(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*param_1 + 0x1c);
  iVar4 = *(int *)(iVar5 + 0x3b20);
  uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3018);
  param_2[0x1c] = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3014);
  param_2[0x1d] = uVar3;
  uVar1 = *(ushort *)(param_2 + 4);
  *(int *)(iVar5 + 0x4050) = *(int *)(iVar5 + 0x4050) + 1;
  iVar2 = FUN_ram_0010e084(param_1,*param_2,param_2[1],1,uVar1 & 0x20);
  uVar3 = DAT_ram_80038ee4;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar5 + 0x40a8) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar5 + 0x40ac) = uVar3;
    iVar2 = 0;
    FUN_ram_000eea80(param_2 + 7,0,0x1c);
    uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3018);
    param_2[7] = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3014);
    param_2[8] = uVar3;
    param_2[0x1e] = param_2[7];
    param_2[0x1f] = param_2[8];
  }
  return iVar2;
}


