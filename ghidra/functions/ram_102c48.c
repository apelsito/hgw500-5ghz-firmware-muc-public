/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102c48 */

undefined4 FUN_ram_00102c48(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  iVar2 = param_1 + 0x90;
  iVar8 = 4;
  LP_START = 0x102c68;
  LP_END = 0x102cfc;
  do {
    uVar1 = *(ushort *)(iVar2 + 2);
    uVar5 = *(uint *)(iVar2 + 8);
    *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 1;
    iVar3 = iVar4 * 4 + 0x420;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3) = 0x40000000;
    iVar7 = iVar4 * 0x10;
    uVar6 = uVar5 & 0xffff;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x388) = uVar6;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x38c) = uVar6;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 900) = (uVar1 + uVar5) - 4 & 0xffff;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x380) = uVar6;
    iVar2 = iVar2 + 0x10;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc)) = 0x80000000;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar4 = 0;
  iVar8 = 4;
  iVar2 = param_1 + 0x50;
  LP_START = 0x102d0c;
  LP_END = 0x102d94;
  do {
    uVar1 = *(ushort *)(iVar2 + 2);
    uVar5 = *(uint *)(iVar2 + 8);
    *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 1;
    iVar3 = iVar4 * 4 + 0x410;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3) = 0x40000000;
    iVar7 = iVar4 * 0x10;
    uVar6 = uVar5 & 0xffff;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x348) = uVar6;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x34c) = uVar6;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x344) = (uVar1 + uVar5) - 4 & 0xffff;
    *(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 0x340) = uVar6;
    iVar2 = iVar2 + 0x10;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc)) = 0x80000000;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return 0;
}


