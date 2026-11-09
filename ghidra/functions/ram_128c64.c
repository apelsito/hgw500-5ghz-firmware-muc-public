/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128c64 */

undefined4 FUN_ram_00128c64(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 8) && (iVar1 = *(int *)(param_1 + 0x3f94 + param_2 * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x84);
  }
  return 0;
}


