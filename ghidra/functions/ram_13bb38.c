/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013bb38 */

undefined4 FUN_ram_0013bb38(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  
  uVar2 = *(undefined4 *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1c) + 0x3b20);
  local_2c = DAT_ram_001a8784;
  local_28 = DAT_ram_001a8788;
  local_24 = DAT_ram_001a878c;
  local_20 = DAT_ram_001a8790;
  uStack_1c = DAT_ram_001a8794;
  local_18 = DAT_ram_001a8798;
  iVar3 = *(int *)(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  FUN_ram_000fb55c(uVar2,iVar3 + 0x96,*(undefined1 *)(iVar3 + 0x67c),&local_2c,0,uVar1,0);
  FUN_ram_000fb55c(uVar2,iVar3 + 0x96,*(undefined1 *)(iVar3 + 0x67c),&local_2c,1,uVar1,0);
  FUN_ram_000fb55c(uVar2,&uStack_1c,0x3f,&local_2c,0,uVar1,0);
  FUN_ram_000fb55c(uVar2,&uStack_1c,0x3f,&local_2c,1,uVar1,0);
  return 0;
}


