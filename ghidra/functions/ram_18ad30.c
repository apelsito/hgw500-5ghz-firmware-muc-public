/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018ad30 */

int FUN_ram_0018ad30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_0018aca4();
  iVar2 = FUN_ram_0018aca4(param_2);
  return iVar1 + iVar2 * -2 + param_3 * -0x3c + 0xb4;
}


