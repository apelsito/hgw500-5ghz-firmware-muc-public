/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015916c */

void FUN_ram_0015916c(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_001563ac(0x1a,param_2,0,0,1);
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_Update_MU_airtime_padding_failed_ram_001c75b4);
  }
  else {
    FUN_ram_000ee260(s_Update_MU_airtime_padding__d_____ram_001c75d8,param_2 & 0xffff,
                     param_2 >> 0x10);
  }
  return;
}


