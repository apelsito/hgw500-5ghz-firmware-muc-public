/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd64c */

undefined4 FUN_ram_000fd64c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x205c);
}


