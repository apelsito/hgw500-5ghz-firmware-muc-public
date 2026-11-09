/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb85c */

void FUN_ram_000fb85c(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                     uint param_6)

{
  FUN_ram_000fb058(param_1,2,0,param_2,0);
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3038) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x3038) & 0xffff7fc0 |
       (uint)(param_3 != 0) << 0xf | (param_6 & 3) << 4 | (param_5 & 3) << 2 | param_4 & 3;
  FUN_ram_000fb058(param_1,1,0,param_2,0);
  return;
}


