/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6c28 */

undefined4 FUN_ram_000e6c28(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 < 0x19) &&
     (uVar2 = (uint)(param_1 >> 2) >> 0x1d, uVar1 = param_1 + uVar2,
     ((uint)(byte)(&DAT_ram_0018c034)[(int)uVar1 >> 3] & 1 << ((uVar1 & 7) - uVar2 & 0x1f)) != 0)) {
    return 1;
  }
  return 0;
}


