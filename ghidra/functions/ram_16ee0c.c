/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ee0c */

void FUN_ram_0016ee0c(void)

{
  undefined4 uVar1;
  
  FUN_ram_001710d0(0x280,0x200,9,0);
  FUN_ram_001710d0(0x280,0x100,8,0);
  FUN_ram_001710d0(0x280,0x80,7,1);
  FUN_ram_001710d0(0x280,0x200,9,1);
  FUN_ram_000e4fa0(100);
  uVar1 = FUN_ram_001711e0(4,0xff,0);
  FUN_ram_001710d0(0x27c,0xff0000,0x10,uVar1);
  return;
}


