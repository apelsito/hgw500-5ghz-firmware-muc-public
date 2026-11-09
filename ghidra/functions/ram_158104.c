/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158104 */

void FUN_ram_00158104(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x3da4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd60)) {
    FUN_ram_001573e0(iVar1);
  }
  return;
}


