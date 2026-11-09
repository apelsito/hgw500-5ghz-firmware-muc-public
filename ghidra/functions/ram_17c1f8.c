/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017c1f8 */

void FUN_ram_0017c1f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)(&DAT_ram_e60a1000 + param_1 * 0x1000);
  iVar2 = 8;
  do {
    iVar5 = 0;
    do {
      iVar1 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *puVar4 = (&DAT_ram_00210e70)[param_1 * 0x70 + iVar3 * 0xe + iVar1];
      puVar4[1] = (&DAT_ram_00210e70 + param_1 * 0x70 + iVar3 * 0xe + iVar1)[1];
      puVar4 = puVar4 + 2;
    } while (iVar5 < 7);
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar2 != 0);
  return;
}


