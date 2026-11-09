/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016afe8 */

void FUN_ram_0016afe8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_ram_0039fe00(&DAT_ram_00192e3c + DAT_ram_0018c2f0 * 500,DAT_ram_0018c2f0 * 0x2a6 + 0x212bf8,
                     100);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 500 + 0x192ea0,&DAT_ram_00212cda + DAT_ram_0018c2f0 * 0x2a6,
                     100);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 500 + 0x192f04,&DAT_ram_00212dbc + DAT_ram_0018c2f0 * 0x2a6,
                     100);
    iVar1 = DAT_ram_0018c2f0 * 0x2a6;
    DAT_ram_0018c2e0 = (uint)*(ushort *)(iVar1 + 0x212cd4);
    DAT_ram_0018c2e4 = (uint)*(ushort *)(iVar1 + 0x212db6);
    DAT_ram_0018c2e8 = (uint)*(ushort *)(&DAT_ram_00212e98 + iVar1);
    FUN_ram_0039fe00(&DAT_ram_0019338c + DAT_ram_0018c2f0 * 0x168,iVar1 + 0x212c5c,0x78);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x168 + 0x193404,DAT_ram_0018c2f0 * 0x2a6 + 0x212d3e,0x78);
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 0x168 + 0x19347c,DAT_ram_0018c2f0 * 0x2a6 + 0x212e20,0x78);
    DAT_ram_0018c314 = (uint)*(ushort *)(DAT_ram_0018c2f0 * 0x2a6 + 0x212e9a);
    return;
  }
  if (param_1 == 1) {
    FUN_ram_0039fe00(DAT_ram_0018c2f0 * 500 + 0x192fcc,DAT_ram_0018c2f0 * 0x66 + 0x213144,100);
    return;
  }
  return;
}


