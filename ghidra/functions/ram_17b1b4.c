/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017b1b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0017b1b4(uint param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_ram_0018c3b8 == '\x02') {
    FUN_ram_000ee260(s_write_pd_reg_chain_for_chain__d__ram_001ca1e0,param_1,param_2);
  }
  if (param_1 < 4) {
    uVar1 = (uint)*(ushort *)(&DAT_ram_0019b3e4 + param_2 * 2);
    switch(param_1) {
    case 0:
      _DAT_ram_e6090560 = uVar1;
      return;
    case 1:
      _DAT_ram_e6090564 = uVar1;
      return;
    case 2:
      _DAT_ram_e6090568 = uVar1;
      return;
    case 3:
      _DAT_ram_e609056c = uVar1;
      return;
    }
  }
  return;
}


