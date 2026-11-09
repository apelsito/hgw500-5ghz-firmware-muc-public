/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010560c */

void FUN_ram_0010560c(int param_1)

{
  int iVar1;
  
  if ((3 < DAT_ram_8002c8dc) || (iVar1 = DAT_ram_8002c8dc, DAT_ram_8002c8dc < 0)) {
    iVar1 = 2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3068) = *(undefined4 *)(&DAT_ram_0018cd40 + iVar1 * 4)
  ;
  return;
}


