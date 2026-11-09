/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018ad88 */

int FUN_ram_0018ad88(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return -10000;
  }
  if (param_1 < 0x300) {
    uVar2 = (param_1 & 0x300) >> 8;
    if (uVar2 < 3) goto LAB_ram_0018adbc;
  }
  else {
    param_1 = 0x2ff;
  }
  uVar2 = 2;
LAB_ram_0018adbc:
  iVar1 = FUN_ram_0018aca4(param_1 >> uVar2);
  return iVar1 + -0x1e1 + uVar2 * 0x1e;
}


