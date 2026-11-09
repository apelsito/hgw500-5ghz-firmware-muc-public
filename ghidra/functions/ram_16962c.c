/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016962c */

void FUN_ram_0016962c(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 < 4) {
    iVar1 = DAT_ram_0018c2f0 * 500;
    switch(param_1) {
    case 0:
      FUN_ram_0039fe00(&DAT_ram_00192e3c + iVar1,&DAT_ram_00210c1c,100);
      iVar1 = DAT_ram_0018c2f0 * 500;
      if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
        FUN_ram_0039fe00(iVar1 + 0x192ea0,&DAT_ram_00210cc0,100);
        iVar1 = DAT_ram_0018c2f0 * 500;
      }
      FUN_ram_0039fe00(iVar1 + 0x192f04,&DAT_ram_00210d64,100);
      DAT_ram_0018c2e0 = (uint)DAT_ram_00210cbc;
      DAT_ram_0018c2e4 = (uint)DAT_ram_00210d60;
      DAT_ram_0018c2e8 = (uint)DAT_ram_00210e04;
      FUN_ram_0039fe00(&DAT_ram_00193224 + DAT_ram_0018c2f0 * 0xb4,&DAT_ram_00210c80,0x3c);
      FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0xb4 + 0x193260,&DAT_ram_00210d24,0x3c);
      FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0xb4 + 0x19329c,&DAT_ram_00210dc8,0x3c);
      DAT_ram_0018c314 = (uint)DAT_ram_00210e06;
      return;
    case 1:
      FUN_ram_0039fe00(iVar1 + 0x192f68,&DAT_ram_00210e08,100);
      DAT_ram_0018c318 = (uint)DAT_ram_00210e6c;
      return;
    case 2:
      puVar2 = &DAT_ram_00211b20;
      iVar1 = iVar1 + 0x192fcc;
      uVar3 = 100;
      break;
    case 3:
      FUN_ram_0039fe00(iVar1 + 0x192ea0,&DAT_ram_00214768,100);
      DAT_ram_0018c2e4 = (uint)DAT_ram_00214808;
      puVar2 = &DAT_ram_002147cc;
      uVar3 = 0x3c;
      iVar1 = DAT_ram_0018c2f0 * 0xb4 + 0x193260;
    }
    FUN_ram_0039fe00(iVar1,puVar2,uVar3);
    return;
  }
  return;
}


