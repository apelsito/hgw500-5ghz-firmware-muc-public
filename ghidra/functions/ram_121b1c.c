/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121b1c */

undefined4 FUN_ram_00121b1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_ram_0011c26c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0x13;
  }
  else {
    puVar3 = *(undefined4 **)(iVar1 + 0x388);
    *(undefined2 *)(iVar1 + 0x7dc) = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[0x12] = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


