/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d660 */

undefined4 FUN_ram_0013d660(int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    FUN_ram_000eea80(param_2,0,0x10);
    iVar4 = *(int *)(param_1 + 0x4cc);
    iVar3 = 0;
    while( true ) {
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x4c0);
        *(int *)(param_1 + 0x4cc + iVar3 * 4) = param_2;
        if ((iVar4 != 0) && (pcVar2 = *(code **)(iVar4 + 0x1c), pcVar2 != (code *)0x0)) {
          uVar1 = (*pcVar2)(param_1,param_2);
          return uVar1;
        }
        return 0;
      }
      iVar3 = iVar3 + 1;
      if (4 < iVar3) break;
      iVar4 = *(int *)(param_1 + 0x4cc + iVar3 * 4);
    }
    FUN_ram_000ee260(s_qtn_rate_collect_stats__No_avail_ram_001c4d20);
  }
  return 0xffffffff;
}


