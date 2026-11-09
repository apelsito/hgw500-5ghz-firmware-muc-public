/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00109fd4 */

undefined4 FUN_ram_00109fd4(undefined4 param_1,undefined4 param_2)

{
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_0012e794(param_1,param_2);
    FUN_ram_0012d030(param_1,param_2);
    FUN_ram_0012d134(param_1,param_2);
  }
  return 0xfffffffe;
}


