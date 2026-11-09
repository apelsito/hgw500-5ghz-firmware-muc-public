/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ab9c */

undefined4 FUN_ram_0016ab9c(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(ushort *)(param_2 + 2);
  if (((uVar3 != 0) && (iVar4 = *(int *)(param_2 + 4), iVar4 != 0)) && (uVar3 != 0)) {
    iVar2 = 0;
    LP_START = 0x16abc4;
    LP_END = 0x16abdc;
    iVar1 = iVar4;
    do {
      if ((iVar1 != 0) && (param_1 == *(byte *)(iVar4 + iVar2 * 0xc))) {
        return 1;
      }
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}


