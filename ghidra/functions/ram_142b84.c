/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00142b84 */

void FUN_ram_00142b84(int param_1,short param_2,ushort param_3,ushort param_4,int param_5,
                     ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
                     char param_11)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar1 = DAT_ram_0018c210;
  if (DAT_ram_6003b400 == 1) {
    DAT_ram_6003b400 = 0;
    DAT_ram_0018c20c = 0;
    FUN_ram_000eea80(&DAT_ram_800379f0,0,0x60);
    DAT_ram_0018c210 = 1;
    uVar1 = DAT_ram_0018c210;
  }
  DAT_ram_0018c210 = uVar1;
  if (DAT_ram_0018c20c < 0x10) {
    uVar3 = 0;
    if ((param_11 != '\0') || (DAT_ram_0018c210 = uVar1 + 1, uVar3 = uVar1, uVar1 < 6)) {
      puVar2 = &DAT_ram_800379f0 + DAT_ram_0018c20c * 0x38 + uVar3 * 8;
      *puVar2 = (ushort)param_1 | param_2 << 0xc | ((param_5 != 0) + 1) * 0x100;
      puVar2[1] = param_3;
      puVar2[2] = param_4;
      puVar2[3] = param_6;
      puVar2[4] = param_7;
      puVar2[5] = param_8;
      puVar2[6] = param_9;
      puVar2[7] = param_10;
    }
  }
  else if (param_1 == 0) {
    DAT_ram_0018c208 = DAT_ram_0018c208 + 1;
  }
  return;
}


