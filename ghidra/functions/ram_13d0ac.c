/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d0ac */

void FUN_ram_0013d0ac(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x4c0);
  *(undefined2 *)(param_3 + 8) = 0;
  if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
    FUN_ram_000eea80(param_3,0,0x24);
    if ((*(undefined4 **)(param_1 + 0x4c0) != (undefined4 *)0x0) &&
       (pcVar2 = (code *)**(undefined4 **)(param_1 + 0x4c0), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_3,0,param_4);
    }
    if (((param_4 == 0) || (*(char *)(param_3 + 0x1f) == *(char *)(param_1 + 0x683))) ||
       (DAT_ram_0018c12c != 0)) {
      uVar1 = 4;
    }
    else {
      uVar1 = 1;
    }
    FUN_ram_0013cb9c(param_1,param_2,param_3,uVar1);
  }
  return;
}


