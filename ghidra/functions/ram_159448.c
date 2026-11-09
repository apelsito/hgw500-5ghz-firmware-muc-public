/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159448 */

int FUN_ram_00159448(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_1c;
  undefined2 local_18;
  
  local_1c = DAT_ram_001aa5c8;
  iVar4 = 0;
  iVar2 = 6;
  uVar3 = 0;
  local_18 = DAT_ram_001aa5cc;
  do {
    iVar1 = FUN_ram_00155e44(*(undefined1 *)(param_1 + 0x67c),
                             *(undefined1 *)((int)&local_1c + uVar3));
    if (iVar1 != 0) {
      iVar4 = iVar4 + *(int *)(iVar1 + 0x9c);
    }
    iVar2 = iVar2 + -1;
    uVar3 = uVar3 + 1 & 0xff;
  } while (iVar2 != 0);
  return iVar4;
}


