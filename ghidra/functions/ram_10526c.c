/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010526c */

void FUN_ram_0010526c(int param_1,int param_2)

{
  if (3 < param_2) {
    return;
  }
  if (param_2 < 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3050) =
       *(undefined4 *)(&DAT_ram_0018cd20 + param_2 * 4);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3068) =
       *(undefined4 *)(&DAT_ram_0018cd30 + param_2 * 4);
  return;
}


