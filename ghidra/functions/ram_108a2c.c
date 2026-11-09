/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108a2c */

undefined4 FUN_ram_00108a2c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_00107b3c();
  if (DAT_ram_8002c8bc != '\x03') {
    DAT_ram_0018c334 = *(undefined4 *)(param_2 + 0x1c);
    FUN_ram_000ee260(s_g_bb_sc_is__p_ram_001c00f8);
    FUN_ram_0010862c(param_2);
    uVar1 = 0;
  }
  return uVar1;
}


