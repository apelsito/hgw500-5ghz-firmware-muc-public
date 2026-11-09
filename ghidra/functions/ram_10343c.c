/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010343c */

void FUN_ram_0010343c(int param_1,undefined4 param_2)

{
  FUN_ram_0039fe00(&DAT_ram_001a5e7e,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x144),&DAT_ram_001a5e74,0x1c);
  return;
}


