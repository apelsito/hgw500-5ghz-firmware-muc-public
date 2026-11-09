/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001799bc */

void FUN_ram_001799bc(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  param_2 = param_2 << 7;
  iVar3 = 0x40;
  LP_START = 0x1799d8;
  LP_END = 0x1799f4;
  do {
    puVar1 = (ushort *)(&DAT_ram_0019af84 + param_2);
    param_2 = param_2 + 2;
    *(uint *)(iVar2 * 4 + -0x19f60000 + param_1 * 0x100) = *puVar1 & 0xfff;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


