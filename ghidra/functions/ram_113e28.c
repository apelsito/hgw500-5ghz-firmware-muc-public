/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00113e28 */

void FUN_ram_00113e28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = DAT_ram_0018c0c4;
  iVar2 = DAT_ram_0018c0c4;
  while (iVar1 = iVar4, iVar1 != 0) {
    iVar5 = iVar5 + 1;
    iVar2 = iVar1;
    iVar4 = *(int *)(iVar1 + 0x28);
  }
  iVar4 = *(int *)(param_1 + 0x5b84);
  if (iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    DAT_ram_0018c0c4 = param_2;
  }
  else {
    *(int *)(iVar2 + 0x28) = param_2;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (iVar4 == 0) {
    uVar3 = FUN_ram_000f7c10(10,param_1,0,&LAB_ram_001181e0,2);
    *(undefined4 *)(param_1 + 0x5b84) = uVar3;
  }
  if (DAT_ram_0018c0c8 < iVar5) {
    DAT_ram_0018c0c8 = iVar5;
  }
  return;
}


