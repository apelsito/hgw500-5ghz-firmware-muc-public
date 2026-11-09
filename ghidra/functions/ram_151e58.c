/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00151e58 */

void FUN_ram_00151e58(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6
                     ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < param_3) {
    iVar2 = param_2 * 2;
  }
  else {
    iVar2 = param_3 * 2;
    iVar1 = param_2;
    if (param_3 < param_2) goto LAB_ram_00151ea4;
  }
  iVar1 = param_3;
LAB_ram_00151ea4:
  FUN_ram_000ee260(s_qtn_pwr_chain_ctrl__s___d__>__d_ram_001c6fe8,param_7,param_2,param_3);
  if (param_3 < param_2) {
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c0)(0);
      return;
    }
    param_5 = param_5 + iVar2 * 4;
    param_6 = param_6 + iVar2 * 4;
  }
  else {
    if (param_3 <= param_2) {
      return;
    }
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017c0)(1);
      return;
    }
    param_6 = param_5 + iVar2 * 4;
    param_5 = 0;
  }
  FUN_ram_001713c4(iVar2 * 0xc + param_4,iVar1 * 2 - iVar2 & 0xffff,param_5,param_6);
  return;
}


