/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012c67c */

int FUN_ram_0012c67c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_00102c48(*(undefined4 *)(param_1 + 0x3b20));
  return (uint)(iVar1 != 0) << 4;
}


