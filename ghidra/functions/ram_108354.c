/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108354 */

undefined4 FUN_ram_00108354(void)

{
  undefined4 uVar1;
  
  DAT_ram_0018c338 = FUN_ram_000ee4c8(0x5000,0,3);
  DAT_ram_0018c340 = FUN_ram_000ee4c8(0x5000,0,3);
  DAT_ram_0018c33c = FUN_ram_000ee4c8(0x80,0,5);
  DAT_ram_0018c344 = FUN_ram_000ee4c8(0x80,0,5);
  if (((DAT_ram_0018c338 == 0) || (DAT_ram_0018c340 == 0)) ||
     (DAT_ram_0018c33c == 0 || DAT_ram_0018c344 == 0)) {
    FUN_ram_000ee834();
    FUN_ram_000ee834(DAT_ram_0018c33c);
    FUN_ram_000ee834(DAT_ram_0018c340);
    FUN_ram_000ee834(DAT_ram_0018c338);
    uVar1 = 0xc;
  }
  else {
    FUN_ram_000eea80(DAT_ram_0018c338,0,0x5000);
    FUN_ram_000eea80(DAT_ram_0018c340,0,0x5000);
    FUN_ram_000eea80(DAT_ram_0018c33c,0,0x80);
    FUN_ram_000eea80(DAT_ram_0018c344,0,0x80);
    uVar1 = 0;
  }
  return uVar1;
}


