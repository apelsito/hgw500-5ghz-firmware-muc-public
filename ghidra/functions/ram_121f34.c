/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121f34 */

void FUN_ram_00121f34(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  uVar6 = 0;
  iVar4 = 2;
  iVar5 = (uint)*pbVar2 * 0x34;
  do {
    uVar8 = 0;
    do {
      iVar3 = uVar8 * 3 + uVar6 * 0xc;
      pbVar7 = pbVar2 + iVar3 + 1;
      *(byte *)(iVar3 + iVar1 + 0x48a + iVar5) = *pbVar7;
      *(byte *)(iVar3 + iVar1 + 0x48b + iVar5) = pbVar7[1];
      *(byte *)(iVar3 + iVar1 + 0x48c + iVar5) = pbVar7[2];
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 4);
    iVar4 = iVar4 + -1;
    uVar6 = uVar6 + 1 & 0xff;
  } while (iVar4 != 0);
  FUN_ram_0011e774();
  return;
}


