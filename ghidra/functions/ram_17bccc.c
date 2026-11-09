/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017bccc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0017bccc(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (DAT_ram_8002c8bc != '\x03') {
    uVar3 = FUN_ram_001711e0(0x2a8,0xf,0);
    uVar4 = FUN_ram_001711e0(0x2a8,0xf000,0xc);
    uVar5 = FUN_ram_001711e0(0x2ac,0xf,0);
    uVar6 = FUN_ram_001711e0(0x2ac,0xf000,0xc);
    if (((((uVar3 == uVar4 && uVar3 == uVar5) && uVar3 == uVar6) && uVar4 == uVar5) &&
        uVar4 == uVar6) && uVar5 == uVar6) {
      DAT_ram_0020fe48 = (undefined2)_DAT_ram_e609115c;
      DAT_ram_0020fe4a = (undefined2)_DAT_ram_e609114c;
      DAT_ram_0020fe4c = (undefined2)_DAT_ram_e6091160;
      DAT_ram_0020fe4e = (undefined2)_DAT_ram_e6091150;
      DAT_ram_0020fe50 = (undefined2)_DAT_ram_e6091164;
      DAT_ram_0020fe52 = (undefined2)_DAT_ram_e6091154;
      DAT_ram_0020fe54 = (undefined2)_DAT_ram_e6091168;
      DAT_ram_0020fe56 = (undefined2)_DAT_ram_e6091158;
      iVar7 = FUN_ram_001799f8(2,uVar3 & 0xffff);
      if (iVar7 < 10) {
        FUN_ram_000f4dd4(DAT_ram_0018c2c8,5,(iVar7 * 3 + (uint)DAT_ram_0018c361) * 0x10,0x10,
                         &DAT_ram_0020fe48);
        iVar1 = iVar7 * 6;
        *(short *)(&DAT_ram_00210dc8 + iVar1) = (short)uVar3;
        *(short *)(&DAT_ram_00210dca + iVar1) = (short)iVar7;
        bVar2 = DAT_ram_0018c361;
        uVar3 = (uint)DAT_ram_0018c361;
        *(undefined2 *)(&DAT_ram_00210dcc + iVar1) = 1;
        *(ushort *)(&DAT_ram_00210d6a + uVar3 * 10) = (ushort)bVar2;
        *(undefined2 *)(&DAT_ram_00210d6c + uVar3 * 10) = 1;
      }
    }
  }
  return;
}


