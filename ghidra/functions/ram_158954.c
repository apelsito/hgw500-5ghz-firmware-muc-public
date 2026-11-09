/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158954 */

void FUN_ram_00158954(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_ram_0012ca88(1);
  uVar2 = FUN_ram_0012ca88(0);
  uVar3 = FUN_ram_0012ca88(2);
  uVar4 = FUN_ram_0012ca88(3);
  FUN_ram_001563ac(0xf,uVar2 / 100 & 0xffff | uVar1 / 100 << 0x10,
                   uVar4 / 100 << 0x10 | uVar3 / 100 & 0xffff,0,1);
  return;
}


