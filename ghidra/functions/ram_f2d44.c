/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f2d44 */

void FUN_ram_000f2d44(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  
  iVar1 = 0;
  iVar2 = 0x400;
  do {
    if ((&DAT_ram_001d4444)[iVar1 * 8] == 0) {
      return;
    }
    FUN_ram_000eec50(auStack_118,(&DAT_ram_001d4444)[iVar1 * 8],(&DAT_ram_001d4450)[iVar1 * 8],
                     (&DAT_ram_001d4454)[iVar1 * 8],(&DAT_ram_001d4458)[iVar1 * 8],
                     (&DAT_ram_001d445c)[iVar1 * 8],(&DAT_ram_001d4460)[iVar1 * 8]);
    FUN_ram_000ee260(s__x__x__s_ram_001be188,(&DAT_ram_001d4448)[iVar1 * 8],
                     -1 - (&DAT_ram_001d444c)[iVar1 * 8],auStack_118);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 1;
  } while (iVar2 != 0);
  return;
}


