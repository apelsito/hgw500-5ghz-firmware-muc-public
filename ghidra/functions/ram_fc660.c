/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fc660 */

undefined4 FUN_ram_000fc660(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd0) = param_2;
  return 0;
}


