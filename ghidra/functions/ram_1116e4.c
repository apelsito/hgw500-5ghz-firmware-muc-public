/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001116e4 */

void FUN_ram_001116e4(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if (6 < param_2) {
    FUN_ram_000ee260(s_qtn_cmd_memdbg_cfg__invalid_comm_ram_001c1800);
    return;
  }
  if (param_2 != 0) {
    *(undefined2 *)(&DAT_ram_0018d14c + param_2 * 2) = param_3;
    switch(param_2) {
    case 1:
      pcVar2 = s_fd_max_ram_001c1850;
      break;
    case 2:
      pcVar2 = s_node_max_ram_001c1858;
      break;
    case 3:
      pcVar2 = s_hex_max_ram_001c1864;
      break;
    case 4:
      pcVar2 = s_rate_ctl_ram_001c186c;
      break;
    case 5:
      pcVar2 = s_netmsg_ram_001c1878;
      break;
    case 6:
      pcVar2 = s_trace_ram_001c1880;
      break;
    default:
      pcVar2 = s_invalid_ram_001c1888;
    }
    FUN_ram_000ee260(s_qtn_cmd_memdbg_cfg___s_set_to__d_ram_001c1890,pcVar2);
    return;
  }
  FUN_ram_000ee260(s_qtn_cmd_memdbg_status_ram_001c1828);
  iVar4 = 1;
  iVar1 = 6;
  puVar3 = &DAT_ram_0018d14e;
  do {
    switch(iVar4) {
    case 1:
      pcVar2 = s_fd_max_ram_001c1850;
      break;
    case 2:
      pcVar2 = s_node_max_ram_001c1858;
      break;
    case 3:
      pcVar2 = s_hex_max_ram_001c1864;
      break;
    case 4:
      pcVar2 = s_rate_ctl_ram_001c186c;
      break;
    case 5:
      pcVar2 = s_netmsg_ram_001c1878;
      break;
    case 6:
      pcVar2 = s_trace_ram_001c1880;
      break;
    default:
      pcVar2 = s_invalid_ram_001c1888;
    }
    FUN_ram_000ee260(s__d___s__d_ram_001c1840,iVar4,pcVar2,*puVar3);
    iVar1 = iVar1 + -1;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  return;
}


