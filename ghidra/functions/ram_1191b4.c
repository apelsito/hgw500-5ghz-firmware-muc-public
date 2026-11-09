/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001191b4 */

undefined4 * FUN_ram_001191b4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_ram_000e7d50(param_1 + 4);
  for (puVar1 = *(undefined4 **)(param_1 + 0x14);
      (puVar2 = (undefined4 *)0x0, puVar1 != (undefined4 *)0x0 &&
      (puVar2 = puVar1, param_2 != *(ushort *)*puVar1)); puVar1 = (undefined4 *)puVar1[1]) {
  }
  FUN_ram_000e7da8(param_1 + 4);
  return puVar2;
}


