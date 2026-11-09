/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001583e0 */

void FUN_ram_001583e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  FUN_ram_001567ec(DAT_ram_0018c278 + 0x24 + (uint)*(ushort *)*param_1 * 0x30,&uStack_4,4);
  return;
}


