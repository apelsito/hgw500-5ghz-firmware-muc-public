/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00155e80 */

undefined2 FUN_ram_00155e80(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 3) {
    uVar3 = 6;
  }
  else if (param_2 == 2) {
    uVar3 = 5;
  }
  else {
    uVar3 = 1;
    if (param_2 != 1) {
      uVar3 = 0;
    }
  }
  iVar2 = FUN_ram_00155e44(*(undefined1 *)(param_1 + 0x67c),uVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(iVar2 + 0x58);
  }
  return uVar1;
}


