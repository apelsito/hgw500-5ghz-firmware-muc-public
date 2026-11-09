/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001050f8 */

void FUN_ram_001050f8(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x300c) = uVar2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(&DAT_ram_0010300c + *(int *)(param_1 + 0xc)) = uVar2;
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x3010) & 0xffff0000 |
          (uint)CONCAT11(*(undefined1 *)((int)param_2 + 5),uVar1);
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3010) = uVar3;
  *(uint *)(&LAB_ram_00103010 + *(int *)(param_1 + 0xc)) = uVar3;
  return;
}


