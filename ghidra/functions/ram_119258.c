/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119258 */

int FUN_ram_00119258(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14 + (*(byte *)((int)param_2 + 5) & 0x1f) * 4);
joined_r0x0011926c:
  do {
    if (iVar3 == 0) {
      return 0;
    }
    if ((iVar3 + 0x96U & 1) == 0 && ((uint)param_2 & 1) == 0) {
      if ((param_2[2] == *(short *)(iVar3 + 0x9a)) && (param_2[1] == *(short *)(iVar3 + 0x98))) {
        if (*param_2 != *(short *)(iVar3 + 0x96)) {
          iVar3 = *(int *)(iVar3 + 0x124);
          goto joined_r0x0011926c;
        }
LAB_ram_001192d0:
        if ((*(byte *)(iVar3 + 0x458) & 7) == 0) {
          return iVar3;
        }
      }
    }
    else {
      uVar1 = FUN_ram_000eeb74(iVar3 + 0x96U,param_2,6);
      iVar2 = 1 - uVar1;
      if (1 < uVar1) {
        iVar2 = 0;
      }
      if (iVar2 != 0) goto LAB_ram_001192d0;
    }
    iVar3 = *(int *)(iVar3 + 0x124);
  } while( true );
}


