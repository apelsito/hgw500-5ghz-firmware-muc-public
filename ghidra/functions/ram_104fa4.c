/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00104fa4 */

void FUN_ram_00104fa4(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    if (param_2 == 0) {
      iVar5 = 0x3004;
      iVar4 = 0x3008;
      FUN_ram_001039f0(param_1,param_3);
    }
    else {
      iVar4 = (param_2 + -1) * 8;
      iVar5 = iVar4 + 0x307c;
      iVar4 = iVar4 + 0x3080;
    }
    uVar1 = *param_3;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5) = uVar1;
    *(undefined4 *)(iVar5 + *(int *)(param_1 + 0xc) + 0x100000) = uVar1;
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + iVar4) & 0x7fff0000 | (uint)*(ushort *)(param_3 + 1)
    ;
    uVar3 = uVar2 | 0x80000000;
    if (param_4 == 0) {
      uVar3 = uVar2;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + iVar4) = uVar3;
    *(uint *)(*(int *)(param_1 + 0xc) + 0x100000 + iVar4) = uVar3;
  }
  return;
}


