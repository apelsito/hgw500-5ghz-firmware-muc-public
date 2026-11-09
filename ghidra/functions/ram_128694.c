/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128694 */

void FUN_ram_00128694(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar6 = *(undefined4 *)(param_1 + 0x3b20);
  if (*(char *)(param_1 + 0x4018) != '\0') {
    uVar7 = 0;
    *(undefined1 *)(param_1 + 0x4018) = 0;
    cVar1 = DAT_ram_8002c94c;
    iVar5 = 4;
    do {
      uVar4 = uVar7;
      if (cVar1 == '\0') goto LAB_ram_00128704;
      for (uVar4 = uVar7 * 2; (int)uVar4 < 8; uVar4 = uVar4 + 4) {
LAB_ram_00128704:
        while( true ) {
          if ((((uVar4 < 8) && (iVar3 = *(int *)(param_1 + 0x3f94 + uVar4 * 4), iVar3 != 0)) &&
              (piVar2 = *(int **)(iVar3 + 0x84), piVar2 != (int *)0x0)) && (*piVar2 != 0))
          goto LAB_ram_00128778;
          if (cVar1 == '\0') break;
          if ((uVar4 & 1) == 0) {
            uVar4 = uVar4 + 1;
          }
          else {
            uVar4 = uVar4 + 7;
          }
          if (7 < (int)uVar4) goto LAB_ram_0012874c;
        }
      }
LAB_ram_0012874c:
      iVar3 = FUN_ram_001030e8(*(undefined4 *)(param_1 + 0x3b20),uVar7,1);
      if (iVar3 == 0) {
        FUN_ram_00103428(uVar6,uVar7);
      }
      else {
        *(undefined1 *)(param_1 + 0x4018) = 1;
      }
LAB_ram_00128778:
      iVar5 = iVar5 + -1;
      uVar7 = uVar7 + 1;
    } while (iVar5 != 0);
  }
  return;
}


