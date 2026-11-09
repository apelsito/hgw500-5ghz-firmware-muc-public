/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e4bd8 */

void FUN_ram_000e4bd8(int param_1,int param_2)

{
  param_1 = param_1 * 0x100;
  FUN_ram_000e43cc(param_1 + 0xf600,4,&DAT_ram_0018c5c8 + param_2 * 0x10);
  FUN_ram_000e43cc(param_1 + 0xf640,8,&PTR_DAT_ram_002d002d_ram_0018c6e8 + param_2 * 8);
  FUN_ram_000e43cc(param_1 + 0xf680,0xc,&PTR_DAT_ram_00250025_ram_0018c928 + param_2 * 0xc);
  return;
}


