/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188a28 */

void FUN_ram_00188a28(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    puVar2 = (uint *)&DAT_ram_e60a5000;
    iVar5 = 0;
    iVar1 = 0x40;
    do {
      iVar4 = 0;
      puVar3 = puVar2;
      do {
        puVar2 = puVar3 + 1;
        *puVar3 = (*(uint *)(iVar5 * 0x10 + param_1 + iVar4 * 4) & 0xfff) << 0xc |
                  *(uint *)(param_2 + iVar5 * 0x10 + iVar4 * 4) & 0xfff;
        iVar4 = iVar4 + 1;
        puVar3 = puVar2;
      } while (iVar4 < 4);
      iVar1 = iVar1 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar1 != 0);
    puVar2 = (uint *)&DAT_ram_e60a6000;
    iVar1 = 0x40;
    iVar5 = 0x40;
    do {
      iVar4 = 0;
      puVar3 = puVar2;
      do {
        puVar2 = puVar3 + 1;
        *puVar3 = *(uint *)(param_2 + iVar5 * 0x10 + iVar4 * 4) & 0xfff |
                  (*(uint *)(iVar5 * 0x10 + param_1 + iVar4 * 4) & 0xfff) << 0xc;
        iVar4 = iVar4 + 1;
        puVar3 = puVar2;
      } while (iVar4 < 4);
      iVar1 = iVar1 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar1 != 0);
    return;
  }
  return;
}


