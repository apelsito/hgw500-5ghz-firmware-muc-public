/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00163f48 */

void FUN_ram_00163f48(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    if (DAT_ram_0020fe20 == '\0') {
      return;
    }
    if (DAT_ram_0020fe34 != 0) {
      FUN_ram_000f7d60();
      DAT_ram_0020fe34 = 0;
    }
    FUN_ram_00163ed8();
    pcVar1 = s_auto_cs_is_disabled_ram_001c83c0;
    DAT_ram_0020fe20 = '\0';
  }
  else {
    if (DAT_ram_0020fe20 != '\0') {
      return;
    }
    if (DAT_ram_0020fe34 == 0) {
      DAT_ram_0020fe34 = FUN_ram_000f7c10(1000,param_1,0,&LAB_ram_00164430,3);
      DAT_ram_0020fe20 = '\x01';
      FUN_ram_00163ed8();
      pcVar1 = s_auto_cs_is_enabled_ram_001c840c;
    }
    else {
      pcVar1 = s_Starting_AutoCS_but_acs_timer_ha_ram_001c83d8;
    }
  }
  FUN_ram_000ee260(pcVar1);
  return;
}


