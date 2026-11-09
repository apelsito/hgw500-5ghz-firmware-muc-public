/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017e4bc */

void FUN_ram_0017e4bc(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (ushort *)(param_1 + 4);
  iVar3 = 0x10;
  iVar2 = 0;
  LP_START = 0x17e4cc;
  LP_END = 0x17e4d8;
  do {
    if (*puVar1 == 0) {
      iVar2 = 0;
      break;
    }
    iVar2 = (uint)*puVar1 + iVar2;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(short *)(param_1 + 2) = (short)((int)(((uint)(iVar2 >> 3) >> 0x1c) + iVar2) >> 4);
  return;
}


