/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158a54 */

void FUN_ram_00158a54(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  FUN_ram_001567ec(DAT_ram_0018c274 + 0x14,&uStack_4,4);
  return;
}


