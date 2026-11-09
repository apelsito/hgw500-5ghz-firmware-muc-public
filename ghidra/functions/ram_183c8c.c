/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183c8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00183c8c(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_e6000024;
  DAT_ram_0018c40c = DAT_ram_0018c40c + 1;
  if (_DAT_ram_e6000024 != 2) {
    _DAT_ram_e6000024 = 2;
    FUN_ram_000e4fa0(10);
  }
  return iVar1;
}


