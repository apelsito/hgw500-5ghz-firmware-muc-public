/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e848c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e848c(void)

{
  undefined4 uVar1;
  
  uVar1 = AUX_IENABLE;
  FUN_ram_000ee260(s_ERR_ruby_timer_stop__muc_int_en__ram_001bc954,_DAT_ram_e0000050,
                   _DAT_ram_e000005c,_DAT_ram_f300003c,_DAT_ram_f3000040,_DAT_ram_f3000044,
                   _DAT_ram_f300004c,uVar1);
  _DAT_ram_f300003c = 0x7a12;
  _DAT_ram_f3000044 = 2;
  FUN_ram_000e83ec(0x1a,0,0,0,0,0);
  _DAT_ram_e000005c = _DAT_ram_e000005c | 0x200000;
  _DAT_ram_f3000044 = _DAT_ram_f3000044 | 1;
  return;
}


