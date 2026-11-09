/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013b8b8 */

undefined4 FUN_ram_0013b8b8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x1c);
  uVar4 = *(undefined4 *)(iVar1 + 0x3b20);
  local_2c = DAT_ram_001a8774;
  local_28 = DAT_ram_001a8778;
  local_24 = DAT_ram_001a877c;
  local_20 = DAT_ram_001a8780;
  if ((*(char *)(param_1 + 0x2c) == '\x01') ||
     ((*(uint *)(*(int *)(param_1 + 0xc) + 0x2c) & 0x40000) == 0)) {
    *(undefined4 *)(iVar1 + 0x3c50) = *(undefined4 *)(param_1 + 0x38);
    if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x2c) & 0x40000) == 0) &&
       (*(char *)(*(int *)(param_1 + 0xc) + 0x1e) == '\x06')) {
      FUN_ram_000fb6f0(uVar4,0x3f);
      goto LAB_ram_0013b970;
    }
  }
  FUN_ram_000fb738(uVar4,0x3f,0,&local_2c,4);
LAB_ram_0013b970:
  cVar5 = '\0';
  iVar3 = 4;
  puVar2 = (undefined4 *)(iVar1 + 0x3b54);
  do {
    FUN_ram_000fb738(uVar4,cVar5,0,&local_2c,4);
    iVar3 = iVar3 + -1;
    *puVar2 = *(undefined4 *)(param_1 + 0x38);
    cVar5 = cVar5 + '\x01';
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  return 0;
}


