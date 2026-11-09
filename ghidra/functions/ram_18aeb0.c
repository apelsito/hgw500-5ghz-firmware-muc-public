/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018aeb0 */

void FUN_ram_0018aeb0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (0 < (int)param_1) {
    iVar1 = param_1 - 0x3f;
    bVar5 = SBORROW4(param_1,0x3f);
    if ((int)param_1 < 0x3f) {
      iVar1 = param_2 + -4;
      bVar5 = SBORROW4(param_2,4);
    }
    if (bVar5 != iVar1 < 0) {
      iVar1 = (param_1 & 0xf) * 2;
      uVar2 = *(uint *)(&DAT_ram_e600028c + ((int)param_1 >> 4 & 0xffU) * 4) & ~(3 << iVar1);
      uVar3 = *(uint *)(&DAT_ram_e6000284 + ((int)param_1 >> 5 & 0xffU) * 4);
      uVar4 = 1 << (param_1 & 0x1f);
      if (param_3 == 0) {
        uVar3 = uVar3 | uVar4;
        uVar2 = uVar2 | param_2 << iVar1;
      }
      else {
        uVar3 = uVar3 & ~uVar4;
      }
      *(uint *)(&DAT_ram_e600028c + ((int)param_1 >> 4 & 0xffU) * 4) = uVar2;
      *(uint *)(&DAT_ram_e6000284 + ((int)param_1 >> 5 & 0xffU) * 4) = uVar3;
      return;
    }
  }
  FUN_ram_000ee260(s_bb_set_mu_grp_pos_tbl__invalid_m_ram_001cb12c,param_1,param_2);
  return;
}


