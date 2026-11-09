/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018bbb8 */

void FUN_ram_0018bbb8(void)

{
  undefined2 *puVar1;
  undefined2 extraout_r12;
  
  puVar1 = (undefined2 *)FUN_ram_0018bb94();
  *puVar1 = extraout_r12;
  return;
}


