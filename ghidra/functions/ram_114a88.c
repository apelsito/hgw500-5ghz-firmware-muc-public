/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00114a88 */

int * FUN_ram_00114a88(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  piVar9 = *(int **)(param_1 + 0x39b8);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
    if (*(int **)(param_2 + 4) != (int *)0x0) {
      uVar3 = 0;
      piVar4 = *(int **)(param_2 + 4);
      uVar5 = 0;
      piVar10 = (int *)0x0;
      do {
        while( true ) {
          piVar9 = piVar4;
          uVar8 = *(uint *)(piVar9[6] + 4);
          uVar1 = DAT_ram_80038ee0 - uVar8;
          uVar8 = (DAT_ram_80038ee4 - *(int *)(piVar9[6] + 8)) - (uint)(DAT_ram_80038ee0 < uVar8);
          bVar11 = uVar3 < uVar8;
          if (uVar3 == uVar8) {
            bVar11 = uVar5 < uVar1;
          }
          if (bVar11) break;
          piVar2 = piVar9 + 2;
          piVar4 = (int *)*piVar2;
          piVar9 = piVar10;
          if ((int *)*piVar2 == (int *)0x0) goto LAB_ram_00114b04;
        }
        uVar3 = uVar8;
        piVar4 = (int *)piVar9[2];
        uVar5 = uVar1;
        piVar10 = piVar9;
      } while ((int *)piVar9[2] != (int *)0x0);
    }
LAB_ram_00114b04:
    piVar4 = (int *)piVar9[5];
    iVar6 = 0;
    if (piVar9[4] != 0) {
      *(int **)(piVar9[4] + 0x14) = piVar4;
      iVar6 = piVar9[4];
    }
    *piVar4 = iVar6;
  }
  else {
    if (*piVar9 == 0) {
      *(int *)(param_1 + 0x39bc) = piVar9[1];
    }
    else {
      *(int *)(*piVar9 + 4) = piVar9[1];
    }
    *(int *)piVar9[1] = *piVar9;
    piVar9[2] = 0;
    puVar7 = *(undefined4 **)(param_2 + 8);
    piVar9[3] = (int)puVar7;
    *puVar7 = piVar9;
    *(int **)(param_2 + 8) = piVar9 + 2;
  }
  FUN_ram_0039fe00(piVar9[6] + 0xc,param_3,6);
  param_2 = param_2 + param_4 * 4;
  iVar6 = *(int *)(param_2 + 0xc);
  piVar9[4] = iVar6;
  if (iVar6 != 0) {
    *(int **)(iVar6 + 0x14) = piVar9 + 4;
  }
  *(int **)(param_2 + 0xc) = piVar9;
  piVar9[5] = param_2 + 0xc;
  return piVar9;
}


