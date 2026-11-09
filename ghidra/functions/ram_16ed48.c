/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ed48 */

void FUN_ram_0016ed48(void)

{
  int iVar1;
  
  if (DAT_ram_0018c368 == 1) {
    iVar1 = FUN_ram_001711e0(0x10,0x30,4);
    DAT_ram_8003723c = FUN_ram_001711e0(0x27c,0xff0000,0x10);
    DAT_ram_80037238 = iVar1;
    if ((iVar1 == 3) || (iVar1 == 0)) {
      FUN_ram_001710d0(0x27c,0xff0000,0x10);
    }
    iVar1 = FUN_ram_00183ef4();
    if (0x3f < iVar1) {
      iVar1 = 0x3f;
    }
    FUN_ram_00188864(*(undefined2 *)(&DAT_ram_002205e8 + iVar1));
  }
  return;
}


