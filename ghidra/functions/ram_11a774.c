/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011a774 */

void FUN_ram_0011a774(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_000eea80(param_1 + 0x40f4,0,0x74);
  }
  else {
    FUN_ram_000ee260(s_DFS_s_radio_counts__ram_001c25c0);
    FUN_ram_000ee260(s_sdfs_pending___u_ram_001c25d8,*(undefined4 *)(param_1 + 0x40f4));
    FUN_ram_000ee260(s_fat_insufficient___u_ram_001c25f4,*(undefined4 *)(param_1 + 0x40fc));
    FUN_ram_000ee260(s_trfc_exceed___u_ram_001c2610,*(undefined4 *)(param_1 + 0x4100));
    FUN_ram_000ee260(s_fat_decreasing___u_ram_001c262c,*(undefined4 *)(param_1 + 0x4104));
    FUN_ram_000ee260(s_chan_switch___u_ram_001c2648,*(undefined4 *)(param_1 + 0x4108));
    FUN_ram_000ee260(s_curchan_dfs___u_ram_001c2664,*(undefined4 *)(param_1 + 0x40f8));
    FUN_ram_000ee260(s_power_save___u_ram_001c2680,*(undefined4 *)(param_1 + 0x410c));
    FUN_ram_000ee260(s_beacon_csa___u_ram_001c269c,*(undefined4 *)(param_1 + 0x4110));
    FUN_ram_000ee260(s_schedule_twice___u_ram_001c26b8,*(undefined4 *)(param_1 + 0x4114));
    FUN_ram_000ee260(s_schedule_skip___u_ram_001c26d4,*(undefined4 *)(param_1 + 0x4118));
    FUN_ram_000ee260(s_offset_overflow___u_ram_001c26f0,*(undefined4 *)(param_1 + 0x411c));
    FUN_ram_000ee260(s_schedule_failed___u_ram_001c270c,*(undefined4 *)(param_1 + 0x4120));
    FUN_ram_000ee260(s_other_action___u_ram_001c2728,*(undefined4 *)(param_1 + 0x4124));
    FUN_ram_000ee260(s_beacon_conflict_1___u_ram_001c2744,*(undefined4 *)(param_1 + 0x4128));
    FUN_ram_000ee260(s_beacon_conflict_2___u_ram_001c2760,*(undefined4 *)(param_1 + 0x412c));
    FUN_ram_000ee260(s_change_chan_err___u_ram_001c277c,*(undefined4 *)(param_1 + 0x4130));
    FUN_ram_000ee260(s_no_qosnull___u_ram_001c2798,*(undefined4 *)(param_1 + 0x4134));
    FUN_ram_000ee260(s_update_qosnull___u_ram_001c27b4,*(undefined4 *)(param_1 + 0x4138));
    FUN_ram_000ee260(s_return_qosnull___u_ram_001c27d0,*(undefined4 *)(param_1 + 0x413c));
    FUN_ram_000ee260(s_nav_overflow___u_ram_001c27ec,*(undefined4 *)(param_1 + 0x4140));
    FUN_ram_000ee260(s_send_frm_fail___u_ram_001c2808,*(undefined4 *)(param_1 + 0x4144));
    FUN_ram_000ee260(s_send_qosnull_succ___u_ram_001c2824,*(undefined4 *)(param_1 + 0x4148));
    FUN_ram_000ee260(s_send_qosnull_fail___u_ram_001c2840,*(undefined4 *)(param_1 + 0x414c));
    FUN_ram_000ee260(s_stage1_started___u_ram_001c285c,*(undefined4 *)(param_1 + 0x4150));
    FUN_ram_000ee260(s_stage1_finished___u_ram_001c2878,*(undefined4 *)(param_1 + 0x4154));
    FUN_ram_000ee260(s_stage2_started___u_ram_001c2894,*(undefined4 *)(param_1 + 0x4158));
    FUN_ram_000ee260(s_stage2_finished___u_ram_001c28b0,*(undefined4 *)(param_1 + 0x415c));
    FUN_ram_000ee260(s_goto_offchan___u_ram_001c28cc,*(undefined4 *)(param_1 + 0x4160));
    FUN_ram_000ee260(s_goto_datachan___u_ram_001c28e8,*(undefined4 *)(param_1 + 0x4164));
  }
  return;
}


