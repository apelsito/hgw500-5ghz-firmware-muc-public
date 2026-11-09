/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001519fc */

void FUN_ram_001519fc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 18000) != 0)) {
    FUN_ram_000ee260(s_pduty_stop_ram_001c6fc4);
    puVar1 = *(undefined4 **)(param_1 + 18000);
    *puVar1 = 0;
    FUN_ram_000f7d60(puVar1[2]);
    iVar2 = *(int *)(param_1 + 18000);
    *(undefined4 *)(param_1 + 18000) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  DAT_ram_8002c9c8 = 0;
  return;
}


