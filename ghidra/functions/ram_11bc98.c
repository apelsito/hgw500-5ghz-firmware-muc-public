/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bc98 */

undefined1 FUN_ram_0011bc98(int param_1,int param_2)

{
  return (&DAT_ram_0018d214)[param_2 + param_1 * 4];
}


