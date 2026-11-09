/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010cd00 */

void FUN_ram_0010cd00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x1c);
  if (*(int *)(iVar2 + 0x40b4) != 0) {
    DAT_ram_800378a4 = DAT_ram_800378a4 + 1;
    iVar1 = *param_1;
  }
  FUN_ram_000e82dc(iVar1,0x80);
  *(undefined4 *)(iVar2 + 0x40b4) = 0;
  FUN_ram_00156550(0);
  return;
}


