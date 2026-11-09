/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ab30 */

undefined4 FUN_ram_0016ab30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_ram_0018c308 = 0;
  DAT_ram_0018c310 = param_3;
  FUN_ram_0018005c();
  if (DAT_ram_0018c010 == 3) {
    FUN_ram_00167c38();
    DAT_ram_0018c368 = 1;
    DAT_ram_0018c30c = 4;
    FUN_ram_0016a43c(0);
    FUN_ram_0016a43c(1);
  }
  else {
    FUN_ram_0016993c();
  }
  DAT_ram_0018c308 = 1;
  return 0;
}


