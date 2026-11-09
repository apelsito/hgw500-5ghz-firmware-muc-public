/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e91d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000e91d8(void)

{
  undefined4 in_r6;
  
  Auxregs0023 = 0;
  Auxregs0023 = 500000;
  Auxregs0022 = 3;
  LIMIT1 = 0;
  LIMIT1 = 250000;
  CONTROL1 = 3;
  FUN_ram_000e83ec(3,&LAB_ram_000f7f5c,&DAT_ram_8002c200,0,&LAB_ram_000f7f58,&DAT_ram_8002c1f4,in_r6
                   ,3);
  _DAT_ram_f300003c = 0x7a12;
  _DAT_ram_f3000044 = 2;
  FUN_ram_000e83ec(0x1a,0,0,0,0,0);
  _DAT_ram_e000005c = _DAT_ram_e000005c | 0x200000;
  FUN_ram_000f7998();
  return;
}


