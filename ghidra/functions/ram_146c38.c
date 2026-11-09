/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146c38 */

void FUN_ram_00146c38(int param_1,int param_2)

{
  char *pcVar1;
  
  FUN_ram_00146bc0();
  FUN_ram_0018aaf4(0x20);
  FUN_ram_0018ae6c();
  FUN_ram_0018ae60();
  FUN_ram_0018aa8c(DAT_ram_8002c901 != '\0');
  DAT_ram_0020fda8 = FUN_ram_0018ae6c();
  DAT_ram_0020fdac = 1;
  DAT_ram_0020fdb0 = 0x20;
  if (param_2 == 0) {
    DAT_ram_0020fd9c = 0;
    if (DAT_ram_0020fda4 != 0) {
      FUN_ram_000f7d60();
      DAT_ram_0020fda4 = 0;
    }
    pcVar1 = s_dynamic_one_bit_autocorrelation_d_ram_001c5a2c;
  }
  else {
    if (DAT_ram_0020fda4 != 0) {
      DAT_ram_0020fdac = 1;
      DAT_ram_0020fdb0 = 0x20;
      return;
    }
    DAT_ram_0020fd9c = 1;
    DAT_ram_0020fdb8 = 0xffffffb0;
    DAT_ram_0020fdbc = 0x20;
    DAT_ram_0020fda4 =
         FUN_ram_000f7c10(1000,*(undefined4 *)(param_1 + 0x1c),param_1,&LAB_ram_00147420,3);
    pcVar1 = s_dynamic_one_bit_autocorrelation_e_ram_001c5a00;
  }
  FUN_ram_000ee260(pcVar1);
  return;
}


