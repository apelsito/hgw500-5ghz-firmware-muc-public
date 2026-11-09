/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103480 */

void FUN_ram_00103480(int param_1,undefined4 param_2)

{
  FUN_ram_0039fe00(&DAT_ram_001a5e84,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x144),&DAT_ram_001a5e74,0x1c);
  return;
}


