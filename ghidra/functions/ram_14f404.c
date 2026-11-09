/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014f404 */

void FUN_ram_0014f404(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    iVar1 = -100;
  }
  else {
    iVar1 = -0x40;
  }
  puVar2 = (undefined4 *)(param_1 + 0x7f0 + iVar1);
  FUN_ram_000eea80(puVar2,0,0x20);
  FUN_ram_0013d660(param_1,puVar2 + 4);
  *puVar2 = 1;
  return;
}


