/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00151d10 */

void FUN_ram_00151d10(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  *(undefined4 **)(param_1 + 18000) = &DAT_ram_00192d8c;
  DAT_ram_80037284 = param_2;
  DAT_ram_80037288 = param_3;
  uVar2 = param_3;
  if (99 < param_3) {
    uVar2 = 99;
  }
  if (param_2 == 0) {
    uVar3 = (uVar2 * 1000) / 100;
    uVar2 = 1000 - uVar3;
    iVar5 = uVar3 * 500000;
    if (0x7ffffffe < uVar2) {
LAB_ram_00151db0:
      piVar4 = *(int **)(param_1 + 18000);
      uVar2 = 0x7ffffffe;
      if (((*piVar4 != 0) && (iVar5 == piVar4[3])) && (piVar4[4] == 0x7ffffffe)) {
        return;
      }
      goto LAB_ram_00151df4;
    }
    piVar4 = *(int **)(param_1 + 18000);
    if ((*piVar4 == 0) || (iVar5 != piVar4[3])) goto LAB_ram_00151df4;
  }
  else {
    uVar3 = (uVar2 * param_2) / 100;
    uVar2 = param_2 - uVar3;
    iVar5 = uVar3 * 500000;
    if (0x7ffffffe < uVar2) goto LAB_ram_00151db0;
    piVar4 = *(int **)(param_1 + 18000);
    if ((*piVar4 == 0) || (iVar5 != piVar4[3])) goto LAB_ram_00151df4;
  }
  if (uVar2 == piVar4[4]) {
    return;
  }
LAB_ram_00151df4:
  *piVar4 = 1;
  piVar4[3] = iVar5;
  piVar4[4] = uVar2;
  if (piVar4[2] != 0) {
    FUN_ram_000f7da0();
    return;
  }
  uVar1 = FUN_ram_000f7c10(uVar2,param_1,0,&LAB_ram_001552e4,3);
  *(undefined4 *)(*(int *)(param_1 + 18000) + 8) = uVar1;
  return;
}


