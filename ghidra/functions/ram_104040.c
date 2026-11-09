/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00104040 */

void FUN_ram_00104040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x144);
  **(uint **)(param_1 + 0x140) = **(uint **)(param_1 + 0x140) | 0x200;
  FUN_ram_000fe74c(uVar1,&DAT_ram_001a5e74,0x1c);
  return;
}


