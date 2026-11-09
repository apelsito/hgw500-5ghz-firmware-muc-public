/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015b5e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0015b5e0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_0015b568(DAT_ram_8002c9dc,DAT_ram_8002c9e0 + param_2);
  DAT_ram_8002c9e8 = uVar1;
  if (uVar1 <= DAT_ram_8002c928) {
    DAT_ram_8002ca64 = 0;
    DAT_ram_8002c9e0 = DAT_ram_8002c9e0 + param_2;
    DAT_ram_8002c9e4 = uVar1;
    _DAT_ram_e6090268 = uVar1;
    iVar2 = FUN_ram_000e5c34();
    *(undefined4 *)(iVar2 + 0x168) = 1;
    if ((DAT_ram_8002c91c & 2) != 0) {
      FUN_ram_000ee260(s_AutoCCA__cca_th__change_to_0x_08_ram_001c7a4c,uVar1,DAT_ram_8002c9dc);
    }
  }
  return;
}


