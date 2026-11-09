/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001799f8 */

undefined2 FUN_ram_001799f8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  iVar1 = DAT_ram_0018c2f0 * 0xb4 + param_1 * 0x3c;
  LP_START = 0x179a24;
  LP_END = 0x179a38;
  while ((*(ushort *)(&DAT_ram_00193224 + iVar1) == 0 ||
         (param_2 != *(ushort *)(&DAT_ram_00193224 + iVar1)))) {
    iVar1 = iVar1 + 6;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  }
  return *(undefined2 *)(iVar1 + 0x193226);
}


