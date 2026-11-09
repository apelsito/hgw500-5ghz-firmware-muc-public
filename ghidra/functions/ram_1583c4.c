/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001583c4 */

undefined4 FUN_ram_001583c4(undefined4 *param_1)

{
  return *(undefined4 *)(DAT_ram_0018c278 + 0x2c + (uint)*(ushort *)*param_1 * 0x30);
}


