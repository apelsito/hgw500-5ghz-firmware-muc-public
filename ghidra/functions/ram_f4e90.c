/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f4e90 */

undefined4 FUN_ram_000f4e90(int param_1,uint param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  param_1 = param_1 * 0x14;
  iVar5 = *(int *)(&DAT_ram_001dce70 + param_1);
  uVar2 = (uint)*(ushort *)(iVar5 + 0xe);
  if (uVar2 != 0) {
    iVar4 = 0;
    LP_START = 0xf4ec8;
    LP_END = 0xf4ed8;
    uVar6 = uVar2;
    do {
      if (param_2 == *(ushort *)(*(int *)(&DAT_ram_001dce74 + param_1) + iVar4 * 8)) {
        if (iVar4 != -1) {
          return 0xfffffffd;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined2 *)(*(int *)(&DAT_ram_001dce74 + param_1) + uVar2 * 8);
  *(ushort *)(iVar5 + 0xe) = *(ushort *)(iVar5 + 0xe) + 1;
  *puVar1 = (short)param_2;
  iVar4 = *(int *)(iVar5 + 8);
  puVar1[1] = (short)param_3;
  *(int *)(puVar1 + 2) = iVar4;
  piVar3 = *(int **)(&DAT_ram_001dce7c + param_1);
  *(int *)(iVar5 + 8) = iVar4 + param_3;
  FUN_ram_000eea80(*(int *)(puVar1 + 2) + *piVar3,0);
  return 0;
}


