/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012dbc8 */

undefined4 FUN_ram_0012dbc8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == -1) {
    return 0;
  }
  iVar2 = param_2 * 0x38 + param_1 + 0x3dbc;
  if (param_3 == 0) {
    FUN_ram_000e7d50(iVar2 + 4);
    if (*(byte *)(iVar2 + 0x1d) < *(byte *)(iVar2 + 0x1c)) {
      *(byte *)(iVar2 + 0x1d) = *(byte *)(iVar2 + 0x1d) + 1;
      DAT_ram_80037800 = DAT_ram_80037800 + 1;
      FUN_ram_000e7da8(iVar2 + 4);
      return 1;
    }
  }
  else {
    FUN_ram_000e7d50(iVar2 + 4);
    uVar1 = *(byte *)(iVar2 + 0x1d) + 2;
    if (uVar1 < *(byte *)(iVar2 + 0x1c)) {
      *(char *)(iVar2 + 0x1d) = (char)uVar1;
      uVar3 = 1;
      DAT_ram_80037800 = DAT_ram_80037800 + 2;
      goto LAB_ram_0012dc30;
    }
  }
  DAT_ram_80037804 = DAT_ram_80037804 + 1;
  uVar3 = 0;
LAB_ram_0012dc30:
  FUN_ram_000e7da8(iVar2 + 4);
  return uVar3;
}


