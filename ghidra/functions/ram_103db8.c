/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103db8 */

void FUN_ram_00103db8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (param_2 & 7) << 8;
  iVar3 = *(int *)(param_1 + 0x148);
  *(uint *)(*(int *)(param_1 + 0x114) + 0x30) =
       *(uint *)(*(int *)(param_1 + 0x114) + 0x30) & 0xfffff8ff | uVar1;
  iVar2 = *(int *)(param_1 + 0x150);
  *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffff8ff | uVar1;
  iVar3 = *(int *)(param_1 + 0x158);
  *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xfffff8ff | uVar1;
  iVar2 = *(int *)(param_1 + 0x11c);
  *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffff8ff | uVar1;
  *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xfffff8ff | uVar1;
  uVar1 = FUN_ram_0011bc70(0,0,1);
  *(uint *)(*(int *)(param_1 + 0x120) + 0x30) =
       (uVar1 & 7) << 8 | *(uint *)(*(int *)(param_1 + 0x120) + 0x30) & 0xfffff8ff;
  uVar1 = FUN_ram_0011bc70(0,0,2);
  *(uint *)(*(int *)(param_1 + 0x124) + 0x30) =
       *(uint *)(*(int *)(param_1 + 0x124) + 0x30) & 0xfffff8ff | (uVar1 & 7) << 8;
  return;
}


