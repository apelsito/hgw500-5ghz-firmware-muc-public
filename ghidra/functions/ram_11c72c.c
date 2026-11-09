/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c72c */

void FUN_ram_0011c72c(int param_1,int param_2)

{
  FUN_ram_0039fe00(param_1 + 0x6e,param_2 + 0xab,0x1d);
  FUN_ram_0039fe00(param_1 + 0x8b,param_2 + 200,0xb);
  FUN_ram_000f2ccc(s_AMPDU_params_size__spacing____d__ram_001c2ba4,*(undefined2 *)(param_1 + 0x76),
                   *(undefined1 *)(param_1 + 0x73));
  return;
}


