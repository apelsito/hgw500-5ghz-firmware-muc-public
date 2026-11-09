/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137f88 */

void FUN_ram_00137f88(uint param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (2 < param_2) {
    iVar1 = FUN_ram_00137ef8((param_1 >> 5) + 0x800,0,4);
    iVar2 = FUN_ram_00137ef8(2,0,4);
    iVar3 = FUN_ram_00137ef8(2,0,4);
    iVar4 = FUN_ram_00137ef8(param_2 + -3,0,4);
    uVar5 = (iVar1 + ((param_1 - (param_1 & 0xffffffe0)) + -0x10) * iVar2 + iVar3 * -0xb) - iVar4;
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
      iVar1 = uVar5 - (uVar5 & 0xfffffff0);
      *param_3 = -((int)uVar5 >> 4);
    }
    else {
      iVar1 = uVar5 - (uVar5 & 0xfffffff0);
      *param_3 = (int)uVar5 >> 4;
    }
    *param_4 = iVar1 * 0x271;
  }
  return;
}


