/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001584ec */

uint FUN_ram_001584ec(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x94) & 0xf;
    uVar2 = uVar2 & ~((*(uint *)(iVar1 + 0x94) & 0xf00) >> 8 & uVar2);
  }
  return uVar2;
}


