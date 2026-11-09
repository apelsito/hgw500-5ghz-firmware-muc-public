/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012ca88 */

int FUN_ram_0012ca88(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 4) {
    puVar1 = &DAT_ram_0020fd8c + param_1 * 3;
  }
  else {
    puVar1 = (undefined4 *)&DAT_ram_0020fdb0;
  }
  return puVar1[-0x35] * 1000 + (uint)puVar1[-0x36] / 500;
}


