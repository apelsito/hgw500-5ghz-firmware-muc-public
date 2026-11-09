/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001583a8 */

void FUN_ram_001583a8(undefined4 *param_1,undefined4 param_2)

{
  FUN_ram_001567ec((uint)*(ushort *)*param_1 * 0x30 + DAT_ram_0018c278,param_2,0x20);
  return;
}


