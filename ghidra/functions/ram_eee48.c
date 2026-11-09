/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eee48 */

undefined4 FUN_ram_000eee48(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_ram_000f5e44();
  iVar1 = FUN_ram_000eee08();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)((int)uVar3 + 0xc) != 0) {
    FUN_ram_000ee260(s__ratelimit__d_suppressions__ram_001bdafc);
  }
  uVar2 = FUN_ram_000f5c28(&DAT_ram_0019d63c,(int)((ulonglong)uVar3 >> 0x20),&stack0x00000008);
  iVar1 = FUN_ram_000ee188(&DAT_ram_0019d63c);
  if (iVar1 != 0) {
    FUN_ram_000f1e08(&DAT_ram_0019d63c);
    FUN_ram_000f1d70();
    return uVar2;
  }
  return uVar2;
}


