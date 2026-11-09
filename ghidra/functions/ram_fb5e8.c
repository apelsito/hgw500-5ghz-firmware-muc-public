/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb5e8 */

void FUN_ram_000fb5e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_4 != (undefined4 *)0x0) {
    FUN_ram_000fb058(param_1,2,param_3,param_2,0);
    *param_4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3028);
    param_4[1] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x302c);
    param_4[2] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3030);
    param_4[3] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3034);
  }
  return;
}


