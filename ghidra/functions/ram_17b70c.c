/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017b70c */

void FUN_ram_0017b70c(void)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (DAT_ram_8002c8bc != '\x03') {
    uVar5 = FUN_ram_001711e0(0x2a8,0xf,0);
    uVar6 = FUN_ram_001711e0(0x2a8,0xf000,0xc);
    uVar7 = FUN_ram_001711e0(0x2ac,0xf,0);
    uVar8 = FUN_ram_001711e0(0x2ac,0xf000,0xc);
    if (((((uVar5 == uVar6 && uVar5 == uVar7) && uVar5 == uVar8) && uVar6 == uVar7) &&
        uVar6 == uVar8) && uVar7 == uVar8) {
      uVar3 = FUN_ram_001711e0(700,0x7f,0);
      uVar4 = FUN_ram_001711e0(700,0x3f80,7);
      DAT_ram_0020fe38 = (uVar4 & 0xff) << 7 | uVar3 & 0xff;
      DAT_ram_0020fe3a = 0;
      uVar3 = FUN_ram_001711e0(0x2c0,0x7f,0);
      uVar4 = FUN_ram_001711e0(0x2c0,0x3f80,7);
      DAT_ram_0020fe3e = 0;
      DAT_ram_0020fe3c = (uVar4 & 0xff) << 7 | uVar3 & 0xff;
      uVar3 = FUN_ram_001711e0(0x2c4,0x7f,0);
      uVar4 = FUN_ram_001711e0(0x2c4,0x3f80,7);
      DAT_ram_0020fe42 = 0;
      DAT_ram_0020fe40 = uVar3 & 0xff | (uVar4 & 0xff) << 7;
      uVar3 = FUN_ram_001711e0(0x2c8,0x7f,0);
      uVar4 = FUN_ram_001711e0(0x2c8,0x3f80,7);
      DAT_ram_0020fe46 = 0;
      DAT_ram_0020fe44 = (uVar4 & 0xff) << 7 | uVar3 & 0xff;
      iVar9 = FUN_ram_001799f8(0,uVar5 & 0xffff);
      if (iVar9 < 10) {
        FUN_ram_000f4dd4(DAT_ram_0018c2c8,3,(iVar9 * 3 + (uint)DAT_ram_0018c360) * 0x10,0x10,
                         &DAT_ram_0020fe38);
        iVar1 = iVar9 * 6;
        *(short *)(&DAT_ram_00210c80 + iVar1) = (short)uVar5;
        *(short *)(&DAT_ram_00210c82 + iVar1) = (short)iVar9;
        bVar2 = DAT_ram_0018c360;
        uVar5 = (uint)DAT_ram_0018c360;
        *(undefined2 *)(&DAT_ram_00210c84 + iVar1) = 1;
        *(ushort *)(&DAT_ram_00210c22 + uVar5 * 10) = (ushort)bVar2;
        *(undefined2 *)(&DAT_ram_00210c24 + uVar5 * 10) = 1;
      }
    }
  }
  return;
}


