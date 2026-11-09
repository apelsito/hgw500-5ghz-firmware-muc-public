/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016a24c */

void FUN_ram_0016a24c(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_1 == 0) {
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x2a6 + 0x212bf8,&DAT_ram_00192e3c + DAT_ram_0018c2f0 * 500,
                     100);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x2a6 + 0x212c5c,
                     &DAT_ram_0019338c + DAT_ram_0018c2f0 * 0x168,0x78);
    iVar1 = DAT_ram_0018c2f0 * 0x2a6;
    iVar2 = DAT_ram_0018c2f0 * 500;
    *(short *)(iVar1 + 0x212cd4) = (short)DAT_ram_0018c2e0;
    *(undefined2 *)(iVar1 + 0x212cd6) = 8;
    FUN_ram_0039fe00(&DAT_ram_00212cda + iVar1,iVar2 + 0x192ea0,100);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x2a6 + 0x212d3e,DAT_ram_0018c2f0 * 0x168 + 0x193404,0x78);
    bVar4 = DAT_ram_0018c31d;
    iVar1 = DAT_ram_0018c2f0 * 0x2a6;
    iVar2 = DAT_ram_0018c2f0 * 500;
    *(short *)(iVar1 + 0x212db6) = (short)DAT_ram_0018c2e4;
    bVar3 = DAT_ram_0018c31c;
    *(ushort *)(iVar1 + 0x212db8) = (ushort)bVar4;
    *(ushort *)(iVar1 + 0x212dba) = (ushort)bVar3;
    FUN_ram_0039fe00(&DAT_ram_00212dbc + iVar1,iVar2 + 0x192f04,100);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x2a6 + 0x212e20,DAT_ram_0018c2f0 * 0x168 + 0x19347c,0x78);
    bVar4 = DAT_ram_0018c31f;
    bVar3 = DAT_ram_0018c31e;
    iVar1 = DAT_ram_0018c2f0 * 0x2a6;
    *(short *)(&DAT_ram_00212e98 + iVar1) = (short)DAT_ram_0018c2e8;
    *(ushort *)(iVar1 + 0x212e9a) = (ushort)bVar4;
    *(ushort *)(iVar1 + 0x212e9c) = (ushort)bVar3;
    return;
  }
  if (param_1 == 1) {
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x66 + 0x213144,DAT_ram_0018c2f0 * 500 + 0x192fcc,100);
    return;
  }
  return;
}


