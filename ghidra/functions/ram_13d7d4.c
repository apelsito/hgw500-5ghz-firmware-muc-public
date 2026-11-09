/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d7d4 */

undefined4 FUN_ram_0013d7d4(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  
  uVar3 = (uint)((ulonglong)param_1[1] * (ulonglong)*param_2 >> 0x20);
  uVar1 = param_1[1] * *param_2;
  uVar4 = (uint)((ulonglong)param_2[1] * (ulonglong)*param_1 >> 0x20);
  uVar2 = param_2[1] * *param_1;
  if (param_3 == 1) {
    lVar6 = FUN_ram_0039fe9c(uVar1,uVar3,5);
    lVar6 = lVar6 + CONCAT44(uVar3,uVar1);
    uVar1 = (uint)((ulonglong)lVar6 >> 0x20);
    bVar5 = uVar1 < uVar4;
    if (uVar1 == uVar4) {
      bVar5 = (uint)lVar6 < uVar2;
    }
    if (!bVar5 && lVar6 != CONCAT44(uVar4,uVar2)) {
      return 1;
    }
  }
  else if (param_3 == 2) {
    lVar6 = FUN_ram_0039fe9c(uVar2,uVar4,5);
    lVar6 = lVar6 + CONCAT44(uVar4,uVar2);
    uVar2 = (uint)((ulonglong)lVar6 >> 0x20);
    bVar5 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar5 = uVar1 < (uint)lVar6;
    }
    if (!bVar5 && lVar6 != CONCAT44(uVar3,uVar1)) {
      return 1;
    }
  }
  else {
    bVar5 = uVar3 < uVar4;
    if (uVar3 == uVar4) {
      bVar5 = uVar1 < uVar2;
    }
    if (!bVar5 && (uVar3 != uVar4 || uVar1 != uVar2)) {
      return 1;
    }
  }
  return 0;
}


