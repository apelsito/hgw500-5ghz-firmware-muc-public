/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00167460 */

uint FUN_ram_00167460(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)DAT_ram_002105d8;
  uVar3 = 0;
  if (uVar2 == 10) {
    FUN_ram_000f4dd4(DAT_ram_0018c2c8,0,0,0xa4,&DAT_ram_00210c1c);
    if (DAT_ram_0018c2f8 != &UNK_auxregs_0709) {
      FUN_ram_000f4dd4(DAT_ram_0018c2c8,1,0,0xa4,&DAT_ram_00210cc0);
    }
    FUN_ram_000f4dd4(DAT_ram_0018c2c8,2,0,0xa4,&DAT_ram_00210d64);
    uVar2 = FUN_ram_000f4f34(DAT_ram_0018c2c8,4);
  }
  else if (uVar2 == 0xb) {
    FUN_ram_000f4dd4(DAT_ram_0018c2cc,10,0,0x66,&DAT_ram_00210e08);
    uVar2 = FUN_ram_000f4f34(DAT_ram_0018c2cc,3);
  }
  else if (uVar2 == 0xc) {
    FUN_ram_000f4dd4(DAT_ram_0018c2d0,0xb,0,0x66,&DAT_ram_00211b20);
    uVar2 = FUN_ram_000f4f34(DAT_ram_0018c2d0,8);
  }
  else {
    if (uVar2 != 0xd) {
      pcVar1 = s_Calibration_is_not_saved__Flag_i_ram_001c8c1c;
      goto LAB_ram_001675a8;
    }
    FUN_ram_000f4dd4(DAT_ram_0018c2d4,1,0,0xa4,&DAT_ram_00214768);
    uVar2 = FUN_ram_000f4f34(DAT_ram_0018c2d4,0xe);
  }
  if (uVar2 == 0) {
    return 0;
  }
  pcVar1 = s_Calibration_file_saving_error__C_ram_001c8bf0;
  uVar3 = uVar2;
LAB_ram_001675a8:
  FUN_ram_000ee260(pcVar1,uVar2);
  return uVar3;
}


