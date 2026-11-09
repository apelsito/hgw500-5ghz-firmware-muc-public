/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013982c */

void FUN_ram_0013982c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_ram_0018d3e0 < param_1) {
    DAT_ram_0020fd68 = DAT_ram_0020fd68 + 1;
    return;
  }
  if (param_1 <= DAT_ram_0018d3c8) {
    DAT_ram_0020fd4c = DAT_ram_0020fd4c + 1;
    return;
  }
  iVar1 = 5;
  iVar3 = 6;
  iVar4 = 0;
  do {
    while( true ) {
      iVar2 = iVar3 + iVar4 >> 1;
      if ((&DAT_ram_0018d3c8)[iVar2] <= param_1) break;
      iVar1 = iVar2 + -1;
      iVar3 = iVar2;
      if (iVar1 == iVar4) goto LAB_ram_001398b0;
    }
    if (param_1 <= (&DAT_ram_0018d3c8)[iVar2]) {
      (&DAT_ram_0020fd4c)[iVar2] = (&DAT_ram_0020fd4c)[iVar2] + 1;
      return;
    }
    iVar4 = iVar2;
  } while (iVar1 != iVar2);
LAB_ram_001398b0:
  (&DAT_ram_0020fd4c)[iVar3] = (&DAT_ram_0020fd4c)[iVar3] + 1;
  return;
}


