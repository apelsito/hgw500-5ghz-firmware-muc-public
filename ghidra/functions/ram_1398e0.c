/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001398e0 */

void FUN_ram_001398e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x388) != 0) {
    iVar2 = param_2 * 0xac + *(int *)(param_1 + 0x388) + 0x90;
    iVar1 = param_1 + 0x130 + param_2 * 0x118;
    FUN_ram_0039fe00(iVar1 + 0x24,iVar2 + 0x14,0x14);
    FUN_ram_0039fe00(iVar1 + 0x5c,iVar2 + 0x3c,0x14);
    FUN_ram_0039fe00(iVar1 + 0x94,iVar2 + 100,0x14);
  }
  return;
}


