/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017e4f0 */

void FUN_ram_0017e4f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x80;
  do {
    iVar2 = iVar4 * 0x98;
    if ((&DAT_ram_00214830)[iVar2] != '\0') {
      iVar1 = 4;
      do {
        FUN_ram_0017e4bc(&DAT_ram_0021480c + iVar2);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 0x26;
      } while (iVar1 != 0);
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  return;
}


