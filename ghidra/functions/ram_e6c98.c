/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6c98 */

void FUN_ram_000e6c98(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x19) {
    uVar3 = (uint)(param_1 >> 2) >> 0x1d;
    uVar2 = uVar3 + param_1;
    if (((uint)(byte)(&DAT_ram_0018c034)[(int)uVar2 >> 3] & 1 << ((uVar2 & 7) - uVar3 & 0x1f)) != 0)
    {
      return;
    }
    uVar1 = 7;
  }
  else {
    uVar1 = 6;
  }
  FUN_ram_000f7c10(15000,uVar1,param_1,&LAB_ram_000eacc8,2);
  return;
}


