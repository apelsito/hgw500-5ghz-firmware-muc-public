/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb688 */

void FUN_ram_000fb688(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3020) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3024) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3038) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x103020) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x103024) = 0;
  }
  FUN_ram_000fb058(param_1,1,0,param_2,param_3);
  return;
}


