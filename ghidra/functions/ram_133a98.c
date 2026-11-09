/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00133a98 */

void FUN_ram_00133a98(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0xb8);
  iVar5 = 0x31;
  iVar4 = 0x1a648c;
  LP_START = 0x133ac0;
  LP_END = 0x133ad4;
  do {
    puVar1 = (undefined4 *)(iVar4 + 0xc4);
    iVar4 = iVar4 + 4;
    if ((undefined4 *)*puVar1 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)*puVar1;
    }
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar4 = 8;
  iVar5 = 0x1a648c;
  puVar2 = (undefined4 *)(param_1 + 0x17c);
  do {
    uVar3 = FUN_ram_00171230(*(undefined4 *)(iVar5 + 0xc4),0);
    iVar4 = iVar4 + -1;
    *puVar2 = uVar3;
    iVar5 = iVar5 + 4;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  return;
}


