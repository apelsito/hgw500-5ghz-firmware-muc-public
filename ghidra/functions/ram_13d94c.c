/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d94c */

undefined4 FUN_ram_0013d94c(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if ((*(int *)(param_1 + 0x4c0) == 0) ||
     (pcVar2 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x28), pcVar2 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x4c8) == 0) {
      FUN_ram_000ee260(s_rate_ctrl_state_is_NULL_in__s_fu_ram_001c4cac,
                       s_qtn_rate_get_best_rate_gput_ram_001c4d78,param_1);
      FUN_ram_000ee260(s_qn_flags_0x_x_addr__p_ram_001c4ce0,*(undefined1 *)(param_1 + 0x458),
                       param_1 + 0x458);
      FUN_ram_000eeca8(s_QTN_node_dump__ram_001c4cf8,param_1,0xd84);
      FUN_ram_80030314();
      pcVar2 = *(code **)(*(int *)(param_1 + 0x4c0) + 0x28);
    }
    uVar1 = (*pcVar2)(param_1);
  }
  return uVar1;
}


