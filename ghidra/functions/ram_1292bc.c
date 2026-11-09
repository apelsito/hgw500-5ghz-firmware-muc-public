/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001292bc */

void FUN_ram_001292bc(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x1e) != '\x06') {
    return;
  }
  iVar4 = 8;
  uVar1 = 0;
  LP_START = 0x1292d4;
  LP_END = 0x129320;
  do {
    if ((((uVar1 < 8) && (iVar3 = *(int *)(param_1 + 0x3f94 + uVar1 * 4), iVar3 != 0)) &&
        (piVar2 = *(int **)(iVar3 + 0x84), piVar2 != (int *)0x0)) &&
       ((piVar2 = (int *)*piVar2, piVar2 != (int *)0x0 && (iVar3 = *piVar2, iVar3 != 0)))) {
      *(uint *)(iVar3 + 0x30) = (param_2 & 7) << 8 | *(uint *)(iVar3 + 0x30) & 0xfffff8ff;
    }
    uVar1 = uVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


