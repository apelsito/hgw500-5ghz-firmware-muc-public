/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80024744 */

undefined4 FUN_ram_80024744(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = (uint)*(ushort *)(&DAT_ram_001aa634 + param_2 * 2) - (&DAT_ram_8002fe3c)[param_2 * 5];
  if (iVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  if (iVar5 < 1) {
    uVar7 = 0;
  }
  else {
    do {
      iVar2 = DAT_ram_8002fe20;
      DAT_ram_8002fe20 = iVar2;
      if (DAT_ram_8002fe20 == 0) {
LAB_ram_8002482c:
        uVar7 = 0xffffffff;
        goto LAB_ram_80024830;
      }
      if (*(int *)(DAT_ram_8002fe20 + 0xc) == 0) {
        DAT_ram_8002fe24 = &DAT_ram_8002fe20;
      }
      puVar1 = (undefined4 *)(DAT_ram_8002fe20 + 0xc);
      DAT_ram_8002fe20 = *(int *)(DAT_ram_8002fe20 + 0xc);
      *puVar1 = 0;
      DAT_ram_8002fe28 = DAT_ram_8002fe28 + -1;
      if (iVar2 == 0) goto LAB_ram_8002482c;
      iVar3 = FUN_ram_800245a4(param_1,param_2,iVar2,1);
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0xc) = DAT_ram_8002fe20;
        if (DAT_ram_8002fe20 == 0) {
          DAT_ram_8002fe24 = (undefined4 *)(iVar2 + 0xc);
        }
        DAT_ram_8002fe28 = DAT_ram_8002fe28 + 1;
        DAT_ram_8002fe20 = iVar2;
        goto LAB_ram_8002482c;
      }
      if (iVar6 == 0) {
        iVar6 = iVar2;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar7 = 0;
  }
LAB_ram_80024830:
  uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + param_2 * 4 + 0x2090);
  iVar5 = 1 - uVar4;
  if (1 < uVar4) {
    iVar5 = 0;
  }
  if ((iVar5 != 0) && (iVar6 != 0)) {
    FUN_ram_0015cae4(*(int *)(param_1 + 0x3b20),param_2,iVar6);
    return uVar7;
  }
  return uVar7;
}


