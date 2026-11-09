/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001394c0 */

void FUN_ram_001394c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_30;
  int local_2c;
  
  iVar4 = param_2 * 0xac + *(int *)(param_1 + 0x388) + 0x90;
  iVar3 = param_1 + 0x130 + param_2 * 0x118;
  uVar6 = *(undefined4 *)(param_1 + 0x210 + param_2 * 0x118);
  iVar5 = 4;
  piVar2 = (int *)(iVar4 + 0x50);
  iVar7 = iVar3;
  do {
    if (*(int *)(iVar7 + 0x70) == -1) {
      *(undefined4 *)(iVar7 + 0x80) = 0;
      iVar1 = 0;
    }
    else {
      local_30 = 0;
      local_2c = 0;
      FUN_ram_00137f88(*(int *)(iVar7 + 0x70),uVar6,&local_30,&local_2c);
      iVar1 = local_30 * 10 - (local_2c + 500) / 1000;
      *(int *)(iVar7 + 0x80) = iVar1;
    }
    *piVar2 = iVar1;
    iVar5 = iVar5 + -1;
    iVar7 = iVar7 + 4;
    piVar2 = piVar2 + 1;
  } while (iVar5 != 0);
  *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar3 + 0xe0);
  local_30 = 0;
  local_2c = 0;
  FUN_ram_001380ac(iVar3 + 0x70,*(undefined4 *)(iVar3 + 0xe0),&local_30,&local_2c);
  local_2c = (local_2c + 500) / 1000;
  iVar7 = local_30 * 10 - local_2c;
  *(int *)(iVar3 + 0x90) = iVar7;
  *(int *)(iVar4 + 0x60) = iVar7;
  FUN_ram_001393ac(iVar3 + 0x70,4);
  FUN_ram_0039fe00(iVar4 + 100,iVar3 + 0x94,0x14);
  return;
}


