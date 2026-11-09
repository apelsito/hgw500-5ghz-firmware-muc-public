/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00167ac8 */

undefined4 FUN_ram_00167ac8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_000f4bdc(param_2);
  uVar2 = FUN_ram_000ee734(0x14,0);
  FUN_ram_000eea80(uVar2,0,0x14);
  if (*(int *)(&DAT_ram_001dce70 + iVar1 * 0x14) != 0) {
    FUN_ram_000ee834();
  }
  *(undefined4 *)(&DAT_ram_001dce70 + iVar1 * 0x14) = uVar2;
  return 0;
}


