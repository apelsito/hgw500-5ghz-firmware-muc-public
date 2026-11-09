/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:800241a4 */

void FUN_ram_800241a4(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 3;
  do {
    if ((0x10000 << (uVar3 & 0x1f) & param_2) != 0) {
      uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + uVar3 * 4 + 0x2090);
      iVar2 = 1 - uVar1;
      if (1 < uVar1) {
        iVar2 = 0;
      }
      if ((iVar2 != 0) && ((&DAT_ram_8002fe3c)[uVar3 * 5] != 0)) {
        FUN_ram_80023fd0(param_1,uVar3,0,param_3);
      }
    }
    iVar4 = iVar4 + -1;
    uVar3 = uVar3 + 1;
  } while (iVar4 != 0);
  return;
}


