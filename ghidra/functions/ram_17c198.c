/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017c198 */

void FUN_ram_0017c198(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)(&DAT_ram_e60a1000 + param_1 * 0x1000);
  iVar2 = 8;
  do {
    iVar6 = 0;
    do {
      puVar5 = puVar4;
      iVar1 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      *puVar5 = *(undefined4 *)(&DAT_ram_00211570 + iVar1 + iVar3 * 0x18 + param_1 * 0xc0);
      puVar5[1] = *(undefined4 *)
                   ((int)(&DAT_ram_00211570 + iVar1 + iVar3 * 0x18 + param_1 * 0xc0) + 4);
      puVar4 = puVar5 + 2;
    } while (iVar6 < 3);
    puVar4 = puVar5 + 10;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar2 != 0);
  return;
}


