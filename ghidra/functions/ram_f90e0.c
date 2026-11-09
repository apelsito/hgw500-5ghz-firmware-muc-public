/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f90e0 */

undefined4 FUN_ram_000f90e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = FUN_ram_000ee73c(0x38e0,0);
  if (iVar1 == 0) {
    FUN_ram_000ee260(s__s__ENOMEM__req___d_bytes__ram_001bed3c,s_hal_txstatus_allocate_ram_001a5d74,
                     0x38e0);
    uVar2 = 0xc;
  }
  else {
    FUN_ram_000eea80(iVar1,0,0x38e0);
    piVar6 = (int *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(int **)(param_1 + 0x100) = piVar6;
    iVar7 = 0x104;
    iVar5 = 0;
    LP_START = 0xf9150;
    LP_END = 0xf916c;
    iVar4 = iVar1;
    do {
      *piVar6 = iVar4;
      iVar4 = iVar4 + 0x38;
      iVar3 = iVar5 * 0x38 + iVar1;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      piVar6 = (int *)(iVar3 + 0x34);
      *(int **)(param_1 + 0x100) = piVar6;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(int *)(param_1 + 0x104) = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


