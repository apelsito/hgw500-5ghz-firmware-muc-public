/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0018a860(int param_1)

{
  bool bVar1;
  
  _DAT_ram_e6090268 = 0x2000;
  _DAT_ram_e6090528 = 0xc0;
  bVar1 = param_1 == 0;
  if (bVar1) {
    _DAT_ram_e609043c = &DAT_ram_00389680;
  }
  else {
    _DAT_ram_e609043c = (undefined *)0x8000;
  }
  _DAT_ram_e60905d8 = 0xc0;
  _DAT_ram_e6090578 = 0x8000;
  _DAT_ram_e6090570 = (uint)bVar1;
  DAT_ram_0018c428 = (uint)!bVar1;
  FUN_ram_0015b2a4(1,s_Reset_auto_CCA_for_SCS_ram_001cb074);
  return;
}


