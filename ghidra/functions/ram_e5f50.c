/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e5f50 */

void FUN_ram_000e5f50(int param_1)

{
  int iVar1;
  
  if ((DAT_ram_800261c0 & 2) == 0) {
    DAT_ram_800261e0 = 0xc;
    DAT_ram_800261e4 = 0;
    iVar1 = *(int *)(param_1 + 0xe0);
  }
  else {
    DAT_ram_800261e0 = 0xe;
    DAT_ram_800261e4 = 0xfffffffb;
    iVar1 = *(int *)(param_1 + 0xe0);
  }
  if (iVar1 == 0x7e) {
    *(undefined4 *)(param_1 + 0xe0) = DAT_ram_800261e4;
    iVar1 = *(int *)(param_1 + 0xdc);
  }
  else {
    DAT_ram_800261e4 = *(undefined4 *)(param_1 + 0xe0);
    iVar1 = *(int *)(param_1 + 0xdc);
  }
  if (iVar1 != 0x7e) {
    DAT_ram_800261e0 = *(undefined4 *)(param_1 + 0xdc);
    return;
  }
  *(undefined4 *)(param_1 + 0xdc) = DAT_ram_800261e0;
  return;
}


