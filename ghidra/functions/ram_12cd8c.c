/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012cd8c */

undefined4 FUN_ram_0012cd8c(int param_1,int param_2)

{
  if ((param_2 == 0) && (param_2 = *(int *)(param_1 + 0x51c), param_2 == 0)) {
    param_2 = FUN_ram_000ee73c(0x1e,0);
    *(int *)(param_1 + 0x51c) = param_2;
    if (param_2 == 0) {
      return 1;
    }
  }
  FUN_ram_0039fe00(param_2,&LAB_ram_001a6530,0x1e);
  FUN_ram_0012cae4(param_2,param_1);
  return 0;
}


