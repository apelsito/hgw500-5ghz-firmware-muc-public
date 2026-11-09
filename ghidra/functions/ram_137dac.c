/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137dac */

void FUN_ram_00137dac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = ((uint)*(ushort *)(param_1 + 0x43a) * 0x1400) / 1000;
  if (uVar3 < 0x7fffffff) {
    iVar1 = *(int *)(param_1 + 0x5b9c);
  }
  else {
    uVar3 = 0x7ffffffe;
    iVar1 = *(int *)(param_1 + 0x5b9c);
  }
  if (iVar1 == 0) {
    uVar2 = FUN_ram_000f7c10(uVar3,param_1,0,&LAB_ram_0013a764,3);
    *(undefined4 *)(param_1 + 0x5b9c) = uVar2;
  }
  else {
    FUN_ram_000f7da0(iVar1,uVar3);
  }
  return;
}


