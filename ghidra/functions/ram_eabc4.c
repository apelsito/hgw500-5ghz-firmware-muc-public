/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eabc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000eabc4(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_1) {
  case 1:
    pcVar1 = s_MuC_exception_ram_001bcf3c;
    param_1 = 1;
    break;
  case 2:
    pcVar1 = s_invalid_hardware_revision_ram_001bcf4c;
    param_1 = 2;
    break;
  case 3:
    pcVar1 = s_bond_opt_value_not_supported_ram_001bcf68;
    param_1 = 3;
    break;
  case 4:
    pcVar1 = s_hardware_option_not_supported_ram_001bcf88;
    param_1 = 4;
    break;
  case 5:
    pcVar1 = s_shared_parameter_not_set_ram_001bcfa8;
    param_1 = 5;
    break;
  case 6:
    pcVar1 = s_software_feature_invalid_ram_001bcfc4;
    param_1 = 6;
    break;
  case 7:
    param_1 = 7;
    pcVar1 = s_software_feature_not_set_ram_001bcfe0;
    break;
  default:
    pcVar1 = s_unknown_ram_001bcf34;
  }
  FUN_ram_000eaac4(0,s_forcing_reboot___reason__d___s___ram_001bcffc,param_1,pcVar1,param_2);
  _DAT_ram_e00000fc = 0x40004000;
  sync();
  _DAT_ram_e0000184 = 0x10001;
  sync();
  return 0x10001;
}


