/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157cd0 */

void FUN_ram_00157cd0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_r5;
  undefined1 local_8;
  undefined1 uStack_7;
  
  uVar3 = (uint)DAT_ram_0018c24c;
  if (uVar3 == 0) {
    local_8 = (byte)DAT_ram_001aa584;
    uVar3 = 1 << (DAT_ram_001aa580 & 0x1f) & 0xffffU | 1 << (DAT_ram_001aa580 >> 8 & 0x1f) & 0xffffU
            | 1 << (DAT_ram_001aa580 >> 0x10 & 0x1f) & 0xffffU |
            1 << (DAT_ram_001aa580 >> 0x18 & 0x1f) & 0xffffU | 1 << (local_8 & 0x1f) & 0xffffU;
    uStack_7 = (byte)((ushort)DAT_ram_001aa584 >> 8);
    in_r5 = 6;
    uVar1 = 1 << (uStack_7 & 0x1f);
    DAT_ram_0018c24c = (ushort)uVar3 | (ushort)uVar1;
    uVar3 = uVar3 | uVar1 & 0xffff;
  }
  if (param_2 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = 8;
  }
  FUN_ram_001563ac(uVar2,param_1,uVar3,0,1,in_r5);
  return;
}


