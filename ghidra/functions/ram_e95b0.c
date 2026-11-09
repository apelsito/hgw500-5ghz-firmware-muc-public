/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e95b0 */

/* WARNING: Removing unreachable block (ram,0x000e95e0) */

undefined4 FUN_ram_000e95b0(void)

{
  uint uVar1;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  FUN_ram_0039fe00(0x470000,&LAB_ram_80020000,5000);
  FUN_ram_000ed114(0x470000,0x13a0);
  FUN_ram_0039fe00(&LAB_ram_80020000,0x46e004,0x6c4);
  FUN_ram_000ed114(&LAB_ram_80020000,0x6e0);
  FUN_ram_000ed494();
  STATUS32 = uVar1;
  return 1;
}


