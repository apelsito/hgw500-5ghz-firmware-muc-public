/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001730d0 */

void FUN_ram_001730d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = 700;
    break;
  case 1:
    uVar1 = 0x2c0;
    break;
  case 2:
    uVar1 = 0x2c4;
    break;
  case 3:
    uVar1 = 0x2c8;
    break;
  default:
    goto switchD_ram_001730e8_default;
  }
  FUN_ram_001710d0(uVar1,0x3f80,7,param_2);
switchD_ram_001730e8_default:
  return;
}


