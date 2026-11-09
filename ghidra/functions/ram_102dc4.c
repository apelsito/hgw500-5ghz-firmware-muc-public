/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102dc4 */

void FUN_ram_00102dc4(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x544) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x544);
  return;
}


