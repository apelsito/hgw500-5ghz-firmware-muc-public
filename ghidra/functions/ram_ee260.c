/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ee260 */

undefined4 FUN_ram_000ee260(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_000f5e44();
  uVar1 = FUN_ram_000f5c28(&DAT_ram_0019d63c,uVar1,&stack0x00000004);
  iVar2 = FUN_ram_000ee188(&DAT_ram_0019d63c);
  if (iVar2 != 0) {
    FUN_ram_000f1e08(&DAT_ram_0019d63c);
    FUN_ram_000f1d70();
  }
  return uVar1;
}


