/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018aca4 */

int FUN_ram_0018aca4(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)DAT_ram_001abacd;
  iVar3 = 0;
  if (param_1 != 0) {
    if (param_1 < 0x80) {
      do {
        param_1 = param_1 * 2;
        iVar3 = iVar3 + -1;
      } while (param_1 < 0x80);
    }
    else {
      for (; 0xff < param_1; param_1 = param_1 >> 1) {
        iVar3 = iVar3 + 1;
      }
    }
    uVar4 = 0;
    bVar1 = false;
    do {
      if (param_1 <= (byte)(&DAT_ram_001aba90)[uVar4 * 2]) {
        uVar2 = (uint)(byte)(&DAT_ram_001aba91)[uVar4 * 2];
        bVar1 = true;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 < 0x1f) && (!bVar1));
    return iVar3 * 0x1e + uVar2 + -1;
  }
  return -0x80000000;
}


