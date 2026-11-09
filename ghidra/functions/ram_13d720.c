/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d720 */

void FUN_ram_0013d720(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x4cc);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x4c0) == 0) {
        return;
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x20);
    }
    else {
      iVar1 = 0;
      bVar3 = false;
      iVar4 = param_1 + 0x7fc;
      do {
        if (bVar3) {
          *(int *)(iVar4 + -0x334) = iVar5;
LAB_ram_0013d75c:
          *(undefined4 *)(iVar4 + -0x330) = 0;
          if (4 < iVar1 + 1) {
            if (*(int *)(param_1 + 0x4c0) == 0) {
              return;
            }
            pcVar2 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x20);
            goto joined_r0x0013d7c8;
          }
        }
        else {
          if (param_2 == iVar5) {
            bVar3 = true;
            goto LAB_ram_0013d75c;
          }
          if (4 < iVar1 + 1) {
            if (*(int *)(param_1 + 0x4c0) == 0) {
              return;
            }
            pcVar2 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x20);
            goto joined_r0x0013d7c8;
          }
        }
        iVar1 = iVar1 + 1;
        iVar4 = param_1 + 0x7fc + iVar1 * 4;
        iVar5 = *(int *)(iVar4 + -0x330);
      } while (iVar5 != 0);
      if (*(int *)(param_1 + 0x4c0) == 0) {
        return;
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x20);
    }
joined_r0x0013d7c8:
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}


