/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00134040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00134040(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0x1a648c;
  iVar2 = 8;
  puVar3 = (undefined4 *)(param_1 + 0x17c);
  do {
    FUN_ram_00171308(*(undefined4 *)(iVar4 + 0xc4),*puVar3);
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 4;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  iVar2 = 0x31;
  iVar4 = 0x1a648c;
  puVar3 = (undefined4 *)(param_1 + 0xb8);
  do {
    puVar1 = *(undefined4 **)(iVar4 + 0xc4);
    iVar4 = iVar4 + 4;
    if ((puVar1 != (undefined4 *)0x0) &&
       (*puVar1 = *puVar3, puVar1 == (undefined4 *)&DAT_ram_e600016c)) {
      if (_DAT_ram_e600016c != 2) {
        FUN_ram_000ee260(s_Global_register_setting_error__r_ram_001c43f4);
      }
      _DAT_ram_e600016c = 2;
    }
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  return;
}


