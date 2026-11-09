/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128cfc */

void FUN_ram_00128cfc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_ram_000ee734(0x28,0);
  if (iVar2 == 0) {
    FUN_ram_000ee260(s_Error__no_DDR_heap_for_qtn_beaco_ram_001c3ec8);
    return;
  }
  *(int *)(param_1 + 0x84) = iVar2;
  FUN_ram_000eea80(iVar2,0,0x28);
  iVar3 = FUN_ram_000ee734(0x300,0);
  *(int *)(iVar2 + 0x24) = iVar3;
  if (iVar3 == 0) {
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_ram_000ee260(s_Error__no_DDR_heap_for_qtn_beaco_ram_001c3ef4);
    return;
  }
  FUN_ram_000eea80(iVar3,0,0x300);
  iVar3 = *(int *)(iVar2 + 0x24);
  piVar5 = (int *)(iVar2 + 0x1c);
  iVar7 = 0x40;
  iVar4 = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int **)(iVar2 + 0x20) = piVar5;
  LP_START = 0x128db4;
  LP_END = 0x128dd8;
  do {
    iVar6 = iVar3 + 8;
    iVar1 = iVar4 * 0xc;
    iVar4 = iVar4 + 1;
    *piVar5 = iVar3 + iVar1;
    iVar3 = *(int *)(iVar2 + 0x24);
    *(undefined4 *)(iVar6 + iVar1) = 0;
    piVar5 = (int *)(iVar3 + 8 + iVar1);
    *(int **)(iVar2 + 0x20) = piVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar3 = FUN_ram_000ee4c8(0x300,0,5);
  *(int *)(iVar2 + 0x10) = iVar3;
  if (iVar3 == 0) {
    FUN_ram_000ee260(s_Error__no_DDR_heap_for_qtn_beaco_ram_001c3f28);
    FUN_ram_00128c84(param_1);
    return;
  }
  return;
}


