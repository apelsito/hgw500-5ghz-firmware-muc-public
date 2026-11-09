/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014c464 */

undefined4 FUN_ram_0014c464(int param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((*(short *)(param_2 + 6) == 0) && (*(short *)(param_2 + 0x10) == 0)) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 4);
  cVar2 = *(char *)(param_1 + 0x1e);
  if ((((bVar1 & 1) == 0) || (cVar2 != '\x06')) && (((bVar1 & 2) == 0 || (cVar2 != '\x01')))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (((cVar2 != '\x06') || ((bVar1 & 4) == 0)) || (1 < *(ushort *)(param_1 + 0x39e4))) {
    if ((bVar1 & 8) == 0) {
      return uVar3;
    }
    if (param_3 == 0) {
      return uVar3;
    }
  }
  return 0;
}


