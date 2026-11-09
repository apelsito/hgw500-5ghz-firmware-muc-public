/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e774 */

void FUN_ram_0011e774(int *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_38 [32];
  byte local_18 [4];
  
  iVar5 = *(int *)(*param_1 + 0x1c);
  uVar2 = *(uint *)(iVar5 + 0x4678);
  iVar3 = *(int *)(iVar5 + 0x467c);
  if (param_2 == (uVar2 & 0xff)) {
    if (iVar3 == 0x28) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
      if (iVar3 == 0x50) {
        iVar4 = 2;
      }
    }
    bVar1 = *(byte *)((int)param_1 + param_2 * 0x34 + iVar4 + 0x48a);
    if ('\0' < (char)bVar1) {
      uVar2 = uVar2 & 0xffff00ff | (uint)bVar1 << 8;
      *(uint *)(iVar5 + 0x4678) = uVar2;
    }
    FUN_ram_0010b8bc(param_1,uVar2,iVar3,local_18,auStack_38);
    if ((uint)local_18[0] != *(uint *)(iVar5 + 0x4680)) {
      FUN_ram_0010c3f0(param_1,*(undefined4 *)(iVar5 + 0x4674),*(undefined4 *)(iVar5 + 0x4678),1);
      return;
    }
    if (*(short *)(iVar5 + 0x4058) == 0) {
      FUN_ram_0010bd44(iVar5,auStack_38);
      return;
    }
  }
  return;
}


