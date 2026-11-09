/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103a8c */

void FUN_ram_00103a8c(int param_1,undefined4 param_2)

{
  FUN_ram_0039fe00(&DAT_ram_001a5e6e,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x128),&DAT_ram_001a5e64,0x10);
  return;
}


