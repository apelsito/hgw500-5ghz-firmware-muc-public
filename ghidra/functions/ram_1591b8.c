/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001591b8 */

void FUN_ram_001591b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  FUN_ram_001567ec(DAT_ram_0018c274 + 0x10,&uStack_4,4);
  return;
}


