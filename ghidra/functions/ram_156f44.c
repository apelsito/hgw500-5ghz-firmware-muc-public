/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156f44 */

/* WARNING: Removing unreachable block (ram,0x00156fd4) */
/* WARNING: Removing unreachable block (ram,0x00156fdc) */
/* WARNING: Removing unreachable block (ram,0x00156ff4) */
/* WARNING: Removing unreachable block (ram,0x00157004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00156f44(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 in_r4;
  
  iVar1 = FUN_ram_00155e44();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_ram_00156738(iVar1 + 0x89,1,in_r3,2);
  FUN_ram_00156738(iVar1 + 0x8a,1,in_r4,2);
  sync();
  do {
  } while( true );
}


