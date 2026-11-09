/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157fb8 */

void FUN_ram_00157fb8(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte local_8;
  byte bStack_7;
  
  if (DAT_ram_0018c25c != 0) {
    uVar2 = (uint)DAT_ram_0018c24c;
    if (uVar2 == 0) {
      local_8 = (byte)DAT_ram_001aa584;
      uVar2 = 1 << (DAT_ram_001aa580 & 0x1f) & 0xffffU |
              1 << (DAT_ram_001aa580 >> 8 & 0x1f) & 0xffffU |
              1 << (DAT_ram_001aa580 >> 0x10 & 0x1f) & 0xffffU |
              1 << (DAT_ram_001aa580 >> 0x18 & 0x1f) & 0xffffU | 1 << (local_8 & 0x1f) & 0xffffU;
      bStack_7 = (byte)((ushort)DAT_ram_001aa584 >> 8);
      uVar1 = 1 << (bStack_7 & 0x1f);
      DAT_ram_0018c24c = (ushort)uVar2 | (ushort)uVar1;
      uVar2 = uVar2 | uVar1 & 0xffff;
    }
    FUN_ram_001563ac(10,*(undefined1 *)(param_1 + 0x67c),uVar2,0,1);
  }
  return;
}


