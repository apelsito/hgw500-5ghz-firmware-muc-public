/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1bd8 */

void FUN_ram_000f1bd8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_1 >> 4) >> 0x1b;
  uVar1 = param_1 + uVar3;
  iVar2 = (int)uVar1 >> 5;
  (&DAT_ram_001cb290)[iVar2] = (&DAT_ram_001cb290)[iVar2] & ~(1 << ((uVar1 & 0x1f) - uVar3 & 0x1f));
  DAT_ram_001cb294 = DAT_ram_001cb294 + 1;
  return;
}


