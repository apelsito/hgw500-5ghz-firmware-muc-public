/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001795f0 */

int FUN_ram_001795f0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_ram_0016d584(param_1 & 0xff);
  iVar2 = FUN_ram_001711e0(0x298,0x1c000,0xe);
  iVar3 = FUN_ram_001711e0(0x2a0,0xc,2);
  iVar4 = DAT_ram_800261e4;
  if ((param_1 & 0x1000) == 0x1000) {
    iVar4 = DAT_ram_800261e0;
  }
  return iVar4 + iVar1 + (iVar2 + -1) * -2 + (iVar3 + -3) * 4;
}


