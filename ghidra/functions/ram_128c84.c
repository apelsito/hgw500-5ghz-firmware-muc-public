/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128c84 */

void FUN_ram_00128c84(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x84);
  puVar2 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    do {
      FUN_ram_000ee834(*puVar2);
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = (undefined4 *)puVar2[2];
    } while (puVar2 != (undefined4 *)0x0);
    iVar1 = *(int *)(param_1 + 0x84);
  }
  FUN_ram_000ee834(*(undefined4 *)(iVar1 + 0x24));
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x24) = 0;
  FUN_ram_000ee834(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10));
  iVar1 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  FUN_ram_000ee834();
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


