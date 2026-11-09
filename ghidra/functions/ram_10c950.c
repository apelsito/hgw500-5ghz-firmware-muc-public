/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010c950 */

void FUN_ram_0010c950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = param_1 + 0x3dbc;
  param_1 = param_1 + 0x3e9c;
  iVar2 = 4;
  do {
    FUN_ram_000e7d50(iVar3 + 4);
    FUN_ram_000ee260(s_wmac0_txq__d_reserved__d_size__d_ram_001c0a2c,iVar1,
                     *(undefined1 *)(iVar3 + 0x1d),*(undefined1 *)(iVar3 + 0x1c));
    FUN_ram_000e7da8(iVar3 + 4);
    FUN_ram_000e7d50(param_1 + 4);
    FUN_ram_000ee260(s_wmac1_txq__d_reserved__d_size__d_ram_001c0a50,iVar1,
                     *(undefined1 *)(param_1 + 0x1d),*(undefined1 *)(param_1 + 0x1c));
    FUN_ram_000e7da8(param_1 + 4);
    iVar3 = iVar3 + 0x38;
    param_1 = param_1 + 0x38;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 1;
  } while (iVar2 != 0);
  return;
}


