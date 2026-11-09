/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159570 */

uint FUN_ram_00159570(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
  return *(uint *)(iVar1 + 0x94) >> 0x11 & 1;
}


