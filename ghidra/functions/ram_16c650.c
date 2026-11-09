/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016c650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0016c650(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  DAT_ram_00193bd8 = 0x88;
  DAT_ram_00193bd9 = 1;
  iVar2 = 0;
  DAT_ram_00193bda = 0;
  DAT_ram_00193bdb = 0;
  DAT_ram_00193bdc = (undefined1)param_1;
  DAT_ram_00193bdd = (undefined1)((uint)param_1 >> 8);
  DAT_ram_00193bde = (undefined1)((uint)param_1 >> 0x10);
  DAT_ram_00193be0 = (undefined1)param_2;
  DAT_ram_00193bdf = (undefined1)((uint)param_1 >> 0x18);
  DAT_ram_00193be1 = (undefined1)((uint)param_2 >> 8);
  local_20 = _DAT_ram_e5053004;
  FUN_ram_0039fe00(&DAT_ram_00193be2,&local_20,4);
  local_20 = _DAT_ram_e5053008;
  FUN_ram_0039fe00(&DAT_ram_00193be6,&local_20,2);
  FUN_ram_0039fe00(&DAT_ram_00193be8,&DAT_ram_00193bdc,6);
  FUN_ram_0039fe00(&DAT_ram_00193bf0,&DAT_ram_0018c32c,2);
  iVar1 = 0x77;
  do {
    local_1c = 0xfffffffd;
    FUN_ram_0039fe00(&DAT_ram_00193bf4 + iVar2,&local_1c,4);
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 4;
  } while (iVar1 != 0);
  return 1;
}


