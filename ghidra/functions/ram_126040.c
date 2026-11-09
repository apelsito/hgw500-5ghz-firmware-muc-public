/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00126040 */

void FUN_ram_00126040(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 8;
  do {
    if ((param_2 + 1 < iVar4) || ((0 < param_2 && (iVar4 < param_2 + -1)))) {
      iVar2 = param_1 + 0x7fc + iVar4 * 4;
      iVar1 = *(int *)(iVar2 + -0xb4);
      if (iVar1 != 0) {
        if (2 < DAT_ram_8002c229) {
          FUN_ram_000ee260(s_PPPC____pM__gput_clear_idx__d_gp_ram_001c3924,param_1 + 0x96,iVar4,
                           iVar1,param_2);
        }
        *(undefined4 *)(iVar2 + -0xb4) = 0;
      }
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  return;
}


