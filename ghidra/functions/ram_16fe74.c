/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016fe74 */

void FUN_ram_0016fe74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar2 = 3;
    uVar1 = 0x3fffff;
  }
  else {
    uVar2 = 0;
  }
  if ((&DAT_ram_00214398)[DAT_ram_0018c2f0 * 0x1c] == '\x05') {
    if (param_1 == 0) {
      DAT_ram_002142bc = 3;
      DAT_ram_002142f8 = 3;
      DAT_ram_00214334 = 3;
      DAT_ram_00214370 = 3;
    }
    else {
      DAT_ram_002142bc = 7;
      DAT_ram_002142f8 = 7;
      DAT_ram_00214334 = 7;
      DAT_ram_00214370 = 7;
    }
  }
  FUN_ram_001710d0(0x250,0xffffff,0,uVar1);
  FUN_ram_001710d0(0x254,0xffffff,0,uVar1);
  FUN_ram_001710d0(600,0x3fffff,0,uVar1);
  FUN_ram_001710d0(0x25c,0x3fffff,0,uVar1);
  FUN_ram_001710d0(0x250,0xc00000,0x16,uVar2);
  return;
}


