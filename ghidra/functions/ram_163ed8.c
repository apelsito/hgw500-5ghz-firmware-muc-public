/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00163ed8 */

void FUN_ram_00163ed8(void)

{
  undefined4 uVar1;
  
  if (DAT_ram_0020fe20 != '\0') {
    DAT_ram_0020fe21 = 3;
    DAT_ram_0020fe28 = 0;
    DAT_ram_0020fe22 = 0;
    DAT_ram_0020fe24 = 0;
    DAT_ram_0020fe30 = 0;
    DAT_ram_0020fe23 = 0;
    DAT_ram_0020fe2c = 0;
    uVar1 = FUN_ram_0018ae6c();
    FUN_ram_0018ae60();
    DAT_ram_0020fe20 = '\x01';
    DAT_ram_800379b8 = uVar1;
    if (1 < DAT_ram_0020fe0c) {
      FUN_ram_000ee260(s_AutoCS__auto_cs_thresh_reset_ram_001c83a0);
    }
  }
  return;
}


