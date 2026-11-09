/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00150e98 */

void FUN_ram_00150e98(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = AUX_IENABLE;
  AUX_IENABLE = 0x10;
  CONTROL1 = 0;
  COUNT1 = 0;
  LIMIT1 = param_1;
  CONTROL1 = 3;
  COUNT1 = 0;
  uVar1 = STATUS32;
  STATUS32 = uVar1 | 6;
  sleep(0);
  STATUS32 = uVar1;
  CONTROL1 = 0;
  AUX_IENABLE = uVar2;
  return;
}


