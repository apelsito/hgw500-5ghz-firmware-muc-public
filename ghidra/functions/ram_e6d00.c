/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6d00 */

void FUN_ram_000e6d00(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 >> 2) >> 0x1d;
  uVar1 = param_1 + uVar2;
  (&DAT_ram_0018c034)[(int)uVar1 >> 3] =
       (&DAT_ram_0018c034)[(int)uVar1 >> 3] & ~(byte)(1 << ((uVar1 & 7) - uVar2 & 0x1f));
  FUN_ram_000e68a4();
  return;
}


