/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137ef8 */

uint FUN_ram_00137ef8(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x80000001;
  }
  else {
    iVar1 = FUN_ram_00137e84();
    uVar2 = 0;
    if (0 < iVar1 + -8) {
      iVar1 = FUN_ram_00137e84(param_1);
      uVar2 = iVar1 - 8U & 0xff;
    }
    uVar2 = ((int)((uVar2 - param_2) * 0xc0a9) >> 4) +
            (uint)*(ushort *)(&DAT_ram_001a66e2 + (param_1 >> (uVar2 & 0x1f)) * 2);
    uVar3 = uVar2 >> (9U - param_3 & 0x1f);
    if (9U - param_3 != 0xffffffff) {
      uVar2 = uVar3 + (uVar3 & 1) >> 1;
    }
  }
  return uVar2;
}


