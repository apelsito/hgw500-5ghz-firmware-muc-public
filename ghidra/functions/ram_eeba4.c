/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eeba4 */

int FUN_ram_000eeba4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  while( true ) {
    uVar4 = (uint)bVar2;
    if (bVar1 == 0) {
      if (uVar4 == 0) {
        return 0;
      }
      return -1;
    }
    if (uVar4 == 0) {
      return 1;
    }
    iVar3 = bVar1 - uVar4;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (iVar3 != 0) break;
    bVar1 = *param_1;
    bVar2 = *param_2;
  }
  return iVar3;
}


