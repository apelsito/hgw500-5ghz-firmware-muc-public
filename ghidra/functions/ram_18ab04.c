/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018ab04 */

undefined4 FUN_ram_0018ab04(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 2) {
    if (-0x3a < param_3) {
      return 0xffffffff;
    }
    if (param_3 < -0x62) {
      return 0xffffffff;
    }
    iVar1 = param_4 + -6;
  }
  else {
    iVar1 = param_4 + -6;
    if ((param_1 == 1) && (0x14 < param_2)) {
      iVar1 = param_4 + -9;
    }
  }
  iVar3 = iVar1 + -4;
  if (param_1 != 2) {
    iVar3 = iVar1;
  }
  iVar1 = iVar3 + param_3 + -4;
  if (0 < iVar1) {
    return 0xffffffff;
  }
  uVar4 = iVar1 * -0x66 + 0x20;
  uVar2 = (int)(uVar4 & 0xfc00) >> 10;
  if (uVar2 < 5) {
    if (param_1 == 1) {
      iVar1 = *(int *)(&DAT_ram_0019d5b4 + ((int)(uVar4 & 0x3c0) >> 6) * 4) *
              *(int *)(&DAT_ram_0019d5a0 + uVar2 * 4) >> 0xd;
    }
    else {
      iVar1 = *(int *)(&DAT_ram_0019d5b4 + ((int)(uVar4 & 0x3c0) >> 6) * 4) *
              *(int *)(&DAT_ram_0019d5a0 + uVar2 * 4) >> 7;
    }
    *param_5 = iVar1;
    return 0;
  }
  *param_5 = -1;
  return 0;
}


