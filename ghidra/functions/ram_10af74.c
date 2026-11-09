/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010af74 */

undefined4 FUN_ram_0010af74(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  if (DAT_ram_8002c8bc == '\x03') {
    iVar8 = param_2 + 0x7fc;
    iVar6 = 4;
    do {
      iVar7 = *(int *)(iVar8 + -0x370);
      while (iVar1 = iVar7, iVar1 != 0) {
        iVar7 = *(int *)(iVar1 + 0xec);
        if (*(int *)(param_2 + 0x518) != iVar1) {
          if (*(int *)(iVar1 + 0x18) == 0) {
            for (piVar10 = *(int **)(iVar1 + 0x1c); piVar10 != (int *)0x0;
                piVar10 = (int *)piVar10[10]) {
              piVar4 = (int *)*piVar10;
              piVar5 = piVar4;
              if (piVar4 != (int *)0x0) {
                while( true ) {
                  piVar9 = (int *)piVar4[7];
                  if (piVar4 == piVar5) {
                    iVar3 = piVar5[7];
                    *piVar10 = iVar3;
                    if (iVar3 == 0) {
                      piVar10[1] = (int)piVar10;
                    }
                  }
                  else {
                    piVar2 = (int *)piVar5[7];
                    if (piVar4 == piVar2) {
                      iVar3 = piVar2[7];
                      piVar5[7] = iVar3;
                    }
                    else {
                      do {
                        piVar5 = piVar2;
                        piVar2 = (int *)piVar5[7];
                      } while (piVar4 != piVar2);
                      iVar3 = piVar2[7];
                      piVar5[7] = iVar3;
                    }
                    if (iVar3 == 0) {
                      piVar10[1] = (int)(piVar5 + 7);
                    }
                  }
                  if (*piVar4 != 0) {
                    FUN_ram_000e7c74();
                  }
                  if (piVar9 == (int *)0x0) break;
                  piVar4 = piVar9;
                  piVar5 = (int *)*piVar10;
                }
              }
            }
          }
          else {
            FUN_ram_000e7c74();
          }
          FUN_ram_00109920(param_1,iVar1);
          DAT_ram_80037864 = DAT_ram_80037864 + 1;
        }
      }
      *(undefined4 *)(iVar8 + -0x370) = 0;
      *(int *)(iVar8 + -0x36c) = iVar8 + -0x370;
      iVar6 = iVar6 + -1;
      iVar8 = iVar8 + 8;
    } while (iVar6 != 0);
    iVar8 = param_2 + 0x7e0;
    iVar6 = 0x10;
    do {
      FUN_ram_001148f0(param_1,iVar8,0);
      if (*(int *)(iVar8 + 8) != 0) {
        FUN_ram_001147b0(param_1,iVar8,1);
        FUN_ram_000ee834(*(undefined4 *)(iVar8 + 8));
        *(undefined4 *)(iVar8 + 8) = 0;
      }
      iVar6 = iVar6 + -1;
      iVar8 = iVar8 + 0x4c;
    } while (iVar6 != 0);
    FUN_ram_000ee834(*(undefined4 *)(param_2 + 0x4c8));
    *(undefined4 *)(param_2 + 0x4c8) = 0;
  }
  return 0;
}


