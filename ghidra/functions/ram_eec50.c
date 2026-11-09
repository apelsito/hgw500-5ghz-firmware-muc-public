/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eec50 */

void FUN_ram_000eec50(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_000f5e44();
  iVar1 = FUN_ram_000e4f2c();
  if (iVar1 < 0) {
    FUN_ram_000ee260(s_ERROR_in_uc_sprintf_buf__p_ram_001bdac8,(int)uVar2);
  }
  else {
    FUN_ram_000f5c28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),&stack0x00000008);
  }
  return;
}


