/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001598e0 */

void FUN_ram_001598e0(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if ((DAT_ram_0018c1d8 & 1) != 0) {
    iVar3 = **(int **)(param_1 + 0x3a08);
    if ((char)param_2[10] == '\x02') {
      iVar3 = iVar3 * 0x39 + 0x28;
    }
    else {
      iVar3 = iVar3 * 0x39 + 0x31;
    }
    piVar4 = *(int **)(param_1 + 0x3a08) + iVar3;
    uVar2 = param_2[7];
    *piVar4 = *piVar4 + (uint)(byte)uVar2;
    piVar4[1] = piVar4[1] + ((*param_2 & 0xf000) >> 0xc);
    bVar1 = *(byte *)((int)param_2 + 0x1d);
    piVar4[2] = (*param_2 >> 3 & 1) + piVar4[2];
    piVar4[3] = ((uint)(byte)uVar2 - (uint)bVar1) + piVar4[3];
    piVar4[4] = param_2[3];
    return;
  }
  return;
}


