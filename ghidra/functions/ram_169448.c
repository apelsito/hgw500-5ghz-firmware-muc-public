/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00169448 */

void FUN_ram_00169448(uint param_1)

{
  int iVar1;
  
  if (param_1 < 4) {
    iVar1 = DAT_ram_0018c2f0 * 500;
    switch(param_1) {
    case 0:
      FUN_ram_0039fe00(&DAT_ram_00210c1c,&DAT_ram_00192e3c + iVar1,100);
      FUN_ram_0039fe00(&DAT_ram_00210c80,&DAT_ram_00193224 + DAT_ram_0018c2f0 * 0xb4,0x3c);
      DAT_ram_00210cbc = 3;
      iVar1 = DAT_ram_0018c2f0 * 500;
      DAT_ram_00210cbe = 8;
      if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
        FUN_ram_0039fe00(&DAT_ram_00210cc0,iVar1 + 0x192ea0,100);
        FUN_ram_0039fe00(&DAT_ram_00210d24,DAT_ram_0018c2f0 * 0xb4 + 0x193260,0x3c);
        DAT_ram_00210d62 = 8;
        iVar1 = DAT_ram_0018c2f0 * 500;
        DAT_ram_00210d60 = 3;
      }
      FUN_ram_0039fe00(&DAT_ram_00210d64,iVar1 + 0x192f04,100);
      FUN_ram_0039fe00(&DAT_ram_00210dc8,DAT_ram_0018c2f0 * 0xb4 + 0x19329c,0x3c);
      DAT_ram_00210e04 = 3;
      DAT_ram_00210e06 = 8;
      break;
    case 1:
      FUN_ram_0039fe00(&DAT_ram_00210e08,iVar1 + 0x192f68,100);
      DAT_ram_00210e6c = 6;
      break;
    case 2:
      FUN_ram_0039fe00(&DAT_ram_00211b20,iVar1 + 0x192fcc,100);
      break;
    case 3:
      FUN_ram_0039fe00(&DAT_ram_00214768,iVar1 + 0x192ea0,100);
      FUN_ram_0039fe00(&DAT_ram_002147cc,DAT_ram_0018c2f0 * 0xb4 + 0x193260,0x3c);
      DAT_ram_00214808 = 3;
      DAT_ram_0021480a = 8;
    }
  }
  return;
}


