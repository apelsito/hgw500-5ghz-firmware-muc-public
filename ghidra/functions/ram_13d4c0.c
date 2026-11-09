/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d4c0 */

void FUN_ram_0013d4c0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if ((param_1[0x130] != 0) && (pcVar1 = *(code **)(param_1[0x130] + 0xc), pcVar1 != (code *)0x0)) {
    if (*(char *)(*param_1 + 0x40) == '\0') {
      if (param_1[0x132] == 0) {
        FUN_ram_000ee260(s_rate_ctrl_state_is_NULL_in__s_fu_ram_001c4cac,
                         s_qtn_rate_update_rx_act_ram_001c4d08,param_1);
        FUN_ram_000ee260(s_qn_flags_0x_x_addr__p_ram_001c4ce0,(char)param_1[0x116],param_1 + 0x116);
        FUN_ram_000eeca8(s_QTN_node_dump__ram_001c4cf8,param_1,0xd84);
        FUN_ram_80030314();
        pcVar1 = *(code **)(param_1[0x130] + 0xc);
      }
      (*pcVar1)(param_1,param_2);
    }
  }
  return;
}


