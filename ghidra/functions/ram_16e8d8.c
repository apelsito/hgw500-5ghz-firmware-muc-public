/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016e8d8 */

void FUN_ram_0016e8d8(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_0016e6c0();
  iVar1 = iVar1 * 8;
  FUN_ram_001710d0(0x288,0x7c00,10,(&DAT_ram_00195904)[iVar1]);
  FUN_ram_001710d0(0x288,0x1f,0,(&DAT_ram_00195905)[iVar1]);
  FUN_ram_001710d0(0x288,0x3e0,5,(&DAT_ram_00195905)[iVar1]);
  FUN_ram_001710d0(0x2b8,0xf000,0xc,(&DAT_ram_00195906)[iVar1]);
  FUN_ram_001710d0(0x2b8,0x1f0000,0x10,(&DAT_ram_00195907)[iVar1]);
  FUN_ram_001710d0(0x2cc,0xf,0,(&DAT_ram_00195908)[iVar1]);
  FUN_ram_001710d0(0x298,0x1c0,6,(&DAT_ram_00195909)[iVar1]);
  FUN_ram_001710d0(0x298,0x38,3,(&DAT_ram_0019590a)[iVar1]);
  FUN_ram_001710d0(0x298,7,0,(&DAT_ram_0019590b)[iVar1]);
  return;
}


