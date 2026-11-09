/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001039f0 */

void FUN_ram_001039f0(int param_1,undefined4 param_2)

{
  FUN_ram_0039fe00(&DAT_ram_0018cd0a,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x154),&DAT_ram_0018cd00,0x1c);
  FUN_ram_0039fe00(&DAT_ram_001a5e6e,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x128),&DAT_ram_001a5e64,0x10);
  FUN_ram_0039fe00(&DAT_ram_001a5ea0,param_2,6);
  FUN_ram_000fe74c(*(undefined4 *)(param_1 + 0x15c),&DAT_ram_001a5e9c,0xc);
  return;
}


