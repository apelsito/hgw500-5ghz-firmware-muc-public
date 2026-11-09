/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012aa1c */

void FUN_ram_0012aa1c(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_ram_001226bc(param_2);
  if (*(int *)(param_2 + 0xd38) != 0) {
    piVar4 = *(int **)(param_2 + 0xd3c);
    iVar5 = *piVar4;
    iVar2 = FUN_ram_0011bca8(param_2);
    uVar1 = *(ushort *)(param_2 + 0x422);
    *(uint *)(iVar5 + 0x30) =
         *(uint *)(iVar5 + 0x30) & 0xfffff8ff | ((uint)*(byte *)(param_2 + 0x688) + iVar2 & 7) << 8;
    *(uint *)(iVar5 + 0x48) = (uVar1 & 0x1ff) << 0x10 | 0x20003f0;
    iVar3 = *(int *)(param_1 + 0x3b20);
    iVar5 = *piVar4;
    iVar2 = param_3 * 0x20 + 0x80;
    *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar2) = 1;
    *(int *)(*(int *)(iVar3 + 0xc) + iVar2) = iVar5;
    DAT_ram_8003780c = DAT_ram_8003780c + 1;
  }
  return;
}


