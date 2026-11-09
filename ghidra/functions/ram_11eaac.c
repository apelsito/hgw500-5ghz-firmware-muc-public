/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011eaac */

void FUN_ram_0011eaac(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x5aac) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x5aac) = 0x59c;
    break;
  default:
    pcVar1 = s_MU_AMSDU_size__d__is_not_in_supp_ram_001c2f14;
    goto LAB_ram_0011eb68;
  case 4:
    *(undefined4 *)(param_1 + 0x5aac) = 0xef7;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x5aac) = 0x1ef7;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x5aac) = 0x2c7e;
  }
  param_2 = *(undefined4 *)(param_1 + 0x5aac);
  pcVar1 = s_Set_MU_AMSDU_size___d_ram_001c2f58;
LAB_ram_0011eb68:
  FUN_ram_000ee260(pcVar1,param_2);
  return;
}


