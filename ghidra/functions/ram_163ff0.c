/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00163ff0 */

void FUN_ram_00163ff0(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (2 < DAT_ram_0020fe0c) {
    FUN_ram_000ee260(s_AutoCS__param___d__value_0x_x_ram_001c8420,uVar2,param_1);
  }
  bVar1 = DAT_ram_0020fe0d;
  switch(uVar2) {
  case 0:
    FUN_ram_000ee260(s_QTN_ACS_state__ram_001c8440);
    FUN_ram_000ee260(s_print_enable___d_ram_001c8454,DAT_ram_0020fe0c);
    FUN_ram_000ee260(s_step_size___d_ram_001c846c,DAT_ram_0020fe0d);
    FUN_ram_000ee260(s_lp_thresh___d_ram_001c8484,DAT_ram_0020fe10);
    FUN_ram_000ee260(s_sp_thresh___d_ram_001c849c,DAT_ram_0020fe14);
    FUN_ram_000ee260(s_rssi_thresh___d_ram_001c84b4,DAT_ram_0020fe18);
    FUN_ram_000ee260(s_cs_thresh_cap___d_ram_001c84cc,DAT_ram_0020fe1c);
    FUN_ram_000ee260(s_curr_state___d_ram_001c84e4,DAT_ram_0020fe20);
    FUN_ram_000ee260(s_dyn_stepsize___d_ram_001c84fc,DAT_ram_0020fe21);
    FUN_ram_000ee260(&DAT_ram_001c8514);
    bVar1 = DAT_ram_0020fe0d;
    break;
  case 1:
    DAT_ram_0020fe0c = (byte)param_1;
    break;
  case 2:
    bVar1 = (byte)param_1;
    if (3 < param_1) {
      FUN_ram_000ee260(s_Unsupport_auto_cs_step_size_ram_001c8518);
      bVar1 = DAT_ram_0020fe0d;
    }
    break;
  case 3:
    DAT_ram_0020fe10 = param_1;
    break;
  case 4:
    DAT_ram_0020fe14 = param_1;
    break;
  case 5:
    DAT_ram_0020fe18 = -param_1;
    break;
  case 6:
    DAT_ram_0020fe1c = param_1;
    break;
  default:
    FUN_ram_000ee260(s_unknown_auto_cs_parameter__d_ram_001c8538,uVar2);
    bVar1 = DAT_ram_0020fe0d;
  }
  DAT_ram_0020fe0d = bVar1;
  return;
}


