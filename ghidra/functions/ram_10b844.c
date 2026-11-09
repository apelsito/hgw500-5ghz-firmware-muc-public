/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010b844 */

void FUN_ram_0010b844(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5b7c) != 0) {
    FUN_ram_800213a0();
    return;
  }
  iVar1 = FUN_ram_000f7c10(0x14,param_1,0,&LAB_ram_0011268c,3);
  *(int *)(param_1 + 0x5b7c) = iVar1;
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_Failed_to_add_timer_to_notify_ne_ram_001c0864);
    return;
  }
  return;
}


