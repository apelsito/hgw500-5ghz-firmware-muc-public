/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158428 */

void FUN_ram_00158428(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x3da4);
  while (iVar3 != 0) {
    iVar1 = FUN_ram_00155e14(*(undefined1 *)(iVar3 + 0x67c));
    uVar2 = *(uint *)(iVar1 + 0x94) & 0xf00;
    if ((uVar2 == 0) || (uVar2 == 0xf00)) {
      FUN_ram_00129254(iVar3,(*(uint *)(iVar1 + 0x94) & 0xf) != 0);
      iVar3 = *(int *)(iVar3 + 0xd60);
    }
    else {
      iVar1 = FUN_ram_00155e14(*(undefined1 *)(iVar3 + 0x67c));
      if (iVar1 == 0) {
        FUN_ram_00129254(iVar3,0);
        iVar3 = *(int *)(iVar3 + 0xd60);
      }
      else {
        uVar2 = *(uint *)(iVar1 + 0x94) & 0xf;
        FUN_ram_00129254(iVar3,uVar2 & ~((*(uint *)(iVar1 + 0x94) & 0xf00) >> 8 & uVar2));
        iVar3 = *(int *)(iVar3 + 0xd60);
      }
    }
  }
  return;
}


