/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1c90 */

uint FUN_ram_000f1c90(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 < 0) {
    return 0xffffffff;
  }
  if (0 < param_1) {
    return 0xffffffff;
  }
  *param_2 = param_1;
  uVar4 = 0;
  uVar2 = (&DAT_ram_001cb298)[param_1];
  uVar1 = uVar2 & 1;
  uVar3 = 1;
  while( true ) {
    if (uVar1 == 0) {
      (&DAT_ram_001cb298)[param_1] = uVar2 | uVar3;
      (&DAT_ram_001cb29c)[param_1] = (&DAT_ram_001cb29c)[param_1] + -1;
      return uVar4;
    }
    uVar4 = uVar4 + 1;
    if (0xf < (int)uVar4) break;
    uVar3 = 1 << (uVar4 & 0x1f);
    uVar1 = uVar3 & uVar2;
  }
  return 0xffffffff;
}


