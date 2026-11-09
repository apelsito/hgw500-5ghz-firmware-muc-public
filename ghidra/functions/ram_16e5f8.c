/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016e5f8 */

void FUN_ram_0016e5f8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_001711e0(0x27c,0xff0000,0x10);
  FUN_ram_001710d0(0x280,0x80,7,0);
  FUN_ram_001710d0(0x280,0x100,8,1);
  FUN_ram_000e4fa0(300);
  iVar2 = FUN_ram_001711e0(0x10,0x30,4);
  iVar3 = 0xff;
  do {
    if (iVar2 == 2) {
      return;
    }
    if (iVar2 == 3) {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
    }
    else if ((iVar2 == 0) && (uVar1 = uVar1 + 1, 0xff < uVar1)) {
      uVar1 = 0xff;
    }
    FUN_ram_001710d0(0x27c,0xff0000,0x10,uVar1);
    FUN_ram_000e4fa0(5);
    iVar2 = FUN_ram_001711e0(0x10,0x30,4);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


